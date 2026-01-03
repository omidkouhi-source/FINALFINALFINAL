from launch import LaunchDescription
from launch.actions import IncludeLaunchDescription
from launch_ros.actions import Node
from launch.launch_description_sources import PythonLaunchDescriptionSource
import os
from ament_index_python.packages import get_package_share_directory

def generate_launch_description():

    return LaunchDescription([

        # IK solver
        Node(
            package="kinenikros2",
            executable="kinenik_srv_server",
            name="kinenik_server",
            output="screen"
        ),

        # Robotiq gripper simulator
        Node(
            package="robotiq_85_gripper_server",
            executable="gripper_server_sim",
            name="robotiq_gripper_server",
            output="screen",
        ),

        # Planning services
        Node(
            package="planning_module",
            executable="pick_service_node",
            name="pick_service_node",
            output="screen",
        ),

        Node(
            package="planning_module",
            executable="place_service_node",
            name="place_service_node",
            output="screen",
        ),

        # Full pick-place executor
        Node(
            package="planning_module",
            executable="pick_place_executor",
            output="screen",
            parameters=[{
                "pick_frame": "aruco_316",
                "place_square": "e4"
            }]
        )
    ])
