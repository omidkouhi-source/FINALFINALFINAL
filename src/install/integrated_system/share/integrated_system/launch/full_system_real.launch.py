"""
Complete chess robot system launch file (Real Robot)

Launches all three modules for real robot operation:
- Sensing module for perception
- Planning module for motion planning  
- Action module for execution

Note: Robot driver, camera, and gripper must be launched separately
"""

from launch import LaunchDescription
from launch_ros.actions import Node
from launch.actions import DeclareLaunchArgument
from launch.substitutions import LaunchConfiguration
from ament_index_python.packages import get_package_share_directory
import os

def generate_launch_description():
    # Launch arguments
    pick_frame_arg = DeclareLaunchArgument(
        'pick_frame',
        default_value='aruco_316',
        description='ArUco frame to pick (e.g., aruco_316 for white king)'
    )
    
    place_square_arg = DeclareLaunchArgument(
        'place_square',
        default_value='e4',
        description='Chess square to place piece (e.g., e4, d5)'
    )

    # Get launch configurations
    pick_frame = LaunchConfiguration('pick_frame')
    place_square = LaunchConfiguration('place_square')

    # Get sensing module config
    sensing_config = os.path.join(
        get_package_share_directory('sensing_module'),
        'config',
        'sensing_params.yaml'
    )

    return LaunchDescription([
        pick_frame_arg,
        place_square_arg,

        # ======================
        # SUPPORTING SERVICES
        # ======================
        
        # IK Solver (if not already running with robot driver)
        Node(
            package='kinenikros2',
            executable='kinenik_srv_server',
            name='ik_server',
            output='screen',
            parameters=[{'use_sim_time': False}]
        ),

        # ======================
        # SENSING MODULE
        # ======================
        
        Node(
            package='sensing_module',
            executable='sensing_node',
            name='sensing_node',
            output='screen',
            parameters=[sensing_config, {'use_sim_time': False}],
            remappings=[
                ('/tf', 'tf'),
                ('/tf_static', 'tf_static'),
            ]
        ),

        # ======================
        # PLANNING MODULE
        # ======================
        
        Node(
            package='planning_module',
            executable='pick_service_node',
            name='pick_service',
            output='screen',
            parameters=[{'use_sim_time': False}]
        ),

        Node(
            package='planning_module',
            executable='place_service_node',
            name='place_service',
            output='screen',
            parameters=[{'use_sim_time': False}]
        ),

        # ======================
        # ACTION MODULE
        # ======================
        
        Node(
            package='action_module',
            executable='executor',
            name='action_executor',
            output='screen',
            parameters=[{
                'pick_frame': pick_frame,
                'place_square': place_square,
                'use_sim_time': False
            }]
        ),
    ])
