# ROS2 Chess Robot – TF/Calibration & Testing Guide

This README explains how to run, debug, and test the UR3 + Robotiq 85 chess mover with the sensing/planning/action stack in this repo.

## Prerequisites
- ROS 2 (Humble/Foxy) with colcon, RViz2, Gazebo (used by chesslab_setup2).
- Workspace overlay built for this repo (`colcon build`) and sourced:  
  `source install/setup.bash`
- Packages used at runtime: `chesslab_setup2`, `aruco_broadcaster`, `sensing_module`, `action_module`, `planning_module`, `robotiq_85_gripper_server`, `kinenikros2`.

## Launch sequence (simulation)
1) Gazebo + robot:  
   `ros2 launch chesslab_setup2 chesslab_gz.launch.py`
2) ArUco detection + optional static camera TF:  
   `ros2 launch aruco_broadcaster aruco_pl2.launch.py`
3) Chesslab demo assets (pieces/markers):  
   `ros2 launch chesslab_setup2 chesslab_setup2_demo.launch.py`
4) Sensing node (loads parameters from YAML):  
   `ros2 launch sensing_module sensing_module.launch.py`
5) Action stack (IK server, gripper sim, planning services, executor):  
   `ros2 launch action_module action.launch.py`
6) Optional UI:  
   `ros2 launch chess_ui chess_ui.launch.py` then open http://localhost:8080/

## Key parameters / calibration
- Default calibration lives in `src/action_module/config/calibration.yaml`.
- Override at launch:  
  `ros2 launch action_module action.launch.py config_file:=/absolute/path/to/custom.yaml`
- Important knobs:
  - `marker_to_grasp_offset_{x,y,z}`: move from ArUco frame to grasp point (default z = -0.02 m).
  - `world_frame`, `ik_base_frame`: ensure they match your TF tree (`world`/`base` vs `base_link`).
  - Board geometry: `board_origin_x`, `board_origin_y`, `board_square_size`, `board_yaw`, `board_swap_xy`, `board_flip_x`, `board_flip_y`.
  - Safety/validation: `workspace_radius` (meters), `dry_run` (log-only; skips motion).
  - Logging: `log_pick_place_poses` (action), `tf_debug_log` (sensing).
- Sensing TF robustness: `tf_retry_attempts`, `tf_retry_delay_s`, `tf_timeout` in `sensing_module/config/sensing_params.yaml`.

## How to issue a move
- Discover pieces:  
  `ros2 service call /sensing_module/detect_piece_poses chesslab_setup2_interfaces/srv/DetectPiecePoses`
- Move by ArUco ID:  
  `ros2 service call /move_piece action_module/srv/MovePiece "{aruco_id: 316, target_square: 'e4'}"`
- Direct launch without UI:  
  `ros2 launch action_module action.launch.py pick_frame:=aruco_316 place_square:=e4`

## TF sanity checks & debugging
- Continuous TF sanity logger:  
  `ros2 launch action_module action.launch.py run_tf_sanity_checker:=true tf_check_aruco_id:=316`
- Inspect TF tree: `ros2 run tf2_tools view_frames` (generates frames.pdf)
- Echo transforms:  
  `ros2 run tf2_ros tf2_echo world camera_color_optical_frame`  
  `ros2 run tf2_ros tf2_echo world aruco_316`
- If world→marker lookup fails, sensing module automatically chains world→camera→aruco; enable `tf_debug_log:=true` to print the composed transform.

## Testing and validation checklist
1) **Dry-run planning (no motion):**  
   `ros2 launch action_module action.launch.py dry_run:=true marker_to_grasp_offset_z:=-0.02 run_tf_sanity_checker:=true`
   - Confirms TF lookups, marker offsets, and IK transforms without moving the arm.
2) **TF availability:** Ensure `tf2_echo world camera_color_optical_frame` and `tf2_echo world aruco_<id>` succeed. If not, verify the camera static transform and ArUco broadcaster reference_frame.
3) **Board alignment:** Move a known piece to a corner square (e.g., `a1`, `h8`) and confirm visually in RViz/Gazebo. Adjust board origin/yaw/flip parameters if offset.
4) **Grasp offset tuning:** If the gripper is high/low or XY-shifted, adjust `marker_to_grasp_offset_{x,y,z}` and rerun dry-run + a single move.
5) **Workspace safety:** Set `workspace_radius` to your reachable area; warnings log when targets are outside.
6) **Regression: pickup to place:** Execute a sample move (`aruco_id=316 to e4`) and verify the piece is carried and placed centrally on the target square.

## Common troubleshooting
- **Piece not found:** Run detection first; verify marker visibility and TF chain (`tf_debug_log:=true`).
- **IK fails:** Increase `ik_fallback_attempts`, adjust `ik_base_frame`, or reduce Z (`ik_fallback_z_step`).
- **Board mirrored/rotated:** Toggle `board_swap_xy`, `board_flip_x`, `board_flip_y`, or set `board_yaw`.
- **Camera pose wrong:** Use `aruco_broadcaster` `publish_static_tf:=true` with calibrated translation/quat to align `camera_color_optical_frame` to `world`.

## File map
- `src/sensing_module/launch/sensing_module.launch.py` – loads sensing params YAML (TF retries/debug).
- `src/action_module/launch/action.launch.py` – main stack, calibration overrides, optional TF checker.
- `src/action_module/config/calibration.yaml` – default marker/board/workspace settings.
- `src/action_module/src/tf_sanity_checker.cpp` – TF debug node.
- `src/action_module/HOW_TO_RUN.md` – quick-start commands.
