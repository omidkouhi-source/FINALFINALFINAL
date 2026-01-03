# Debugging Guide: Chess Robot TF Chain

This guide helps diagnose and fix grasp offset issues in the chess robot system.

## TF Chain Overview

The transform chain from ArUco marker detection to robot grasp pose:

```
camera_color_optical_frame
        │
        ▼ (ArUco detection)
   aruco_<id>
        │
        ▼ (TF lookup via camera→world)
      world
        │
        ▼ (marker_to_grasp offset)
   grasp_pose (world frame)
        │
        ▼ (TF transform)
      base (IK frame)
        │
        ▼ (IK solver)
   joint_angles
```

## Quick Diagnostic Commands

### 1. Check TF Tree Connectivity

```bash
# View the entire TF tree
ros2 run tf2_tools view_frames

# Check specific transforms
ros2 run tf2_ros tf2_echo world camera_color_optical_frame
ros2 run tf2_ros tf2_echo world aruco_316
ros2 run tf2_ros tf2_echo world base
```

### 2. Verify ArUco Detection

```bash
# Check if ArUco markers are being published
ros2 topic echo /aruco_marker_publisher/markers

# Check aruco_broadcaster is running
ros2 node list | grep aruco
```

### 3. Test Sensing Module

```bash
# Detect all pieces
ros2 service call /sensing_module/detect_piece_poses chesslab_setup2_interfaces/srv/DetectPiecePoses

# Get specific piece location
ros2 service call /sensing_module/get_piece_location chesslab_setup2_interfaces/srv/GetPieceLocation "{piece_aruco_id: 316}"
```

### 4. Enable Debug Mode

Launch with debug_mode enabled:

```bash
# Sensing module with debug
ros2 launch sensing_module sensing_module.launch.py debug_mode:=true

# Action module with debug
ros2 launch action_module action.launch.py debug_mode:=true
```

This will print detailed transform information:
- Raw ArUco pose (before offset)
- Applied marker-to-grasp offset
- Final grasp pose in world frame
- Transformed pose in IK base frame

## Common Issues and Fixes

### Issue: Gripper Position Offset (X/Y error)

**Symptoms**: Gripper moves to approximately the right spot but is consistently off in X or Y.

**Diagnosis**:
```bash
# Enable debug mode and check raw vs final poses
ros2 launch sensing_module sensing_module.launch.py debug_mode:=true
ros2 service call /sensing_module/get_piece_location chesslab_setup2_interfaces/srv/GetPieceLocation "{piece_aruco_id: 316}"
```

**Fix**: Adjust marker_grasp_offset_x/y in sensing_module launch:
```bash
ros2 launch sensing_module sensing_module.launch.py \
    marker_grasp_offset_x:=0.01 \
    marker_grasp_offset_y:=-0.005
```

### Issue: Gripper Height Wrong (Z error)

**Symptoms**: Gripper approaches at wrong height or doesn't descend enough to grasp.

**Diagnosis**:
1. Check if `use_detected_z` is true (uses TF) or false (uses hardcoded heights)
2. Compare raw ArUco Z with expected piece height

**Fix options**:
1. If marker height is correct, use detected Z:
   ```bash
   ros2 launch sensing_module sensing_module.launch.py use_detected_z:=true marker_grasp_offset_z:=-0.02
   ```
2. If marker height is unreliable, use legacy mode:
   ```bash
   ros2 launch sensing_module sensing_module.launch.py use_detected_z:=false
   ```

### Issue: TF Lookup Failures

**Symptoms**: "Could not get transform" errors.

**Diagnosis**:
```bash
# Check if frames exist
ros2 run tf2_ros tf2_echo world aruco_316
ros2 run tf2_ros tf2_echo camera_color_optical_frame aruco_316
```

**Fix**:
1. Ensure aruco_broadcaster is running
2. Check camera calibration (world→camera transform)
3. Verify ArUco markers are visible

### Issue: Wrong Board Square Positions

**Symptoms**: Pieces placed on wrong squares.

**Diagnosis**:
```bash
# Test board geometry
ros2 launch action_module action.launch.py debug_mode:=true
# Then call move_piece and check logged square poses
```

**Fix**: Adjust board parameters:
```bash
ros2 launch action_module action.launch.py \
    board_origin_x:=-0.175 \
    board_origin_y:=-0.175 \
    board_square_size:=0.05 \
    board_swap_xy:=true \
    board_flip_x:=false \
    board_flip_y:=false
```

## Calibration Procedure

### Step 1: Verify Camera-to-World Transform

1. Place an ArUco marker at a known world position
2. Run: `ros2 run tf2_ros tf2_echo world aruco_<id>`
3. Compare reported position with actual position
4. If wrong, recalibrate camera position

### Step 2: Measure Marker-to-Grasp Offset

1. Enable debug mode
2. Move robot to known position manually
3. Record the gripper TCP position
4. Compare with reported ArUco position
5. Calculate offset: `offset = gripper_pos - aruco_pos`
6. Apply offset in launch parameters

### Step 3: Tune Pick/Place Heights

1. Start with conservative (high) approach heights:
   ```bash
   pick_approach_z:=0.25 pick_grasp_z:=0.20
   ```
2. Gradually lower until gripper can grasp pieces
3. For tall pieces (king/queen), use higher values

## Parameter Reference

### Sensing Module

| Parameter | Default | Description |
|-----------|---------|-------------|
| marker_grasp_offset_x | 0.0 | X offset from marker to grasp point (m) |
| marker_grasp_offset_y | 0.0 | Y offset from marker to grasp point (m) |
| marker_grasp_offset_z | 0.0 | Z offset from marker to grasp point (m) |
| use_detected_z | true | Use TF Z or hardcoded piece heights |
| debug_mode | false | Enable detailed logging |

### Action Module

| Parameter | Default | Description |
|-----------|---------|-------------|
| pick_grasp_z | 0.18 | Height above object for grasp (m) |
| pick_approach_z | 0.18 | Height above object for approach (m) |
| pick_retreat_z | 0.24 | Height above object for retreat (m) |
| debug_mode | false | Enable detailed transform logging |

## Test Checklist

Run these tests after any calibration change:

- [ ] ArUco frames visible in TF tree
- [ ] Sensing module detects all pieces
- [ ] Single piece location query returns valid pose
- [ ] Robot approaches piece at correct XY
- [ ] Robot descends to correct Z height
- [ ] Gripper closes on piece center
- [ ] Piece lifts cleanly
- [ ] Piece places at correct square center
