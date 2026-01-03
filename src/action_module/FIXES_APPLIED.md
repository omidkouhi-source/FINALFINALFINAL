# Fixes Applied

## Issues Fixed

### 1. `bad_weak_ptr` Error in Executor
**Problem**: The executor node was crashing with `std::bad_weak_ptr` because `shared_from_this()` was called during construction before the node was fully owned by a shared_ptr.

**Solution**: 
- Delayed initialization of helper classes (PickPlacePlanner, TFGraspBuilder, IKMover) using a one-shot timer
- Added `ensure_helpers_initialized()` method that's called before using helpers
- Helpers are now initialized after the node is fully constructed

### 2. Sensing Module Not Detecting Pieces
**Problem**: The `detect_piece_poses` service was returning 0 pieces even though ArUco markers exist.

**Solution**:
- Changed `RCLCPP_DEBUG` to `RCLCPP_WARN` for transform errors so they're visible
- Added diagnostic output showing which frames are being checked
- Added helpful error messages when no pieces are detected

**Note**: The sensing module requires:
1. `aruco_broadcaster` node to be running (publishes TF transforms)
2. ArUco markers visible to the camera
3. Proper TF tree with transforms from `world` to `aruco_<id>` frames

### 3. Robot Not Moving in Gazebo (Action Module)
**Problem**: The action module was publishing joint targets to `/joint_states`, which does not command the ros2_control controllers in Gazebo.

**Solution**:
- Publish `trajectory_msgs/JointTrajectory` to the active controller topic (default: `/joint_trajectory_controller/joint_trajectory`)
- Subscribe to `/joint_states` to seed current joints for smooth interpolation
- Added parameters:
  - `ik_robot_type` (default: `UR3`)
  - `trajectory_topic` (default: `/joint_trajectory_controller/joint_trajectory`)

### 4. TF Lookup Timeout in Action Module
**Problem**: TF lookups in the action module timed out with "world frame does not exist" because no TF listener was attached and the buffer had no dedicated thread.

**Solution**:
- Added a `tf2_ros::TransformListener` to populate the buffer
- Enabled dedicated thread usage on the TF buffer
- Added `world_frame` parameter (default: `world`)

### 5. Pick/Place Targets in Wrong Frame
**Problem**: IK targets were computed in the world frame, but the IK service expects poses in the robot base frame.

**Solution**:
- Transform pick/place poses from `world_frame` to `ik_base_frame` before calling IK
- Added `ik_base_frame` parameter (default: `base_link`)

## How to Run

### Step 1: Build the workspace
```bash
cd /home/costin/data/colcon_wsFinalWork
colcon build --packages-select action_module sensing_module
source install/setup.bash
```

### Step 2: Start all required nodes

**Terminal 1 - Action Module:**
```bash
ros2 launch action_module action.launch.py
```

**Terminal 2 - Sensing Module (if not already running):**
```bash
ros2 run sensing_module sensing_node
```

**Terminal 3 - ArUco Broadcaster (if not already running):**
```bash
# Check if aruco_broadcaster launch file exists
ros2 launch aruco_broadcaster aruco_pl2.launch.py
# OR run the node directly if available
```

### Step 3: Verify TF tree has ArUco frames
```bash
# Check if a specific ArUco frame exists
ros2 run tf2_ros tf2_echo world aruco_316

# List all available frames
ros2 run tf2_tools view_frames
```

### Step 4: Detect pieces
```bash
ros2 service call /sensing_module/detect_piece_poses chesslab_setup2_interfaces/srv/DetectPiecePoses
```

You should now see output like:
```
[INFO] Detecting chess piece poses...
[INFO] Looking for frames: aruco_<id> in frame world
[INFO] Checking 32 piece IDs...
[INFO] Detected white_king (ID: 316) at (0.123, 0.456, 0.040)
...
[INFO] Detection complete: 32 pieces found
```

### Step 5: Move a piece
```bash
ros2 service call /move_piece action_module/srv/MovePiece "{aruco_id: 316, target_square: 'e4'}"
```

## Troubleshooting

### Executor still crashes
- Make sure you rebuilt: `colcon build --packages-select action_module`
- Check logs: The executor should now show "Helpers initialized successfully"

### No pieces detected
1. **Check ArUco broadcaster is running:**
   ```bash
   ros2 node list | grep aruco
   ```

2. **Check TF frames exist:**
   ```bash
   ros2 run tf2_ros tf2_echo world aruco_316
   ```
   If this fails, the ArUco broadcaster isn't publishing transforms.

3. **Check camera is publishing markers:**
   ```bash
   ros2 topic echo /aruco_marker_publisher/markers
   ```

4. **Verify frame prefix matches:**
   - Sensing module uses: `aruco_<id>` (default)
   - ArUco broadcaster should publish: `aruco_<id>`
   - Check sensing module parameter: `aruco_frame_prefix` should be "aruco"

### Service waits forever
- Make sure executor node is running (check with `ros2 node list`)
- Check executor logs for errors
- Verify all dependencies are running (IK server, gripper server, etc.)
