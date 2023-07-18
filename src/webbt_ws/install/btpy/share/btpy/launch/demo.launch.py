import launch
import launch_ros

def generate_launch_description():
    """
    Launch description for the traslator.
    """
    return launch.LaunchDescription(
        [
            launch_ros.actions.Node(
                package='btpy',
                executable="tree_batter_check",
                output='screen',
                emulate_tty=True,
            )
        ]
    )
