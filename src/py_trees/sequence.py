##############################################################################

# Imports

##############################################################################

import time
import py_trees
import xml.etree.ElementTree as ET
import typing
import itertools
import random

##############################################################################

# Sequence classes

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

##############################################################################

# Fallback classes

##############################################################################

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

# Behavior classes

##############################################################################

class Move(py_trees.behaviour.Behaviour):

    def __init__(self, name: str = "Move"):

        """Configure the name of the behaviour."""
        super(Move, self).__init__(name)
        self.logger.debug("%s.__init__()" % (self.__class__.__name__))

    def setup(self, **kwargs: int) -> None:

        """No delayed initialisation required for this example."""
        self.logger.debug("%s.setup()" % (self.__class__.__name__))

    def initialise(self) -> None:

        """Reset a counter variable."""
        self.logger.debug("%s.initialise()" % (self.__class__.__name__))
        self.counter = 0

    def update(self) -> py_trees.common.Status:

        """Increment the counter and decide on a new status."""
        self.counter += 1

        new_status = (py_trees.common.Status.SUCCESS if self.counter == 3 else py_trees.common.Status.RUNNING)

        if new_status == py_trees.common.Status.SUCCESS: self.feedback_message = "Move finished"
        else: self.feedback_message = "Moving"

        return new_status

    def terminate(self, new_status: py_trees.common.Status) -> None:

        """Nothing to clean up in this example."""

        self.logger.debug(

            "%s.terminate()[%s->%s]"

            % (self.__class__.__name__, self.status, new_status)

        )

class Turn(py_trees.behaviour.Behaviour):

    def __init__(self, name: str = "Turn"):

        """Configure the name of the behaviour."""
        super(Turn, self).__init__(name)
        self.logger.debug("%s.__init__()" % (self.__class__.__name__))

    def setup(self, **kwargs: int) -> None:

        """No delayed initialisation required for this example."""

        self.logger.debug("%s.setup()" % (self.__class__.__name__))

    def initialise(self) -> None:

        """Reset a counter variable."""

        self.logger.debug("%s.initialise()" % (self.__class__.__name__))
        self.counter = 0

    def update(self) -> py_trees.common.Status:

        """Increment the counter and decide on a new status."""

        self.counter += 1

        new_status = (py_trees.common.Status.SUCCESS if self.counter == 3 else py_trees.common.Status.RUNNING)

        if new_status == py_trees.common.Status.SUCCESS: self.feedback_message = "Turn finished"
        else: self.feedback_message = "Turning"

        return new_status


    def terminate(self, new_status: py_trees.common.Status) -> None:

        """Nothing to clean up in this example."""

        self.logger.debug(

            "%s.terminate()[%s->%s]"

            % (self.__class__.__name__, self.status, new_status)

        )

class CheckObstacle(py_trees.behaviour.Behaviour):

    def __init__(self, name: str = "CheckObstacle"):

        """Configure the name of the behaviour."""
        super(CheckObstacle, self).__init__(name)
        self.logger.debug("%s.__init__()" % (self.__class__.__name__))

    def setup(self, **kwargs: int) -> None:

        """No delayed initialisation required for this example."""
        self.logger.debug("%s.setup()" % (self.__class__.__name__))

    def initialise(self) -> None:

        """Reset a counter variable."""
        self.logger.debug("%s.initialise()" % (self.__class__.__name__))
        self.counter = 0

    def update(self) -> py_trees.common.Status:

        """Increment the counter and decide on a new status."""
        number = random.randint(-10, 5)

        if (number >= -10 and number < -9): new_status = py_trees.common.Status.SUCCESS
        elif (number > -9 and number < 4): new_status = py_trees.common.Status.RUNNING
        else: new_status = py_trees.common.Status.FAILURE

        return new_status

    def terminate(self, new_status: py_trees.common.Status) -> None:

        """Nothing to clean up in this example."""

        self.logger.debug(

            "%s.terminate()[%s->%s]"

            % (self.__class__.__name__, self.status, new_status)

        )

##############################################################################

# Helper functions

##############################################################################

classes_dict = {
    "Move": Move,
    "Turn": Turn,
    "CheckObstacle": CheckObstacle,
    "Sequence": py_trees.composites.Sequence,
    "ReactiveSequence": ReactiveSequence,
    "SequenceWithMemory": SequenceWithMemory,
    "Fallback": py_trees.composites.Selector,
    "ReactiveFallback": ReactiveFallback,
    "Retry": py_trees.decorators.Retry
}

def get_branches(element):

    class_name = element.tag
    name_arg = element.get('name')
    
    Class = classes_dict.get(class_name)

    if Class is None:
        print(f"Class {class_name} not found")
        return None

    if 'Sequence' in class_name or 'Fallback' in class_name:
        instance = Class(name_arg, memory=True)
        for child_element in element:
            child_instance = get_branches(child_element)
            if child_instance is not None:
                instance.add_child(child_instance)
    elif 'Retry' in class_name:
        nfailures = element.get('num_failures')
        for child_element in element:
            child_instance = get_branches(child_element)
            if child_instance is not None:
                child = child_instance
        instance = Class(name="retry", num_failures=int(nfailures), child=child)

    else:
        instance = Class(name_arg)

    return instance

def construct_behaviour_tree_from_xml(xml_string):

    root = ET.fromstring(xml_string)
    behavior_tree_element = root.find('.//BehaviorTree')
    
    if behavior_tree_element is None:
        print("No BehaviorTree found in the XML")
        return None

    root_behaviour = None
    for child in behavior_tree_element:
        root_behaviour = get_branches(child)

    return root_behaviour

##############################################################################

# Main

##############################################################################

def main() -> None:

    # Get the XML file
    with open('bt.xml', 'r') as file:
        xml_string = file.read()

    tree = construct_behaviour_tree_from_xml(xml_string)

    # Execute
    tree.setup_with_descendants()

    while tree.status != py_trees.common.Status.SUCCESS:

        try:

            status = tree.tick_once()

            print("\n")

            print(py_trees.display.unicode_tree(root=tree, show_status=True))
            time.sleep(1.0)

        except KeyboardInterrupt:

            break

main()