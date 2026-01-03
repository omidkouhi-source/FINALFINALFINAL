from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():
    """Launch the sensing module node."""
    
    sensing_node = Node(
        package='sensing_module',
        executable='sensing_node',
        name='sensing_node',
        output='screen',
        parameters=[{
            'world_frame': 'world',
            'camera_frame': 'camera_color_optical_frame',
            'aruco_frame_prefix': 'aruco',
            'tf_timeout': 2.0
        }]
    )

    return LaunchDescription([
        sensing_node
    ])
