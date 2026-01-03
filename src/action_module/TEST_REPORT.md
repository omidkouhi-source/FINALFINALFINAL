# Chess Robot System - Test Report and Validation Guide

## Summary of Changes

### Root Cause Analysis

The grasp offset issue was caused by two factors:

1. **Z Coordinate Discarding**: The sensing module was discarding the actual detected Z coordinate from the ArUco marker TF and replacing it with a hardcoded piece height value (`piece_heights_[piece_id] / 2.0`). This meant the actual marker position was ignored.

2. **No Offset Calibration**: There was no mechanism to compensate for any offset between the ArUco marker center and the actual grasp point on the piece (marker placement error, marker size, etc.).

### Changes Made

#### Files Modified

| File | Changes |
|------|---------|
| `sensing_module/src/sensing_node.cpp` | Added marker-to-grasp offset parameters, debug mode |
| `sensing_module/src/sensing_node_combined.cpp` | Same changes (compiled file) |
| `sensing_module/include/sensing_module/sensing_node.h` | Added member variables |
| `sensing_module/config/sensing_params.yaml` | Added new parameters with documentation |
| `sensing_module/launch/sensing_module.launch.py` | Added launch arguments for new parameters |
| `sensing_module/CMakeLists.txt` | Added install for docs and scripts |
| `action_module/src/tf_grasp_builder.cpp` | Added debug logging |
| `action_module/include/action_module/tf_grasp_builder.hpp` | Added debug_mode member |
| `action_module/launch/action.launch.py` | Added debug_mode parameter |

#### Files Created

| File | Purpose |
|------|---------|
| `sensing_module/docs/DEBUGGING_GUIDE.md` | Comprehensive debugging and calibration guide |
| `sensing_module/scripts/validate_tf_chain.py` | TF chain validation script |

## How to Calibrate Offsets

### Step 1: Enable Debug Mode

```bash
# Start sensing module with debug mode
ros2 launch sensing_module sensing_module.launch.py debug_mode:=true

# Start action module with debug mode
ros2 launch action_module action.launch.py debug_mode:=true
```

### Step 2: Identify the Offset

1. Move a piece manually to a known position
2. Call the get_piece_location service:
   ```bash
   ros2 service call /sensing_module/get_piece_location chesslab_setup2_interfaces/srv/GetPieceLocation "{piece_aruco_id: 316}"
   ```
3. Compare the reported position with the actual position
4. Calculate the offset: `offset = actual_pos - reported_pos`

### Step 3: Apply the Offset

```bash
ros2 launch sensing_module sensing_module.launch.py \
    marker_grasp_offset_x:=<measured_x_offset> \
    marker_grasp_offset_y:=<measured_y_offset> \
    marker_grasp_offset_z:=<measured_z_offset> \
    use_detected_z:=true
```

### Step 4: Verify

Test with a simple move:
```bash
ros2 service call /move_piece action_module/srv/MovePiece "{aruco_id: 316, target_square: 'e4'}"
```

## Test Checklist

### Pre-requisites
- [ ] All ROS2 nodes running (chesslab_gz, aruco_broadcaster, sensing_module, action_module)
- [ ] ArUco markers visible in camera
- [ ] TF tree connected (verify with `ros2 run tf2_tools view_frames`)

### Functional Tests

#### Test 1: Piece Detection
```bash
ros2 service call /sensing_module/detect_piece_poses chesslab_setup2_interfaces/srv/DetectPiecePoses
```
- [ ] Returns success with >0 pieces detected
- [ ] Pieces visible in RViz

#### Test 2: Single Piece Location
```bash
ros2 service call /sensing_module/get_piece_location chesslab_setup2_interfaces/srv/GetPieceLocation "{piece_aruco_id: 316}"
```
- [ ] Returns success
- [ ] Position matches visual location in simulation

#### Test 3: Normal Move (via Service)
```bash
ros2 service call /move_piece action_module/srv/MovePiece "{aruco_id: 316, target_square: 'e4'}"
```
- [ ] Robot approaches piece
- [ ] Gripper aligned with piece center
- [ ] Piece picked up successfully
- [ ] Piece placed at target square
- [ ] Returns success

