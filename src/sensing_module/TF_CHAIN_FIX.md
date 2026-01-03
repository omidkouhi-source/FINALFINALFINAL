# TF Chain Fix for ArUco Detection

## Problem

The sensing module was not detecting pieces even though ArUco markers are visible in RViz. The TF tree shows:
- ArUco frames are published from `camera_color_optical_frame` to `aruco_<id>`
- The sensing module tries to lookup `world` -> `aruco_<id>`
- TF2 should automatically chain transforms, but it was failing

## Solution

Updated `getPieceTransform()` to:
1. **First attempt**: Direct lookup from `world` to `aruco_<id>` (TF2 automatic chaining)
2. **Fallback**: Manual transform chaining through `camera_color_optical_frame`:
   - Get `world` -> `camera_color_optical_frame`
   - Get `camera_color_optical_frame` -> `aruco_<id>`
   - Multiply transforms to get `world` -> `aruco_<id>`

## How to Test

1. **Rebuild sensing module:**
   ```bash
   cd /home/costin/data/colcon_wsFinalWork
   colcon build --packages-select sensing_module
   source install/setup.bash
   ```

2. **Restart sensing node:**
   ```bash
   ros2 run sensing_module sensing_node
   ```

3. **Test detection:**
   ```bash
   ros2 service call /sensing_module/detect_piece_poses chesslab_setup2_interfaces/srv/DetectPiecePoses
   ```

4. **Check for warnings:**
   - If you see "Could not get transform" warnings, check:
     - Is `camera_color_optical_frame` in the TF tree?
     - Is there a transform from `world` to `camera_color_optical_frame`?
     - Check: `ros2 run tf2_ros tf2_echo world camera_color_optical_frame`

## Expected Behavior

After the fix, you should see:
- Pieces being detected successfully
- Transform warnings only for pieces that truly don't exist
- Successful detection of all visible ArUco markers (201-216, 301-316)

