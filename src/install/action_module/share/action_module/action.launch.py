from launch import LaunchDescription
from launch.actions import DeclareLaunchArgument
from launch.substitutions import LaunchConfiguration
from launch_ros.actions import Node

def generate_launch_description():
    pick_frame = LaunchConfiguration("pick_frame")
    place_square = LaunchConfiguration("place_square")
    ik_robot_type = LaunchConfiguration("ik_robot_type")
    trajectory_topic = LaunchConfiguration("trajectory_topic")
    world_frame = LaunchConfiguration("world_frame")
    ik_base_frame = LaunchConfiguration("ik_base_frame")
    aruco_frame_prefix = LaunchConfiguration("aruco_frame_prefix")
    use_sensing_pose = LaunchConfiguration("use_sensing_pose")
    segment_pause = LaunchConfiguration("segment_pause")
    pick_hover_wait = LaunchConfiguration("pick_hover_wait")
    pick_post_wait = LaunchConfiguration("pick_post_wait")
    ik_fallback_z_step = LaunchConfiguration("ik_fallback_z_step")
    ik_fallback_attempts = LaunchConfiguration("ik_fallback_attempts")
    board_square_size = LaunchConfiguration("board_square_size")
    board_origin_x = LaunchConfiguration("board_origin_x")
    board_origin_y = LaunchConfiguration("board_origin_y")
    board_yaw = LaunchConfiguration("board_yaw")
    board_swap_xy = LaunchConfiguration("board_swap_xy")
    board_flip_x = LaunchConfiguration("board_flip_x")
    board_flip_y = LaunchConfiguration("board_flip_y")
    gripper_roll = LaunchConfiguration("gripper_roll")
    gripper_pitch = LaunchConfiguration("gripper_pitch")
    gripper_yaw = LaunchConfiguration("gripper_yaw")
    use_fixed_gripper_orientation = LaunchConfiguration("use_fixed_gripper_orientation")
    pick_grasp_z = LaunchConfiguration("pick_grasp_z")
    pick_approach_z = LaunchConfiguration("pick_approach_z")
    pick_retreat_z = LaunchConfiguration("pick_retreat_z")
    place_grasp_z = LaunchConfiguration("place_grasp_z")
    place_approach_z = LaunchConfiguration("place_approach_z")
    place_retreat_z = LaunchConfiguration("place_retreat_z")
    traj_steps = LaunchConfiguration("traj_steps")
    traj_dt = LaunchConfiguration("traj_dt")
    wait_for_traj = LaunchConfiguration("wait_for_traj")

    return LaunchDescription([
        DeclareLaunchArgument(
            "pick_frame",
            default_value="",
            description="ArUco TF frame to pick from (e.g., aruco_316). Leave empty to use /move_piece.",
        ),
        DeclareLaunchArgument(
            "place_square",
            default_value="",
            description="Chess square to place to (e.g., e4). Leave empty to use /move_piece.",
        ),
        DeclareLaunchArgument(
            "ik_robot_type",
            default_value="UR3",
            description="Robot type string for IK service (e.g., UR3, UR3e, UR5e).",
        ),
        DeclareLaunchArgument(
            "trajectory_topic",
            default_value="/joint_trajectory_controller/joint_trajectory",
            description="Joint trajectory controller topic.",
        ),
        DeclareLaunchArgument(
            "world_frame",
            default_value="world",
            description="Reference frame for TF lookups (e.g., world or base_link).",
        ),
        DeclareLaunchArgument(
            "ik_base_frame",
            default_value="base",
            description="Base frame for IK targets (e.g., base or base_link).",
        ),
        DeclareLaunchArgument(
            "aruco_frame_prefix",
            default_value="aruco",
            description="Prefix used for ArUco TF frames (e.g., aruco or aruco_frame).",
        ),
        DeclareLaunchArgument(
            "use_sensing_pose",
            default_value="true",
            description="Use sensing pose directly for pick poses instead of TF lookup.",
        ),
        DeclareLaunchArgument(
            "segment_pause",
            default_value="0.1",
            description="Pause between motion segments (seconds).",
        ),
        DeclareLaunchArgument(
            "pick_hover_wait",
            default_value="8.0",
            description="Seconds to hover above the piece before closing the gripper.",
        ),
        DeclareLaunchArgument(
            "pick_post_wait",
            default_value="3.0",
            description="Seconds to wait above the piece after pickup before moving to place.",
        ),
        DeclareLaunchArgument(
            "ik_fallback_z_step",
            default_value="0.02",
            description="Fallback Z step (meters) when IK fails.",
        ),
        DeclareLaunchArgument(
            "ik_fallback_attempts",
            default_value="3",
            description="Number of fallback attempts when IK fails.",
        ),
        DeclareLaunchArgument(
            "board_square_size",
            default_value="0.05",
            description="Chess board square size in meters.",
        ),
        DeclareLaunchArgument(
            "board_origin_x",
            default_value="-0.175",
            description="World-frame X of the A1 square center.",
        ),
        DeclareLaunchArgument(
            "board_origin_y",
            default_value="-0.175",
            description="World-frame Y of the A1 square center.",
        ),
        DeclareLaunchArgument(
            "board_yaw",
            default_value="0.0",
            description="Board yaw (radians) relative to world frame.",
        ),
        DeclareLaunchArgument(
            "board_swap_xy",
            default_value="true",
            description="Swap board file/rank axes to match Gazebo layout.",
        ),
        DeclareLaunchArgument(
            "board_flip_x",
            default_value="false",
            description="Mirror file axis (a<->h).",
        ),
        DeclareLaunchArgument(
            "board_flip_y",
            default_value="false",
            description="Mirror rank axis (1<->8).",
        ),
        DeclareLaunchArgument(
            "use_fixed_gripper_orientation",
            default_value="true",
            description="Use a fixed gripper orientation for pick/place.",
        ),
        DeclareLaunchArgument(
            "gripper_roll",
            default_value="3.14159",
            description="Gripper roll (radians) for fixed orientation.",
        ),
        DeclareLaunchArgument(
            "gripper_pitch",
            default_value="0.0",
            description="Gripper pitch (radians) for fixed orientation.",
        ),
        DeclareLaunchArgument(
            "gripper_yaw",
            default_value="0.0",
            description="Gripper yaw (radians) for fixed orientation.",
        ),
        DeclareLaunchArgument(
            "pick_grasp_z",
            default_value="0.18",
            description="Pick grasp height offset (meters) above marker pose.",
        ),
        DeclareLaunchArgument(
            "pick_approach_z",
            default_value="0.18",
            description="Pick approach height offset (meters) above marker pose.",
        ),
        DeclareLaunchArgument(
            "pick_retreat_z",
            default_value="0.24",
            description="Pick retreat height offset (meters) above marker pose.",
        ),
        DeclareLaunchArgument(
            "place_grasp_z",
            default_value="0.18",
            description="Place grasp height offset (meters) above board square.",
        ),
        DeclareLaunchArgument(
            "place_approach_z",
            default_value="0.18",
            description="Place approach height offset (meters) above board square.",
        ),
        DeclareLaunchArgument(
            "place_retreat_z",
            default_value="0.24",
            description="Place retreat height offset (meters) above board square.",
        ),
        DeclareLaunchArgument(
            "traj_steps",
            default_value="50",
            description="Trajectory interpolation steps per move.",
        ),
        DeclareLaunchArgument(
            "traj_dt",
            default_value="0.05",
            description="Trajectory step duration in seconds.",
        ),
        DeclareLaunchArgument(
            "wait_for_traj",
            default_value="true",
            description="Wait for each trajectory to finish before the next.",
        ),

        # IK SERVER
        Node(
            package="kinenikros2",
            executable="kinenik_srv_server",
            name="ik_server",
            output="screen"
        ),

        # GRIPPER SIM
        Node(
            package="robotiq_85_gripper_server",
            executable="gripper_server_sim",
            name="robotiq_gripper",
            output="screen"
        ),

        # PLANNING MODULE
        Node(
            package="planning_module",
            executable="pick_service_node",
            name="pick_service",
            output="screen"
        ),

        Node(
            package="planning_module",
            executable="place_service_node",
            name="place_service",
            output="screen"
        ),

        # MAIN EXECUTION NODE (now service-based)
        Node(
            package="action_module",
            executable="executor",
            name="executor",
            output="screen",
            parameters=[{
                "pick_frame": pick_frame,
                "place_square": place_square,
                "ik_robot_type": ik_robot_type,
                "trajectory_topic": trajectory_topic,
                "world_frame": world_frame,
                "ik_base_frame": ik_base_frame,
                "aruco_frame_prefix": aruco_frame_prefix,
                "use_sensing_pose": use_sensing_pose,
                "segment_pause": segment_pause,
                "pick_hover_wait": pick_hover_wait,
                "pick_post_wait": pick_post_wait,
                "ik_fallback_z_step": ik_fallback_z_step,
                "ik_fallback_attempts": ik_fallback_attempts,
                "board_square_size": board_square_size,
                "board_origin_x": board_origin_x,
                "board_origin_y": board_origin_y,
                "board_yaw": board_yaw,
                "board_swap_xy": board_swap_xy,
                "board_flip_x": board_flip_x,
                "board_flip_y": board_flip_y,
                "use_fixed_gripper_orientation": use_fixed_gripper_orientation,
                "gripper_roll": gripper_roll,
                "gripper_pitch": gripper_pitch,
                "gripper_yaw": gripper_yaw,
                "pick_grasp_z": pick_grasp_z,
                "pick_approach_z": pick_approach_z,
                "pick_retreat_z": pick_retreat_z,
                "place_grasp_z": place_grasp_z,
                "place_approach_z": place_approach_z,
                "place_retreat_z": place_retreat_z,
                "traj_steps": traj_steps,
                "traj_dt": traj_dt,
                "wait_for_traj": wait_for_traj,
            }],
        )
    ])
