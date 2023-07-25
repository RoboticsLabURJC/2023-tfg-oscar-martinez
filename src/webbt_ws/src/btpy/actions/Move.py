import py_trees
# import HAL

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