#### Test 4: Normal Move (via UI)
1. Open http://localhost:8080
2. Click on a piece
3. Click on target square
- [ ] Same behavior as service call

#### Test 5: Capture Move (if implemented)
```bash
ros2 service call /move_piece action_module/srv/MovePiece "{aruco_id: 301, target_square: 'e4'}"
# Where another piece is already on e4
```
- [ ] Capturing piece removed first (if implemented)
- [ ] Moving piece placed at target

#### Test 6: Detection Noise Tolerance
Move camera slightly or add minor vibration
- [ ] System still detects pieces reliably
- [ ] Grasp position within acceptable tolerance

## Parameter Reference

### Sensing Module Parameters

| Parameter | Type | Default | Description |
|-----------|------|---------|-------------|
| `marker_grasp_offset_x` | double | 0.0 | X offset from marker to grasp point (meters) |
| `marker_grasp_offset_y` | double | 0.0 | Y offset from marker to grasp point (meters) |
| `marker_grasp_offset_z` | double | 0.0 | Z offset from marker to grasp point (meters) |
| `use_detected_z` | bool | true | Use actual TF Z (true) or hardcoded heights (false) |
| `debug_mode` | bool | false | Enable detailed transform logging |

### Action Module Parameters

| Parameter | Type | Default | Description |
|-----------|------|---------|-------------|
| `debug_mode` | bool | false | Enable detailed TF and pose logging |
| `pick_grasp_z` | double | 0.18 | Height above object for grasp (meters) |
| `pick_approach_z` | double | 0.18 | Height above object for approach (meters) |
| `pick_retreat_z` | double | 0.24 | Height above object for retreat (meters) |

## Troubleshooting Quick Reference

| Problem | Likely Cause | Solution |
|---------|--------------|----------|
| Gripper off in X/Y | Marker center != piece center | Calibrate `marker_grasp_offset_x/y` |
| Gripper too high | Wrong Z handling | Set `use_detected_z:=true` and calibrate `marker_grasp_offset_z` |
| Gripper too low | Z offset wrong | Increase `marker_grasp_offset_z` or `pick_grasp_z` |
| TF lookup fails | Missing frames | Run `validate_tf_chain.py`, check aruco_broadcaster |
| Inconsistent grasp | Detection noise | Verify stable camera mount, check TF timestamps |

## CLI Commands for Validation

```bash
# Validate TF chain
ros2 run sensing_module validate_tf_chain.py

# Check specific transforms
ros2 run tf2_ros tf2_echo world aruco_316
ros2 run tf2_ros tf2_echo world base
ros2 run tf2_ros tf2_echo camera_color_optical_frame aruco_316

# View TF tree
ros2 run tf2_tools view_frames

# Check available services
ros2 service list | grep -E "move_piece|sensing"

# Monitor TF topics
ros2 topic echo /tf | head -50
```

## Assignment Requirements Mapping

| Requirement | Implementation | Status |
|-------------|----------------|--------|
| ArUco marker detection | aruco_broadcaster, sensing_module | ✓ |
| Piece location query | `/sensing_module/get_piece_location` service | ✓ |
| Move command (service) | `/move_piece` service | ✓ |
| Move command (UI) | chess_ui web interface | ✓ |
| Pick-and-place sequence | action_module executor | ✓ |
| Configurable offsets | marker_grasp_offset parameters | ✓ |
| Debug tooling | debug_mode, validate_tf_chain.py | ✓ |
| Documentation | DEBUGGING_GUIDE.md, HOW_TO_RUN.md | ✓ |

## Known Limitations / TODOs

1. **Capture Logic**: Full capture sequence (removing captured piece) may need additional implementation
2. **Castling**: Special castling move logic not verified
3. **Game State Tracking**: No persistent game state tracking
4. **Chess Rule Validation**: Basic notation validation only
