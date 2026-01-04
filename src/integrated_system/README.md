# Integrated Chess Robot System

## Overview

The `integrated_system` package provides master launch files that bring together all components of the chess robot system:

1. **Gazebo Simulation** - UR3 robot, chessboard, camera, and chess pieces
2. **ArUco Broadcaster** - Marker detection and TF frame publishing
3. **Sensing Module** - Perception and piece detection using ArUco markers
4. **Planning Module** - Motion planning for pick and place operations
5. **Action Module** - Execution control and gripper coordination
6. **Chess UI** - Web-based user interface

## 🚀 Quick Start

### Single Command Launch (Recommended)

```bash
ros2 launch integrated_system chess_robot_complete.launch.py
```

This starts **everything** - Gazebo, ArUco detection, all modules, and the web UI.

After launching:
1. Wait ~10 seconds for all components to initialize
2. Open http://localhost:8080 for the web UI
3. Or use the service: `ros2 service call /move_piece action_module/srv/MovePiece "{aruco_id: 316, target_square: 'e4'}"`

### With Custom Parameters

```bash
ros2 launch integrated_system chess_robot_complete.launch.py \
    ur_type:=ur3 \
    debug_mode:=true \
    marker_grasp_offset_x:=0.005
```

## Features

- ✅ Single launch file for complete system startup
- ✅ Configurable robot type and parameters
- ✅ Debug mode for troubleshooting
- ✅ Web UI for interactive control
- ✅ Automatic service dependency management
- ✅ Support for both simulation and real robot

## Package Contents

### Launch Files

| File | Description |
|------|-------------|
| `chess_robot_complete.launch.py` | **Complete system** - launches everything |
| `full_system.launch.py` | Modules only (requires Gazebo running separately) |
| `full_system_real.launch.py` | For real robot (requires robot driver separately) |

### Dependencies

All three main modules plus supporting services:
- sensing_module
- planning_module
- action_module
- kinenikros2 (IK solver)
- robotiq_85_gripper_server
- chesslab_setup2
- aruco_broadcaster

## Usage

### Simulation

**Step 1**: Launch chess environment
```bash
ros2 launch chesslab_setup2 chesslab_setup2_demo.launch.py
```

**Step 2**: Launch ArUco detection
```bash
ros2 launch aruco_broadcaster aruco_broadcaster.launch.py
```

**Step 3**: Launch integrated system
```bash
ros2 launch integrated_system full_system.launch.py
```

**With custom parameters:**
```bash
ros2 launch integrated_system full_system.launch.py \
  pick_frame:=aruco_201 \
  place_square:=a4
```

### Real Robot

**Prerequisites** (launch separately):
- Robot driver (ur_robot_driver)
- Camera system (tablesens)
- Gripper driver (robotiq_85_driver)
- ArUco broadcaster with calibrated camera

**Launch integrated system:**
```bash
ros2 launch integrated_system full_system_real.launch.py \
  pick_frame:=aruco_316 \
  place_square:=e4
```

## Launch Parameters

### pick_frame (string)
- **Default**: `aruco_316`
- **Description**: ArUco frame ID of the piece to pick
- **Examples**: `aruco_201` (black pawn), `aruco_316` (white king)

### place_square (string)
- **Default**: `e4`
- **Description**: Chess square notation for placement
- **Examples**: `a1`, `e4`, `h8`

## System Services

After launching, the following services are available:

### Sensing Services
- `/sensing_module/detect_piece_poses`
- `/sensing_module/get_piece_location`
- `/sensing_module/verify_pick_place`
- `/sensing_module/validate_chess_action`

### Planning Services
- `/pick_service`
- `/place_service`

### Supporting Services
- `/inverse_kinematics` (IK solver)
- `/GripperOpen`, `/GripperClose`, `/GripperOrder`

## Testing the System

### 1. Verify all nodes are running
```bash
ros2 node list
```
Expected nodes:
- `/sensing_node`
- `/pick_service`
- `/place_service`
- `/action_executor`
- `/ik_server`
- `/gripper_simulator` (or `/robotiq_gripper` for real)

