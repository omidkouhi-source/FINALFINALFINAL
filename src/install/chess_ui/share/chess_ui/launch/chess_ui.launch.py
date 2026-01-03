from launch import LaunchDescription
from launch.actions import DeclareLaunchArgument
from launch.substitutions import LaunchConfiguration
from launch_ros.actions import Node


def generate_launch_description():
    host = LaunchConfiguration("host")
    port = LaunchConfiguration("port")

    return LaunchDescription(
        [
            DeclareLaunchArgument(
                "host",
                default_value="0.0.0.0",
                description="Host interface for the UI web server.",
            ),
            DeclareLaunchArgument(
                "port",
                default_value="8080",
                description="Port for the UI web server.",
            ),
            Node(
                package="chess_ui",
                executable="chess_ui_server",
                name="chess_ui_server",
                output="screen",
                arguments=["--host", host, "--port", port],
            ),
        ]
    )
