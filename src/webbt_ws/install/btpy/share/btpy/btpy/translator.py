##############################################################################
# Imports
##############################################################################

import py_trees
import py_trees_ros.trees
import py_trees.console as console
import rclpy
import xml.etree.ElementTree as ET
import typing
import autopep8
import textwrap
import ament_index_python
import rclpy.node
import itertools
import types

##############################################################################
# Tree classes
##############################################################################

class ReactiveSequence(py_trees.composites.Composite):

    def __init__(
        self,
        name: str,
        memory: bool,
        children: typing.Optional[typing.List[py_trees.behaviour.Behaviour]] = None,
    ):
        super(ReactiveSequence, self).__init__(name, children)
        self.memory = memory

    def tick(self) -> typing.Iterator[py_trees.behaviour.Behaviour]:

        """
        Tick over the children as a reactive sequence.
        """

        self.logger.debug("%s.tick()" % self.__class__.__name__)

        # Initialize always from the start
        self.current_child = self.children[0] if self.children else None
        for child in self.children:
            if child.status != py_trees.common.Status.INVALID:
                child.stop(py_trees.common.Status.INVALID)

        # Nothing to do
        if not self.children:
            self.current_child = None
            self.stop(py_trees.common.Status.SUCCESS)
            yield self
            return

        # Ticking the children
        for child in self.children:
            for node in child.tick():
                yield node
                if node is child and node.status != py_trees.common.Status.SUCCESS:
                    self.status = node.status
                    yield self
                    return

        self.stop(py_trees.common.Status.SUCCESS)
        yield self

    def stop(self, new_status: py_trees.common.Status = py_trees.common.Status.INVALID) -> None:
        """
        Ensure that children are appropriately stopped and update status.

        Args:
            new_status : the composite is transitioning to this new status
        """
        self.logger.debug(
            f"{self.__class__.__name__}.stop()[{self.status}->{new_status}]"
        )
        py_trees.composites.Composite.stop(self, new_status)

class SequenceWithMemory(py_trees.composites.Composite):

    def __init__(
        self,
        name: str,
        memory: bool,
        children: typing.Optional[typing.List[py_trees.behaviour.Behaviour]] = None,
    ):
        super(SequenceWithMemory, self).__init__(name, children)
        self.memory = memory

    def tick(self) -> typing.Iterator[py_trees.behaviour.Behaviour]:

        """
        Tick over the children as a memory-enabled sequence.
        """

        self.logger.debug("%s.tick()" % self.__class__.__name__)

        # Get the index of the current child
        index = self.children.index(self.current_child) if self.current_child != None else 0

        # Nothing to do
        if not self.children:
            self.current_child = None
            self.stop(py_trees.common.Status.SUCCESS)
            yield self
            return

        # Ticking the children
        for child in itertools.islice(self.children, index, None):
            for node in child.tick():
                yield node
                if node is child:
                    if node.status in [py_trees.common.Status.RUNNING, py_trees.common.Status.FAILURE]:
                        self.status = node.status
                        self.current_child = child
                        yield self
                        return
                    else:
                        # child has returned SUCCESS, move to next child on the next tick
                        index += 1
                        self.current_child = self.children[index] if index < len(self.children) else None

        # All children have returned SUCCESS
        if self.current_child is None:
            self.stop(py_trees.common.Status.SUCCESS)

        yield self


    def stop(self, new_status: py_trees.common.Status = py_trees.common.Status.INVALID) -> None:
        """
        Ensure that children are appropriately stopped and update status.

        Args:
            new_status : the composite is transitioning to this new status
        """
        self.logger.debug(
            f"{self.__class__.__name__}.stop()[{self.status}->{new_status}]"
        )
        py_trees.composites.Composite.stop(self, new_status)

class ReactiveFallback(py_trees.composites.Composite):

    def __init__(
        self,
        name: str,
        memory: bool,
        children: typing.Optional[typing.List[py_trees.behaviour.Behaviour]] = None,
    ):
        super(ReactiveFallback, self).__init__(name, children)
        self.memory = memory

    def tick(self) -> typing.Iterator[py_trees.behaviour.Behaviour]:

        self.logger.debug("%s.tick()" % self.__class__.__name__)

        # Initialize
        if self.status != py_trees.common.Status.RUNNING:
            self.logger.debug(
                "%s.tick() [!RUNNING->reset current_child]" % self.__class__.__name__
            )
            self.current_child = self.children[0] if self.children else None

        # nothing to do
        if not self.children:
            self.current_child = None
            self.stop(py_trees.common.Status.FAILURE)
            yield self
            return

        # always start from the first child
        index = 0

        # actual work
        previous = self.current_child
        for child in itertools.islice(self.children, index, None):
            for node in child.tick():
                yield node
                if node is child:
                    if (
                        node.status == py_trees.common.Status.RUNNING
                        or node.status == py_trees.common.Status.SUCCESS
                    ):
                        self.current_child = child
                        self.status = node.status
                        if previous is None or previous != self.current_child:
                            # we interrupted, invalidate everything at a lower priority
                            passed = False
                            for child in self.children:
                                if passed:
                                    if child.status != py_trees.common.Status.INVALID:
                                        child.stop(py_trees.common.Status.INVALID)
                                passed = True if child == self.current_child else passed
                        yield self
                        return
                    
        # all children failed, set failure ourselves and current child to the last bugger who failed us
        self.status = py_trees.common.Status.FAILURE
        try:
            self.current_child = self.children[-1]
        except IndexError:
            self.current_child = None
        yield self

    def stop(self, new_status: py_trees.common.Status = py_trees.common.Status.INVALID) -> None:
        """
        Ensure that children are appropriately stopped and update status.

        Args:
            new_status : the composite is transitioning to this new status
        """
        self.logger.debug(
            f"{self.__class__.__name__}.stop()[{self.status}->{new_status}]"
        )
        py_trees.composites.Composite.stop(self, new_status)

