##############################################################################
# Imports
##############################################################################

import py_trees
import py_trees_ros.trees
import py_trees.console as console
import rclpy
import sys
import random

##############################################################################
# Auxiliary functions
##############################################################################

class SayHello(py_trees.behaviour.Behaviour):
    def __init__(self, message):
        super(SayHello, self).__init__(name="SayHello")
        self.message = message

    def update(self):
        print(self.message)

        n = random.randint(0, 10)
        if (n > 5): status = py_trees.common.Status.RUNNING
        else: status = py_trees.common.Status.SUCCESS

        return status

def create_hello_sequence() -> py_trees.behaviour.Behaviour:
    """
    Create a sequence of SayHello behaviours.

    Returns:
        the root of the tree
    """
    root = py_trees.composites.Sequence(name="HelloSequence", memory=True)

    hello1 = SayHello("hello 1")
    hello2 = SayHello("hello 2")
    hello3 = SayHello("hello 3")

    root.add_children([hello1, hello2, hello3])

    return root


def tutorial_main():
    """
    Entry point for the demo script.
    """
    rclpy.init(args=None)
    root = create_hello_sequence()
    tree = py_trees_ros.trees.BehaviourTree(
        root=root,
        unicode_tree_debug=False
    )
    try:
        tree.setup(timeout=15)
    except py_trees_ros.exceptions.TimedOutError as e:
        console.logerror(console.red + "failed to setup the tree, aborting [{}]".format(str(e)) + console.reset)
        tree.shutdown()
        rclpy.try_shutdown()
        sys.exit(1)
    except KeyboardInterrupt:
        # not a warning, nor error, usually a user-initiated shutdown
        console.logerror("tree setup interrupted")
        tree.shutdown()
        rclpy.try_shutdown()
        sys.exit(1)

    tree.tick_tock(period_ms=5000)

    try:
        rclpy.spin(tree.node)
    except (KeyboardInterrupt, rclpy.executors.ExternalShutdownException):
        pass
    finally:
        tree.shutdown()
        rclpy.try_shutdown()
