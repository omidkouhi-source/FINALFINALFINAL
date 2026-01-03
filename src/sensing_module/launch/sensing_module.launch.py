from launch import LaunchDescription
from launch.actions import DeclareLaunchArgument
from launch.substitutions import LaunchConfiguration, PathJoinSubstitution
from launch_ros.actions import Node
from launch_ros.substitutions import FindPackageShare

def generate_launch_description():
    """Launch the sensing module node."""
    config_file = LaunchConfiguration('config_file')

    sensing_node = Node(
        package='sensing_module',
        executable='sensing_node',
        name='sensing_node',
        output='screen',
        parameters=[config_file]
    )

    return LaunchDescription([
        DeclareLaunchArgument(
            'config_file',
            default_value=PathJoinSubstitution([
                FindPackageShare('sensing_module'),
                'config',
                'sensing_params.yaml',
            ]),
            description='Path to sensing module parameters YAML.'
        ),
        sensing_node
    ])
