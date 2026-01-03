from launch import LaunchDescription
from launch.actions import DeclareLaunchArgument
from launch.substitutions import LaunchConfiguration
from launch_ros.actions import Node

def generate_launch_description():
    """Launch the sensing module node."""
    
    # Launch arguments
    world_frame = LaunchConfiguration('world_frame')
    camera_frame = LaunchConfiguration('camera_frame')
    aruco_frame_prefix = LaunchConfiguration('aruco_frame_prefix')
    tf_timeout = LaunchConfiguration('tf_timeout')
    marker_grasp_offset_x = LaunchConfiguration('marker_grasp_offset_x')
    marker_grasp_offset_y = LaunchConfiguration('marker_grasp_offset_y')
    marker_grasp_offset_z = LaunchConfiguration('marker_grasp_offset_z')
    use_detected_z = LaunchConfiguration('use_detected_z')
    debug_mode = LaunchConfiguration('debug_mode')
    
    sensing_node = Node(
        package='sensing_module',
        executable='sensing_node',
        name='sensing_node',
        output='screen',
        parameters=[{
            'world_frame': world_frame,
            'camera_frame': camera_frame,
            'aruco_frame_prefix': aruco_frame_prefix,
            'tf_timeout': tf_timeout,
            'marker_grasp_offset_x': marker_grasp_offset_x,
            'marker_grasp_offset_y': marker_grasp_offset_y,
            'marker_grasp_offset_z': marker_grasp_offset_z,
            'use_detected_z': use_detected_z,
            'debug_mode': debug_mode,
        }]
    )

    return LaunchDescription([
        DeclareLaunchArgument(
            'world_frame',
            default_value='world',
            description='World reference frame for TF lookups.'
        ),
        DeclareLaunchArgument(
            'camera_frame',
            default_value='camera_color_optical_frame',
            description='Camera optical frame for ArUco detection.'
        ),
        DeclareLaunchArgument(
            'aruco_frame_prefix',
            default_value='aruco',
            description='Prefix used for ArUco TF frames (e.g., aruco_316).'
        ),
        DeclareLaunchArgument(
            'tf_timeout',
            default_value='2.0',
            description='Timeout for TF lookups (seconds).'
        ),
        DeclareLaunchArgument(
            'marker_grasp_offset_x',
            default_value='0.0',
            description='X offset from marker center to grasp point (meters).'
        ),
        DeclareLaunchArgument(
            'marker_grasp_offset_y',
            default_value='0.0',
            description='Y offset from marker center to grasp point (meters).'
        ),
        DeclareLaunchArgument(
            'marker_grasp_offset_z',
            default_value='0.0',
            description='Z offset from marker to grasp point (meters). Usually negative.'
        ),
        DeclareLaunchArgument(
            'use_detected_z',
            default_value='true',
            description='Use actual detected Z from TF (true) or hardcoded piece height (false).'
        ),
        DeclareLaunchArgument(
            'debug_mode',
            default_value='false',
            description='Enable detailed debug logging of transforms.'
        ),
        sensing_node
    ])
