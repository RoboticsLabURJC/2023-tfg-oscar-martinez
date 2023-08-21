from launch import LaunchDescription
from launch.actions import ExecuteProcess
from launch_ros.actions import Node
from ament_index_python.packages import get_package_share_directory
import os

def generate_launch_description():

    # Get the package directories
    pkg_share_directory = get_package_share_directory('py_gardener')
    parser_script_path = os.path.join(pkg_share_directory, 'py_gardener', 'parser.py')

    tree_path = os.path.join(pkg_share_directory, 'resource', 'tree.xml')
    action_path = os.path.join(pkg_share_directory, 'actions/')
    result_path = os.path.join(pkg_share_directory, 'resource', 'final_tree.xml')
    
    return LaunchDescription([

        ExecuteProcess(
            cmd=['python3', parser_script_path, tree_path, action_path, result_path],
            output='screen',
        ),
        Node(
            package='py_gardener',
            executable='translator',
            output='screen',
            parameters=[{'result_path': result_path}],
        ),
    ])
