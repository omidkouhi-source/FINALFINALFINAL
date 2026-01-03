# Sensing Module

## Overview

The sensing module is responsible for detecting and tracking chess pieces in the chess robot system using ArUco markers. It provides services to:

1. **Setup**: Detect the poses of all chess pieces and set them in RViz
2. **Location Query**: Get the location of a specific chess piece
3. **Verification**: Check the result of a pick-and-place motion (optional)
4. **Validation**: Validate chess action queries (optional)

## Services

### 1. Detect Piece Poses

**Service**: `/sensing_module/detect_piece_poses`

**Type**: `chesslab_setup2_interfaces/srv/DetectPiecePoses`

**Description**: Scans all known chess piece ArUco markers (201-216 for black, 301-316 for white) and updates their poses in RViz.

**Example**:
```bash
ros2 service call /sensing_module/detect_piece_poses chesslab_setup2_interfaces/srv/DetectPiecePoses
```

**Response**:
- `success`: Whether any pieces were detected
- `num_pieces_detected`: Number of pieces found
- `message`: Descriptive message

### 2. Get Piece Location

**Service**: `/sensing_module/get_piece_location`

**Type**: `chesslab_setup2_interfaces/srv/GetPieceLocation`

**Description**: Returns the current pose of a specific chess piece by its ArUco ID.

**Example**:
```bash
ros2 service call /sensing_module/get_piece_location chesslab_setup2_interfaces/srv/GetPieceLocation "{piece_aruco_id: 316}"
```

**Response**:
- `success`: Whether the piece was found
- `pose`: Current pose of the piece
- `message`: Descriptive message

### 3. Verify Pick and Place

**Service**: `/sensing_module/verify_pick_place`

**Type**: `chesslab_setup2_interfaces/srv/VerifyPickPlace`

**Description**: Verifies whether a piece has been successfully moved to a target position.

**Example**:
```bash
ros2 service call /sensing_module/verify_pick_place chesslab_setup2_interfaces/srv/VerifyPickPlace "{piece_aruco_id: 316, target_position: {x: 0.075, y: 0.025, z: 0.04}, tolerance: 0.02}"
```

**Response**:
- `success`: Whether the check completed
- `piece_at_target`: Whether the piece is at the target (within tolerance)
- `distance_to_target`: Distance from piece to target in meters
- `message`: Descriptive message

### 4. Validate Chess Action

**Service**: `/sensing_module/validate_chess_action`

**Type**: `chesslab_setup2_interfaces/srv/ValidateChessAction`

**Description**: Validates that a chess move notation is correctly formatted.

**Example**:
```bash
ros2 service call /sensing_module/validate_chess_action chesslab_setup2_interfaces/srv/ValidateChessAction "{from_cell: 'e2', to_cell: 'e4'}"
```

**Response**:
- `success`: Whether validation completed
- `is_valid`: Whether the action notation is valid
- `message`: Descriptive message

## Architecture

### Dependencies

- **TF2**: For listening to ArUco marker transforms
- **chesslab_setup2_interfaces**: For service definitions
- **chesslab_setup2_demo**: For setting object poses in RViz

### Chess Piece Mapping

The module uses the following ArUco ID mapping:

**Black Pieces (200 series)**:
- Pawns: 201-208
- Rooks: 209, 210
- Knights: 211, 212
- Bishops: 213, 214
- Queen: 215
- King: 216

**White Pieces (300 series)**:
- Pawns: 301-308
- Rooks: 309, 310
- Knights: 311, 312
- Bishops: 313, 314
- Queen: 315
- King: 316

### Piece Heights

- Pawns: 4 cm
- Rooks, Knights, Bishops: 6 cm
- Queen, King: 8 cm

## Building

To build the sensing module:

```bash
cd ~/colcon_wsFinalProject
colcon build --packages-select sensing_module chesslab_setup2_interfaces
source install/setup.bash
```

## Usage

### 1. Start the chess environment

First, launch the chess lab setup with demo services:

```bash
ros2 launch chesslab_setup2 chesslab_setup2_demo.launch.py
```

### 2. Start the ArUco detection

Launch the ArUco broadcaster to detect markers:

```bash
ros2 launch aruco_broadcaster aruco_pl2.launch.py
```

### 3. Launch the sensing module

```bash
ros2 launch sensing_module sensing_module.launch.py
```

### 4. Detect all pieces

Once all three nodes are running, call the detect service:

```bash
ros2 service call /sensing_module/detect_piece_poses chesslab_setup2_interfaces/srv/DetectPiecePoses
```

## Parameters

- `world_frame` (default: "world"): The reference frame for piece positions
- `camera_frame` (default: "camera_color_optical_frame"): Camera frame name
- `aruco_frame_prefix` (default: "aruco"): Prefix for ArUco marker frames
- `tf_timeout` (default: 2.0): Timeout in seconds for TF lookups

## Integration with Other Modules

The sensing module is designed to work with:

1. **Planning Module**: Provides piece locations for motion planning
2. **Action Manager Module**: Verifies successful execution of moves
3. **ArUco Broadcaster**: Receives ArUco marker detections via TF2
4. **Chesslab Setup**: Uses the setup demo services to update piece poses in RViz

## Troubleshooting

### No pieces detected

1. Ensure the camera is running and publishing images
2. Check that ArUco markers are visible in the camera view
3. Verify that the `aruco_broadcaster` node is running
4. Use `ros2 topic echo /tf` to see if ArUco transforms are being published

### TF lookup errors

1. Check that frames are correctly configured
2. Verify the `aruco_frame_prefix` parameter matches the broadcaster configuration
3. Use `ros2 run tf2_tools view_frames` to visualize the TF tree

### Service not available

1. Ensure `chesslab_setup2_demo` is running for the SetObjPose service
2. Check service availability: `ros2 service list | grep sensing`

## Future Enhancements

- Add full chess rule validation (piece-specific move rules)
- Implement game state tracking
- Add collision detection for planned moves
- Support for captured piece management
- Integration with chess engines (Stockfish, Komodo)
