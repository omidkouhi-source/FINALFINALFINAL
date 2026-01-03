# How to Run the Robot

## Quick Start - Move a Chess Piece (Gazebo Sim)

### Step 1: Start Gazebo + Robot

```bash
ros2 launch chesslab_setup2 chesslab_gz.launch.py
```

### Step 2: Start ArUco detection + sensing

```bash
ros2 launch aruco_broadcaster aruco_pl2.launch.py
ros2 launch sensing_module sensing_module.launch.py
```

### Step 3: Start Action Module stack

```bash
ros2 launch action_module action.launch.py
```

This launches:
- IK solver (kinenikros2)
- Gripper server
- Planning module services
- Action executor (with `/move_piece` service)

### Step 4: Detect All Pieces on the Board

Before moving pieces, you need to detect them:

```bash
ros2 service call /sensing_module/detect_piece_poses chesslab_setup2_interfaces/srv/DetectPiecePoses
```

This will scan the board and detect all pieces with ArUco markers. You should see output like:
```
Detection complete: 32 pieces found
```

### Step 5: Move a Piece Using ArUco ID

Use the `/move_piece` service to move a piece by its ArUco ID:

```bash
ros2 service call /move_piece action_module/srv/MovePiece "{aruco_id: 316, target_square: 'e4'}"
```

**Parameters:**
- `aruco_id`: The ArUco marker ID of the piece you want to move (e.g., 316, 201, 213)
- `target_square`: The target chess square (e.g., 'e4', 'd5', 'a1')

**Example:**
```bash
# Move piece with ArUco ID 316 to square e4
ros2 service call /move_piece action_module/srv/MovePiece "{aruco_id: 316, target_square: 'e4'}"

# Move piece with ArUco ID 201 to square d5
ros2 service call /move_piece action_module/srv/MovePiece "{aruco_id: 201, target_square: 'd5'}"
```

### Alternative: Direct Frame Specification

You can also run the executor directly with parameters (if you know the frame name):

```bash
ros2 launch action_module action.launch.py pick_frame:=aruco_316 place_square:=e4
```

If your simulated robot is not a UR3, set the IK robot type:
```bash
ros2 launch action_module action.launch.py \
  pick_frame:=aruco_316 place_square:=e4 ik_robot_type:=UR3e
```

If your controller uses a different topic than `joint_trajectory_controller`, set:
```bash
ros2 launch action_module action.launch.py \
  trajectory_topic:=/joint_trajectory_controller/joint_trajectory
```

If TF errors mention that `world` does not exist, set the correct frame:
```bash
ros2 launch action_module action.launch.py \
  world_frame:=base_link
```

If the robot moves to the wrong XY location, set the IK base frame explicitly:
```bash
ros2 launch action_module action.launch.py \
  ik_base_frame:=base
```

If the `base` frame doesn't exist in your TF tree, use `base_link` instead:
```bash
ros2 launch action_module action.launch.py \
  ik_base_frame:=base_link
```

If placement is offset on the board, tune the board origin and square size:
```bash
ros2 launch action_module action.launch.py \
  board_origin_x:=-0.175 board_origin_y:=-0.175 board_square_size:=0.05 board_yaw:=0.0 board_swap_xy:=true
```

If the board is mirrored, flip axes:
```bash
ros2 launch action_module action.launch.py \
  board_flip_x:=true board_flip_y:=false
```

If the target squares are 180 degrees off (opposite side), flip both axes:
```bash
ros2 launch action_module action.launch.py \
  board_flip_x:=true board_flip_y:=true
```

If the gripper is flipped, tune the fixed orientation:
```bash
ros2 launch action_module action.launch.py \
  gripper_roll:=3.14159 gripper_pitch:=0.0 gripper_yaw:=0.0
```

If the arm needs to hover higher over pieces/squares:
```bash
ros2 launch action_module action.launch.py \
  pick_approach_z:=0.18 pick_retreat_z:=0.24 place_approach_z:=0.18 place_retreat_z:=0.24
```

If you want hover-only pick/place (no descend), set grasp height equal to approach:
```bash
ros2 launch action_module action.launch.py \
  pick_grasp_z:=0.18 place_grasp_z:=0.18
```

If you want the robot to wait over the piece before closing the gripper:
```bash
ros2 launch action_module action.launch.py \
  pick_hover_wait:=8.0
```

If you want a pause above the piece after pickup before moving to the square:
```bash
ros2 launch action_module action.launch.py \
  pick_post_wait:=3.0
```

If IK fails at higher hover heights, enable automatic Z fallback:
```bash
ros2 launch action_module action.launch.py \
  ik_fallback_z_step:=0.02 ik_fallback_attempts:=3
```

If moves look like a single jump, slow the trajectory and add a pause between segments:
```bash
ros2 launch action_module action.launch.py \
  traj_steps:=60 traj_dt:=0.06 wait_for_traj:=true segment_pause:=0.2
```

## What Happens When You Call the Service

1. **Service receives request** with ArUco ID and target square
2. **Queries sensing module** to verify the piece exists and get its location
3. **Builds pick poses**: approach, grasp, and retreat positions above the piece
4. **Builds place poses**: approach, place, and retreat positions at target square
5. **Executes motion**:
   - Moves to pick approach
   - Descends to pick grasp
   - Closes gripper
   - Lifts up (retreat)
   - Moves to place approach
   - Descends to place position
   - Opens gripper
   - Lifts up (retreat)

## ArUco ID Ranges

- **Black pieces**: 201-216
  - 201-208: Pawns
  - 209-210: Rooks
  - 211-212: Knights
  - 213-214: Bishops
  - 215: Queen
  - 216: King

- **White pieces**: 301-316
  - 301-308: Pawns
  - 309-310: Rooks
  - 311-312: Knights
  - 313-314: Bishops
  - 315: Queen
  - 316: King

## Troubleshooting

**"Sensing service unavailable"**
- Make sure the sensing module node is running
- Check: `ros2 node list | grep sensing`

**"Piece with ArUco ID X not found"**
- Run `detect_piece_poses` service first
- Verify the ArUco marker is visible to the camera
- Check that the piece is actually on the board

**"IK service unavailable"**
- Make sure `kinenik_srv_server` is running
- Check: `ros2 node list | grep kinenik`

**Robot doesn't move**
- Check joint_states topic: `ros2 topic echo /joint_states`
- Verify IK service is responding
- Check for TF errors: `ros2 run tf2_ros tf2_echo world aruco_316`

## Viewing in RViz

To visualize the robot and pieces:
1. Start RViz: `rviz2`
2. Add TF display to see coordinate frames
3. Add RobotModel display (if URDF is available)
4. The executor publishes TF frames for pick/place poses:
   - `pick_approach`, `pick_grasp`, `pick_retreat`
   - `place_approach`, `place_grasp`, `place_retreat`

## Optional: Web UI

You can use a lightweight web UI to pick a piece and choose a target square.

1) Start the UI server:
```bash
ros2 launch chess_ui chess_ui.launch.py
```

2) Open in a browser:
```
http://localhost:8080
```

3) Click a piece, then click a square to call `/move_piece`.