### 2. Test piece detection
```bash
ros2 service call /sensing_module/detect_piece_poses \
  chesslab_setup2_interfaces/srv/DetectPiecePoses
```

### 3. Monitor execution
The action executor will automatically begin the configured pick-place operation.
Watch the terminal output for execution progress.

### 4. Check logs
```bash
ros2 node info /action_executor
ros2 topic echo /joint_states
```

## Troubleshooting

### Problem: Services not available
**Solution**: Check all nodes started successfully
```bash
ros2 node list
ros2 service list
```

### Problem: No pieces detected
**Solution**: Verify ArUco broadcaster is running
```bash
ros2 node list | grep aruco
ros2 run tf2_ros tf2_echo world aruco_316
```

### Problem: Execution fails
**Solution**: Check IK solver and gripper
```bash
ros2 node info /ik_server
ros2 service call /GripperOpen robotiq_85_gripper_server/srv/GripperOpen "{order: true}"
```

### Problem: Planning fails
**Solution**: Verify TF frames are published
```bash
ros2 run tf2_tools view_frames.py
evince frames.pdf
```

## Architecture

```
integrated_system (Master Launch)
├── sensing_module
│   └── sensing_node
├── planning_module
│   ├── pick_service_node
│   └── place_service_node
├── action_module
│   └── executor
└── Supporting Services
    ├── kinenik_srv_server (IK)
    └── gripper_server_sim/real
```

## Configuration

### Sensing Module Config
Located at: `sensing_module/config/sensing_params.yaml`
```yaml
sensing_node:
  ros__parameters:
    world_frame: "world"
    camera_frame: "camera_color_optical_frame"
    aruco_frame_prefix: "aruco"
```

### Executor Config
Passed as launch parameters - see launch files

## Performance

### Expected Timing (Simulation)
- System startup: 5-10 seconds
- Piece detection: < 2 seconds
- Pick-place cycle: 10-15 seconds

### Expected Timing (Real Robot)
- System startup: 10-15 seconds
- Piece detection: 2-4 seconds  
- Pick-place cycle: 20-30 seconds

## Safety

### Simulation
- No physical safety concerns
- Test all motions before real robot

### Real Robot
- ⚠️ Always test in simulation first
- ⚠️ Keep emergency stop accessible
- ⚠️ Start with 10% speed scaling
- ⚠️ Clear workspace before execution

## Examples

### Example 1: Move white king to e4
```bash
ros2 launch integrated_system full_system.launch.py \
  pick_frame:=aruco_316 \
  place_square:=e4
```

### Example 2: Move black pawn to a4
```bash
ros2 launch integrated_system full_system.launch.py \
  pick_frame:=aruco_201 \
  place_square:=a4
```

### Example 3: Custom chess move
```bash
# First detect pieces
ros2 service call /sensing_module/detect_piece_poses \
  chesslab_setup2_interfaces/srv/DetectPiecePoses

# Get piece ID from detection results
# Then launch with that piece
ros2 launch integrated_system full_system.launch.py \
  pick_frame:=aruco_XXX \
  place_square:=YZ
```

## Development

### Adding New Features
1. Implement in respective module (sensing, planning, or action)
2. Test module individually
3. Test with integrated system
4. Update documentation

### Modifying Launch Configuration
Edit the launch files in `launch/` directory to:
- Add new nodes
- Change parameters
- Modify remappings
- Add launch arguments

## Future Enhancements

- [ ] Chess engine integration (Stockfish)
- [ ] Game state tracking
- [ ] Multi-move sequences
- [ ] Advanced error recovery
- [ ] Collision avoidance
- [ ] Configurable speed profiles
- [ ] Logging and replay functionality

## Support

For issues with specific modules, see:
- `sensing_module/README.md`
- `planning_module/README.md` (if available)
- `action_module/README.md` (if available)

For integration issues, see:
- `INTEGRATION_GUIDE.md`
- `TROUBLESHOOTING.md`

## License

Apache 2.0

## Contributors

Chess Robot Team - ROS2 Final Project
