"""
Complete Chess Robot System - Single Launch File

This launch file starts ALL components needed for the chess robot system:
1. Gazebo simulation with UR robot and chessboard
2. ArUco marker detection and TF broadcasting
3. Sensing module for piece location
4. Planning module for motion planning
5. Action module for pick-and-place execution
6. Web UI for interactive control

Usage:
    ros2 launch integrated_system chess_robot_complete.launch.py

With custom parameters:
    ros2 launch integrated_system chess_robot_complete.launch.py \
        ur_type:=ur3 \
        debug_mode:=true \
        launch_ui:=true

After launching, the system is ready for commands:
    ros2 service call /move_piece action_module/srv/MovePiece "{aruco_id: 316, target_square: 'e4'}"

Or use the web UI at http://localhost:8080
"""

from launch import LaunchDescription
from launch.actions import (
    DeclareLaunchArgument,
    IncludeLaunchDescription,
    TimerAction,
)
from launch.conditions import IfCondition
from launch.launch_description_sources import PythonLaunchDescriptionSource
from launch.substitutions import LaunchConfiguration, PathJoinSubstitution
from launch_ros.actions import Node
from launch_ros.substitutions import FindPackageShare
from ament_index_python.packages import get_package_share_directory
import os


def generate_launch_description():
    # ==========================================================================
    # LAUNCH ARGUMENTS
    # ==========================================================================
    
    # Robot configuration
    ur_type = LaunchConfiguration('ur_type')
    launch_rviz = LaunchConfiguration('launch_rviz')
    gazebo_gui = LaunchConfiguration('gazebo_gui')
    
    # ArUco configuration
    camera_frame = LaunchConfiguration('camera_frame')
    aruco_frame_prefix = LaunchConfiguration('aruco_frame_prefix')
    
    # Sensing configuration
    world_frame = LaunchConfiguration('world_frame')
    marker_grasp_offset_x = LaunchConfiguration('marker_grasp_offset_x')
    marker_grasp_offset_y = LaunchConfiguration('marker_grasp_offset_y')
    marker_grasp_offset_z = LaunchConfiguration('marker_grasp_offset_z')
    use_detected_z = LaunchConfiguration('use_detected_z')
    
    # Action configuration
    ik_base_frame = LaunchConfiguration('ik_base_frame')
    board_square_size = LaunchConfiguration('board_square_size')
    board_origin_x = LaunchConfiguration('board_origin_x')
    board_origin_y = LaunchConfiguration('board_origin_y')
    pick_grasp_z = LaunchConfiguration('pick_grasp_z')
    pick_approach_z = LaunchConfiguration('pick_approach_z')
    pick_retreat_z = LaunchConfiguration('pick_retreat_z')
    
    # UI configuration
    launch_ui = LaunchConfiguration('launch_ui')
    ui_port = LaunchConfiguration('ui_port')
    
    # Debug configuration
    debug_mode = LaunchConfiguration('debug_mode')
    
    # ==========================================================================
    # ARGUMENT DECLARATIONS
    # ==========================================================================
    
    declared_arguments = [
        # Robot arguments
        DeclareLaunchArgument(
            'ur_type',
            default_value='ur3',
            description='Type of UR robot (ur3, ur3e, ur5, ur5e, etc.)'
        ),
        DeclareLaunchArgument(
            'launch_rviz',
            default_value='true',
            description='Launch RViz for visualization'
        ),
        DeclareLaunchArgument(
            'gazebo_gui',
            default_value='true',
            description='Launch Gazebo with GUI (set false for headless)'
        ),
        
        # ArUco arguments
        DeclareLaunchArgument(
            'camera_frame',
            default_value='camera_color_optical_frame',
            description='Camera optical frame for ArUco detection'
        ),
        DeclareLaunchArgument(
            'aruco_frame_prefix',
            default_value='aruco',
            description='Prefix for ArUco TF frames (e.g., aruco_316)'
        ),
        
        # Sensing arguments
        DeclareLaunchArgument(
            'world_frame',
            default_value='world',
            description='World reference frame'
        ),
        DeclareLaunchArgument(
            'marker_grasp_offset_x',
            default_value='0.0',
            description='X offset from marker to grasp point (meters)'
        ),
        DeclareLaunchArgument(
            'marker_grasp_offset_y',
            default_value='0.0',
            description='Y offset from marker to grasp point (meters)'
        ),
        DeclareLaunchArgument(
            'marker_grasp_offset_z',
            default_value='0.0',
            description='Z offset from marker to grasp point (meters)'
        ),
        DeclareLaunchArgument(
            'use_detected_z',
            default_value='true',
            description='Use detected Z from TF (true) or hardcoded heights (false)'
        ),
        
        # Action arguments
        DeclareLaunchArgument(
            'ik_base_frame',
            default_value='base',
            description='Base frame for IK solver'
        ),
        DeclareLaunchArgument(
            'board_square_size',
            default_value='0.05',
            description='Chess board square size in meters'
        ),
        DeclareLaunchArgument(
            'board_origin_x',
            default_value='-0.175',
            description='X coordinate of A1 square center'
        ),
        DeclareLaunchArgument(
            'board_origin_y',
            default_value='-0.175',
            description='Y coordinate of A1 square center'
        ),
        DeclareLaunchArgument(
            'pick_grasp_z',
            default_value='0.18',
            description='Gripper height above piece for grasping (meters)'
        ),
        DeclareLaunchArgument(
            'pick_approach_z',
            default_value='0.18',
            description='Gripper height for approach (meters)'
        ),
        DeclareLaunchArgument(
            'pick_retreat_z',
            default_value='0.24',
            description='Gripper height for retreat (meters)'
        ),
        
        # UI arguments
        DeclareLaunchArgument(
            'launch_ui',
            default_value='true',
            description='Launch web UI server'
        ),
        DeclareLaunchArgument(
            'ui_port',
            default_value='8080',
            description='Port for web UI server'
        ),
        
        # Debug arguments
        DeclareLaunchArgument(
            'debug_mode',
            default_value='false',
            description='Enable debug logging for all modules'
        ),
    ]
    
    # ==========================================================================
    # COMPONENT LAUNCHES
    # ==========================================================================
    
    # 1. GAZEBO + ROBOT SIMULATION
    gazebo_launch = IncludeLaunchDescription(
        PythonLaunchDescriptionSource(
            PathJoinSubstitution([
                FindPackageShare('chesslab_setup2'),
                'launch',
                'chesslab_gz.launch.py'
            ])
        ),
        launch_arguments={
            'ur_type': ur_type,
            'launch_rviz': launch_rviz,
            'gazebo_gui': gazebo_gui,
        }.items()
    )
    
    # 2. CHESSLAB DEMO (TF frames + visualization markers)
    chesslab_demo_launch = IncludeLaunchDescription(
        PythonLaunchDescriptionSource(
            PathJoinSubstitution([
                FindPackageShare('chesslab_setup2'),
                'launch',
                'chesslab_setup2_demo.launch.py'
            ])
        ),
        launch_arguments={
            'launch_gazebo': 'false',  # Don't launch gazebo again
        }.items()
    )
    
    # 3. ARUCO BROADCASTER (delay to let Gazebo start)
    aruco_yaml_config = os.path.join(
        get_package_share_directory('aruco_broadcaster'),
        'config',
        'pl2esaii.yaml'
    )
    
    aruco_broadcaster_node = Node(
        package='aruco_broadcaster',
        executable='aruco_broadcaster_node',
        name='aruco_broadcaster_node',
        parameters=[
            aruco_yaml_config,
            {
                'camera_frame': camera_frame,
                'use_marker_header_frame': True,
            },
        ],
        output='screen',
    )
    
    # 4. SENSING MODULE
    sensing_node = Node(
        package='sensing_module',
        executable='sensing_node',
        name='sensing_node',
        output='screen',
        parameters=[{
            'world_frame': world_frame,
            'camera_frame': camera_frame,
            'aruco_frame_prefix': aruco_frame_prefix,
            'tf_timeout': 2.0,
            'marker_grasp_offset_x': marker_grasp_offset_x,
            'marker_grasp_offset_y': marker_grasp_offset_y,
            'marker_grasp_offset_z': marker_grasp_offset_z,
            'use_detected_z': use_detected_z,
            'debug_mode': debug_mode,
        }]
    )
    
    # 5. IK SOLVER
    ik_server_node = Node(
        package='kinenikros2',
        executable='kinenik_srv_server',
        name='ik_server',
        output='screen'
    )
    
    # 6. GRIPPER SIMULATOR
    gripper_node = Node(
        package='robotiq_85_gripper_server',
        executable='gripper_server_sim',
        name='robotiq_gripper',
        output='screen'
    )
    
    # 7. PLANNING MODULE
    pick_service_node = Node(
        package='planning_module',
        executable='pick_service_node',
        name='pick_service',
        output='screen'
    )
    
    place_service_node = Node(
        package='planning_module',
        executable='place_service_node',
        name='place_service',
        output='screen'
    )
    
    # 8. ACTION EXECUTOR
    executor_node = Node(
        package='action_module',
        executable='executor',
        name='executor',
        output='screen',
        parameters=[{
            'pick_frame': '',  # Empty = use service-based control
            'place_square': '',
            'ik_robot_type': 'UR3',
            'trajectory_topic': '/joint_trajectory_controller/joint_trajectory',
            'world_frame': world_frame,
            'ik_base_frame': ik_base_frame,
            'aruco_frame_prefix': aruco_frame_prefix,
            'use_sensing_pose': True,
            'segment_pause': 0.1,
            'pick_hover_wait': 8.0,
            'pick_post_wait': 3.0,
            'ik_fallback_z_step': 0.02,
            'ik_fallback_attempts': 3,
            'board_square_size': board_square_size,
            'board_origin_x': board_origin_x,
            'board_origin_y': board_origin_y,
            'board_yaw': 0.0,
            'board_swap_xy': True,
            'board_flip_x': False,
            'board_flip_y': False,
            'use_fixed_gripper_orientation': True,
            'gripper_roll': 3.14159,
            'gripper_pitch': 0.0,
            'gripper_yaw': 0.0,
            'pick_grasp_z': pick_grasp_z,
            'pick_approach_z': pick_approach_z,
            'pick_retreat_z': pick_retreat_z,
            'place_grasp_z': pick_grasp_z,
            'place_approach_z': pick_approach_z,
            'place_retreat_z': pick_retreat_z,
            'traj_steps': 50,
            'traj_dt': 0.05,
            'wait_for_traj': True,
            'debug_mode': debug_mode,
        }]
    )
    
    # 9. WEB UI (optional)
    ui_server_node = Node(
        condition=IfCondition(launch_ui),
        package='chess_ui',
        executable='chess_ui_server',
        name='chess_ui_server',
        output='screen',
        arguments=['--host', '0.0.0.0', '--port', ui_port],
    )
    
    # ==========================================================================
    # LAUNCH DESCRIPTION WITH TIMING
    # ==========================================================================
    
    return LaunchDescription(
        declared_arguments + [
            # Start Gazebo first
            gazebo_launch,
            
            # Start other nodes with delays to let Gazebo initialize
            TimerAction(
                period=3.0,
                actions=[
                    chesslab_demo_launch,
                    aruco_broadcaster_node,
                ]
            ),
            
            TimerAction(
                period=5.0,
                actions=[
                    ik_server_node,
                    gripper_node,
                    sensing_node,
                    pick_service_node,
                    place_service_node,
                ]
            ),
            
            TimerAction(
                period=7.0,
                actions=[
                    executor_node,
                    ui_server_node,
                ]
            ),
        ]
    )