##############################################################################
# Auxiliary variables
##############################################################################

factory = {
    "Sequence": py_trees.composites.Sequence,
    "ReactiveSequence": ReactiveSequence,
    "SequenceWithMemory": SequenceWithMemory,
    "Fallback": py_trees.composites.Selector,
    "ReactiveFallback": ReactiveFallback,
    "Inverter": py_trees.decorators.Inverter,
    "RetryUntilSuccessful": py_trees.decorators.Retry,
    "ForceSuccess": py_trees.decorators.FailureIsSuccess,
    "ForceFailure": py_trees.decorators.SuccessIsFailure,
    "KeepRunningUntilFailure": py_trees.decorators.SuccessIsRunning
}

##############################################################################
# Auxiliary functions
##############################################################################

def get_branches(element):

    class_name = element.tag
    name_arg = element.get('name')
    
    Class = factory.get(class_name)

    if Class is None:
        print(f"Class {class_name} not found")
        return None

    if 'Sequence' in class_name or 'Fallback' in class_name:
        instance = Class(name_arg, memory=True)
        for child_element in element:
            child_instance = get_branches(child_element)
            if child_instance is not None:
                instance.add_child(child_instance)
    elif 'RetryUntilSuccessful' in class_name:
        nfailures = element.get('num_attempts')
        for child_element in element:
            child_instance = get_branches(child_element)
            if child_instance is not None:
                child = child_instance
        retry_name = "Retry_" + str(nfailures)
        instance = Class(name=retry_name, num_failures=int(nfailures), child=child)
    elif 'Inverter' in class_name or 'Force' in class_name or 'KeepRunningUntilFailure' in class_name:
        for child_element in element:
            child_instance = get_branches(child_element)
            if child_instance is not None:
                child = child_instance
        instance = Class(name=class_name, child=child)
    else:
        instance = Class(name_arg)

    return instance

def construct_behaviour_tree_from_xml(doc):

    behavior_tree_element = doc.find('.//BehaviorTree')
    
    if behavior_tree_element is None:
        print("No BehaviorTree found in the XML")
        return None

    root_behaviour = None
    for child in behavior_tree_element:
        root_behaviour = get_branches(child)

    return root_behaviour

def add_actions_to_factory(doc):
    code_element = doc.find('.//Code')

    for element in code_element:
        class_name = element.tag
        code_text = textwrap.dedent(element.text)

        formatted_code = autopep8.fix_code(code_text)
        namespace = globals().copy()  # Copy current global namespace

        exec(formatted_code, namespace)  # Execute in the copied namespace

        # Update the original global namespace with imported modules if not already present
        new_imports = {k: v for k, v in namespace.items() if isinstance(v, types.ModuleType) and k not in globals()}
        globals().update(new_imports)

        # Access the class from the namespace and create an instance
        class_ref = namespace[class_name]
        factory[class_name] = class_ref

##############################################################################
# ROS2 node
##############################################################################

class Gardener(rclpy.node.Node):

    def __init__(self):

        super().__init__('Gardener')

    def plant_tree(self):

        # Process the tree file
        pkg_path = ament_index_python.packages.get_package_share_directory('btpy')
        result_path = pkg_path + "/resource/final_tree.xml"

        # Now open and read the file
        with open(result_path, 'r') as f:
            tree_xml = f.read()

        xml_doc = ET.fromstring(tree_xml)

        # Add actions to factory
        add_actions_to_factory(xml_doc)

        # Construct tree
        root = construct_behaviour_tree_from_xml(xml_doc)
        self.tree = py_trees_ros.trees.BehaviourTree(root=root, unicode_tree_debug=False)
    
    def water_tree(self, timeout):

        try:
            self.tree.setup(timeout=timeout)
        except py_trees_ros.exceptions.TimedOutError as e:
            console.logerror(console.red + "Failed to setup tree" + console.reset)
            self.tree.shutdown()
            return False
        except KeyboardInterrupt:
            # not a warning, nor error, usually a user-initiated shutdown
            console.logerror("Tree setup interrupted")
            self.tree.shutdown()
            return False
    
        return True
    
    def cut_tree(self):

        self.tree.shutdown()

##############################################################################
# Entry point
##############################################################################

def translator_main():

    # Init ros
    rclpy.init(args=None)

    # Init gardener node
    gardener = Gardener()
    gardener.plant_tree()
    gardener.water_tree(15)

    # Init the execution loop
    gardener.tree.tick_tock(period_ms=1000)
    try:
        rclpy.spin(gardener.tree.node)
    except (KeyboardInterrupt, rclpy.executors.ExternalShutdownException):
        pass
    finally:
        gardener.tree.shutdown()
        rclpy.try_shutdown()

    gardener.cut_tree()
    rclpy.shutdown()
