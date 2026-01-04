# Chess Robot Final Work – System Overview and Launch Guide

## Launch sequence (simulation)
1. **Chess environment (Gazebo + TF anchors)**  
   ```bash
   ros2 launch chesslab_setup2 chesslab_gz.launch.py
   ```
2. **ArUco marker TF broadcaster**  
   ```bash
   ros2 launch aruco_broadcaster aruco_pl2.launch.py
   ```
3. **RViz/demo services for piece poses**  
   ```bash
   ros2 launch chesslab_setup2 chesslab_setup2_demo.launch.py
   ```
4. **Perception pipeline (detect pieces + provide poses)**  
   ```bash
   ros2 launch sensing_module sensing_module.launch.py
   ```
5. **Motion execution (pick/place services + executor)**  
   ```bash
   ros2 launch action_module action.launch.py
   ```
6. **Web UI for interactive moves**  
   ```bash
   ros2 launch chess_ui chess_ui.launch.py
   # Then open http://localhost:8080/ and click a piece, then a destination square
   ```

## Responsibilities by package

- **aruco_broadcaster**  
  Publishes TF frames for each detected ArUco marker (`aruco_<id>`). This is the source of live piece TFs used by perception and planning.

- **sensing_module**  
  Listens to the ArUco TFs to locate each piece and serves detection/location services. It also calls `chesslab_setup2_demo`’s `SetObjPose` service to place/update the chess pieces in RViz/scene after detection.

- **chesslab_setup2**  
  Provides the Gazebo chessboard/world and demo services (`chesslab_setup2_demo.launch.py`) used by sensing to spawn/update piece visuals.

- **action_module**  
  Executes pick-and-place motions (services and executor). It consumes piece poses from `sensing_module`, computes IK, and publishes trajectories to the robot controller.

- **planning_module**  
  Converts chess-square targets to poses using board geometry and plans motions (used internally by action_module).

- **chess_ui**  
  Web front-end. Users click a piece then a target square; the UI calls into backend services to request moves.

## Which parts launch pieces vs. publish TFs
- **Publishing TFs of pieces/markers:** `aruco_broadcaster` publishes `aruco_<id>` TF frames; `sensing_module` listens to these frames.
- **Launching/placing chess pieces in the scene:** `sensing_module` sets piece poses in RViz/world by calling `chesslab_setup2_demo`’s `SetObjPose` service (from `chesslab_setup2`).

## Quick health checks
- List nodes: `ros2 node list`
- TF available: `ros2 run tf2_ros tf2_echo world aruco_316`
- Sensing detection: `ros2 service call /sensing_module/detect_piece_poses chesslab_setup2_interfaces/srv/DetectPiecePoses`
- Move via action module: `ros2 service call /move_piece action_module/srv/MovePiece "{aruco_id: 316, target_square: 'e4'}"`
