import py_trees
import random

class CheckObstacle(py_trees.behaviour.Behaviour):

    def __init__(self, name: str = "CheckObstacle"):

        """Configure the name of the behaviour."""
        super().__init__(name)
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
