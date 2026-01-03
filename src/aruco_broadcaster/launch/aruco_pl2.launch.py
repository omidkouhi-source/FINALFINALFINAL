from launch import LaunchDescription
from launch.actions import (
    DeclareLaunchArgument,
    IncludeLaunchDescription,
    OpaqueFunction,
)
from launch.conditions import IfCondition, UnlessCondition
from launch.launch_description_sources import PythonLaunchDescriptionSource
from launch.substitutions import (
    LaunchConfiguration,
    PathJoinSubstitution,
    Command,
    FindExecutable,
)
from launch_ros.actions import Node
from launch_ros.substitutions import FindPackageShare
import os
from ament_index_python.packages import get_package_share_directory

def launch_setup(context, *args, **kwargs):

  yaml_config = LaunchConfiguration('yaml_config')
  use_rviz_launch_arg = LaunchConfiguration('use_rviz')
  rvizconfig_launch_arg = LaunchConfiguration('rvizconfig')
  camera_frame_arg = LaunchConfiguration('camera_frame')
  use_marker_header_frame = LaunchConfiguration('use_marker_header_frame')
  reference_frame = LaunchConfiguration('reference_frame')
  static_tf_parent = LaunchConfiguration('static_tf_parent')
  static_tf_child = LaunchConfiguration('static_tf_child')
  static_tf_x = LaunchConfiguration('static_tf_x')
  static_tf_y = LaunchConfiguration('static_tf_y')
  static_tf_z = LaunchConfiguration('static_tf_z')
  static_tf_qx = LaunchConfiguration('static_tf_qx')
  static_tf_qy = LaunchConfiguration('static_tf_qy')
  static_tf_qz = LaunchConfiguration('static_tf_qz')
  static_tf_qw = LaunchConfiguration('static_tf_qw')
  publish_static_tf = LaunchConfiguration('publish_static_tf')

  aruco_broadcaster_node = Node(
      package='aruco_broadcaster',
      executable='aruco_broadcaster_node',
      name='aruco_broadcaster_node',
      # arguments=[],
      parameters=[
        yaml_config,
        {
          'camera_frame': camera_frame_arg,
          'use_marker_header_frame': use_marker_header_frame,
          'reference_frame': reference_frame,
        },
      ],
      output={'both': 'screen'},
  )

  rviz2_node = Node(
    condition=IfCondition(use_rviz_launch_arg),
    package='rviz2',
    executable='rviz2',
    name='rviz2',
    arguments=[
      '-d', rvizconfig_launch_arg,
    ],
    parameters=[{
        # 'use_sim_time': use_sim_time_param,
    }],
    output={'both': 'log'},
    )

  static_transform_publisher = Node(
      condition=IfCondition(publish_static_tf),
      package='tf2_ros',
      executable='static_transform_publisher',
      name='tf_camera_to_world',
      # the values obtained must be here. For ex.
      #arguments=["-0.021566", "-0.303249", "0.505499", "-0.362908", "0.361961", "0.608962", "0.605349", "world", "camera_link"],
      arguments=[static_tf_x, static_tf_y, static_tf_z,
                 static_tf_qx, static_tf_qy, static_tf_qz, static_tf_qw,
                 static_tf_parent, static_tf_child],
      output={'both': 'screen'},
  )

  return [
      aruco_broadcaster_node,
      rviz2_node,
      static_transform_publisher,
  ]


def generate_launch_description():
  declared_arguments = []
  
  declared_arguments.append(
    DeclareLaunchArgument(
      'yaml_config',
      default_value= os.path.join(
        get_package_share_directory('aruco_broadcaster'),
        'config',
        'pl2esaii.yaml'
      ),
      description=('Absolute path to yaml config file.')
    )
  )

  declared_arguments.append(
    DeclareLaunchArgument(
      'use_rviz',
      default_value='true',
      choices=('true', 'false'),
      description='launches RViz if set to `true`.',
    )
  )

  declared_arguments.append(
    DeclareLaunchArgument(
      'rvizconfig',
      default_value=PathJoinSubstitution([
        FindPackageShare('aruco_broadcaster'),
        'config',
        'aruco_mapping.rviz',
      ]),
      description='file path to the config file RViz should load.',
    )
  )

  declared_arguments.append(
    DeclareLaunchArgument(
      'camera_frame',
      default_value='camera_color_optical_frame',
      description='Camera TF frame for marker poses.',
    )
  )

  declared_arguments.append(
    DeclareLaunchArgument(
      'use_marker_header_frame',
      default_value='true',
      description='Use MarkerArray.header.frame_id as parent frame when available.',
    )
  )

  declared_arguments.append(
    DeclareLaunchArgument(
      'reference_frame',
      default_value='',
      description='Frame to transform markers into (e.g., world or base_link).',
    )
  )

  declared_arguments.append(
    DeclareLaunchArgument(
      'publish_static_tf',
      default_value='false',
      description='Publish a static TF from static_tf_parent to static_tf_child.',
    )
  )

  declared_arguments.append(
    DeclareLaunchArgument(
      'static_tf_parent',
      default_value='world',
      description='Parent frame for the static camera transform.',
    )
  )

  declared_arguments.append(
    DeclareLaunchArgument(
      'static_tf_child',
      default_value='camera_color_optical_frame',
      description='Child frame for the static camera transform.',
    )
  )

  declared_arguments.append(
    DeclareLaunchArgument(
      'static_tf_x',
      default_value='-0.021',
      description='Static TF translation x.',
    )
  )

  declared_arguments.append(
    DeclareLaunchArgument(
      'static_tf_y',
      default_value='-0.290',
      description='Static TF translation y.',
    )
  )

  declared_arguments.append(
    DeclareLaunchArgument(
      'static_tf_z',
      default_value='0.529',
      description='Static TF translation z.',
    )
  )

  declared_arguments.append(
    DeclareLaunchArgument(
      'static_tf_qx',
      default_value='-0.365081',
      description='Static TF rotation qx.',
    )
  )

  declared_arguments.append(
    DeclareLaunchArgument(
      'static_tf_qy',
      default_value='0.365047',
      description='Static TF rotation qy.',
    )
  )

  declared_arguments.append(
    DeclareLaunchArgument(
      'static_tf_qz',
      default_value='0.605609',
      description='Static TF rotation qz.',
    )
  )

  declared_arguments.append(
    DeclareLaunchArgument(
      'static_tf_qw',
      default_value='0.605552',
      description='Static TF rotation qw.',
    )
  )

  return LaunchDescription(declared_arguments + [OpaqueFunction(function=launch_setup)])
