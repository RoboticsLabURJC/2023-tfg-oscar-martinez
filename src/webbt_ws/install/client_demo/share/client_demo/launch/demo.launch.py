from launch import LaunchDescription
from launch.actions import ExecuteProcess
from launch_ros.actions import Node
from ament_index_python.packages import get_package_share_directory
import os

def generate_launch_description():

    # Get the package directories
    pkg_share_directory = get_package_share_directory('client_demo')
    
    return LaunchDescription([

        Node(
            package='client_demo',
            executable='demo',
            output='screen',
        ),
    ])
