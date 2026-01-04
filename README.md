# ROS2 Chess Robot System

A complete ROS2-based chess robot system for the UR3 robot arm with Robotiq gripper, featuring ArUco marker-based piece detection, intelligent motion planning, and a web-based user interface.

## 📋 Table of Contents

- [Overview](#overview)
- [System Architecture](#system-architecture)
- [Prerequisites](#prerequisites)
- [Installation](#installation)
- [Quick Start](#quick-start)
- [Detailed Usage](#detailed-usage)
- [Configuration](#configuration)
- [Troubleshooting](#troubleshooting)
- [ArUco Marker IDs](#aruco-marker-ids)
- [API Reference](#api-reference)
- [Development](#development)

---

## 🎯 Overview

This system enables a UR3 robot arm to autonomously play chess by:
- **Detecting** chess pieces using ArUco markers on each piece
- **Planning** collision-free pick-and-place motions
- **Executing** precise grasping and placement operations
- **Providing** a web interface for user interaction

### Key Features

- ✅ Single launch file for complete system startup
- ✅ ArUco marker-based piece detection and tracking
- ✅ Configurable grasp offset calibration
- ✅ Web-based UI at `http://localhost:8080`
- ✅ ROS2 service API for programmatic control
- ✅ Debug mode for transform chain visualization
- ✅ Support for both simulation and real robot

---

## 🏗️ System Architecture

```
┌─────────────────────────────────────────────────────────────────┐
│                    Chess Robot System                            │
├─────────────────────────────────────────────────────────────────┤
│                                                                  │
│  ┌──────────────┐    ┌──────────────┐    ┌──────────────┐       │
│  │   Sensing    │───▶│   Planning   │───▶│    Action    │       │
│  │   Module     │    │   Module     │    │    Module    │       │
│  └──────────────┘    └──────────────┘    └──────────────┘       │
│         │                   │                   │                │
│         ▼                   ▼                   ▼                │
│  ┌──────────────┐    ┌──────────────┐    ┌──────────────┐       │
│  │    ArUco     │    │  IK Solver   │    │   Gripper    │       │
│  │  Broadcaster │    │ (kinenikros2)│    │   Server     │       │
│  └──────────────┘    └──────────────┘    └──────────────┘       │
│                                                                  │
│  ┌──────────────────────────────────────────────────────────┐   │
│  │                    Gazebo Simulation                      │   │
│  │  (UR3 Robot + Chessboard + Camera + Chess Pieces)        │   │
│  └──────────────────────────────────────────────────────────┘   │
│                                                                  │
│  ┌──────────────┐                                               │
│  │   Web UI     │  ◀── http://localhost:8080                    │
│  └──────────────┘                                               │
│                                                                  │
└─────────────────────────────────────────────────────────────────┘
```

### Modules

| Module | Description |
|--------|-------------|
| **chesslab_setup2** | Gazebo simulation environment with UR3 robot and chessboard |
| **aruco_broadcaster** | ArUco marker detection and TF frame publishing |
| **sensing_module** | Piece location services and detection |
| **planning_module** | Pick/place motion planning |
| **action_module** | Motion execution and gripper control |
| **chess_ui** | Web-based user interface |
| **integrated_system** | Master launch files combining all modules |

---

## 📦 Prerequisites

### System Requirements

- Ubuntu 22.04 LTS
- ROS2 Humble Hawksbill
- Gazebo (Ignition Fortress or compatible)
- Python 3.10+

### ROS2 Packages

```bash
sudo apt install ros-humble-tf2-ros ros-humble-tf2-tools ros-humble-tf2-geometry-msgs
sudo apt install ros-humble-gazebo-ros-pkgs
sudo apt install ros-humble-controller-manager ros-humble-joint-trajectory-controller
```

---

## 🔧 Installation

### 1. Create Workspace

```bash
mkdir -p ~/chess_robot_ws/src
cd ~/chess_robot_ws/src
```

### 2. Clone Repository

```bash
git clone https://github.com/omidkouhi-source/FINALFINALFINAL.git .
```

### 3. Install Dependencies

```bash
cd ~/chess_robot_ws
rosdep install --from-paths src --ignore-src -r -y
```

### 4. Build Workspace

```bash
colcon build --symlink-install
source install/setup.bash
```

---

## 🚀 Quick Start

### One Command Launch (Recommended)

```bash
# Launch everything with a single command
ros2 launch integrated_system chess_robot_complete.launch.py
```

This launches:
- Gazebo simulation with UR3 robot
- ArUco marker detection
- All perception, planning, and action modules
- Web UI at http://localhost:8080

### Move a Chess Piece

**Option 1: Using Web UI**
1. Open http://localhost:8080 in your browser
2. Click on a piece to select it
3. Click on the target square

**Option 2: Using ROS2 Service**
```bash
ros2 service call /move_piece action_module/srv/MovePiece "{aruco_id: 316, target_square: 'e4'}"
```

---

## 📖 Detailed Usage

### Manual Launch (Step by Step)

If you prefer to launch components separately:

**Terminal 1 - Gazebo Simulation:**
```bash
ros2 launch chesslab_setup2 chesslab_gz.launch.py
```

**Terminal 2 - ArUco Detection:**
```bash
ros2 launch aruco_broadcaster aruco_pl2.launch.py
```

**Terminal 3 - Demo Setup:**
```bash
ros2 launch chesslab_setup2 chesslab_setup2_demo.launch.py
```

**Terminal 4 - Sensing Module:**
```bash
ros2 launch sensing_module sensing_module.launch.py
```

**Terminal 5 - Action Module:**
```bash
ros2 launch action_module action.launch.py
```

**Terminal 6 - Web UI (Optional):**
```bash
ros2 launch chess_ui chess_ui.launch.py
```

### Detect All Pieces

Before moving pieces, detect them first:

```bash
ros2 service call /sensing_module/detect_piece_poses chesslab_setup2_interfaces/srv/DetectPiecePoses
```

### Get Piece Location

Query location of a specific piece:

```bash
ros2 service call /sensing_module/get_piece_location chesslab_setup2_interfaces/srv/GetPieceLocation "{piece_aruco_id: 316}"
```

### Validate TF Chain

Check if all transforms are working:

```bash
# View entire TF tree
ros2 run tf2_tools view_frames

# Check specific transforms
ros2 run tf2_ros tf2_echo world aruco_316
ros2 run tf2_ros tf2_echo world base
```

---

## ⚙️ Configuration

### Launch Parameters

The complete launch file supports many parameters:

```bash
ros2 launch integrated_system chess_robot_complete.launch.py \
    ur_type:=ur3 \
    debug_mode:=true \
    launch_ui:=true \
    marker_grasp_offset_x:=0.005 \
    marker_grasp_offset_y:=-0.002 \
    marker_grasp_offset_z:=-0.01
```

### Key Parameters

| Parameter | Default | Description |
|-----------|---------|-------------|
| `ur_type` | `ur3` | Robot type (ur3, ur3e, ur5, ur5e) |
| `debug_mode` | `false` | Enable detailed logging |
| `launch_ui` | `true` | Start web UI server |
| `ui_port` | `8080` | Web UI port |
| `marker_grasp_offset_x` | `0.0` | X offset for grasp calibration |
| `marker_grasp_offset_y` | `0.0` | Y offset for grasp calibration |
| `marker_grasp_offset_z` | `0.0` | Z offset for grasp calibration |
| `use_detected_z` | `true` | Use TF-detected Z or hardcoded heights |
| `pick_grasp_z` | `0.18` | Gripper height for grasping |
| `pick_approach_z` | `0.18` | Approach height above piece |
| `pick_retreat_z` | `0.24` | Retreat height after picking |

### Grasp Offset Calibration

If the gripper consistently lands off-center:

1. **Enable debug mode:**
   ```bash
   ros2 launch integrated_system chess_robot_complete.launch.py debug_mode:=true
   ```

2. **Test a pick operation and observe the offset**

3. **Apply calibration:**
   ```bash
   ros2 launch integrated_system chess_robot_complete.launch.py \
       marker_grasp_offset_x:=<measured_x_offset> \
       marker_grasp_offset_y:=<measured_y_offset> \
       marker_grasp_offset_z:=<measured_z_offset>
   ```

See `src/sensing_module/docs/DEBUGGING_GUIDE.md` for detailed calibration instructions.

---

## 🔧 Troubleshooting

### Common Issues

#### "Service not available"

```bash
# Check if nodes are running
ros2 node list

# Expected nodes:
# /sensing_node
# /executor
# /ik_server
# /robotiq_gripper
```

#### "Piece not found"

```bash
# Detect pieces first
ros2 service call /sensing_module/detect_piece_poses chesslab_setup2_interfaces/srv/DetectPiecePoses

# Check TF frames
ros2 run tf2_ros tf2_echo world aruco_316
```

#### "TF lookup failed"

```bash
# View TF tree
ros2 run tf2_tools view_frames

# Check camera transform exists
ros2 run tf2_ros tf2_echo world camera_color_optical_frame
```

#### "IK solver failed"

The robot may not be able to reach the target position. Try:
- Adjusting approach heights (`pick_approach_z`, `pick_retreat_z`)
- Enabling IK fallback (`ik_fallback_z_step:=0.02`, `ik_fallback_attempts:=3`)

#### Robot not moving

```bash
# Check joint states
ros2 topic echo /joint_states

# Check trajectory controller
ros2 topic list | grep joint_trajectory
```

---

## 🎲 ArUco Marker IDs

### Black Pieces (200 series)

| Piece | ArUco IDs |
|-------|-----------|
| Pawns | 201-208 |
| Rooks | 209, 210 |
| Knights | 211, 212 |
| Bishops | 213, 214 |
| Queen | 215 |
| King | 216 |

### White Pieces (300 series)

| Piece | ArUco IDs |
|-------|-----------|
| Pawns | 301-308 |
| Rooks | 309, 310 |
| Knights | 311, 312 |
| Bishops | 313, 314 |
| Queen | 315 |
| King | 316 |

---

## 📡 API Reference

### Services

| Service | Type | Description |
|---------|------|-------------|
| `/move_piece` | `action_module/srv/MovePiece` | Move piece by ArUco ID to square |
| `/sensing_module/detect_piece_poses` | `DetectPiecePoses` | Detect all pieces |
| `/sensing_module/get_piece_location` | `GetPieceLocation` | Get specific piece location |
| `/sensing_module/verify_pick_place` | `VerifyPickPlace` | Verify piece placement |
| `/GripperOpen` | `GripperOpen` | Open gripper |
| `/GripperClose` | `GripperClose` | Close gripper |
| `/inverse_kinematics` | `InverseKinematics` | Compute IK solution |

### Example Service Calls

```bash
# Move white king to e4
ros2 service call /move_piece action_module/srv/MovePiece "{aruco_id: 316, target_square: 'e4'}"

# Detect all pieces
ros2 service call /sensing_module/detect_piece_poses chesslab_setup2_interfaces/srv/DetectPiecePoses

# Get piece location
ros2 service call /sensing_module/get_piece_location chesslab_setup2_interfaces/srv/GetPieceLocation "{piece_aruco_id: 316}"

# Open gripper
ros2 service call /GripperOpen robotiq_85_gripper_server/srv/GripperOpen "{order: true}"
```

---

## 🛠️ Development

### Project Structure

```
src/
├── integrated_system/       # Master launch files
│   └── launch/
│       ├── chess_robot_complete.launch.py  # Single launch file
│       ├── full_system.launch.py
│       └── full_system_real.launch.py
├── sensing_module/          # Piece detection
├── planning_module/         # Motion planning
├── action_module/           # Execution control
├── chess_ui/                # Web interface
├── chesslab_setup2/         # Simulation environment
├── aruco_broadcaster/       # ArUco TF publishing
├── kinenikros2/             # IK solver
└── robotiq_85_gripper_server/ # Gripper control
```

### Building After Changes

```bash
cd ~/chess_robot_ws
colcon build --packages-select <package_name>
source install/setup.bash
```

### Running Tests

```bash
colcon test --packages-select <package_name>
colcon test-result --verbose
```

---

## 📄 License

Apache 2.0 License

---

## 👥 Contributors

Chess Robot Team - ROS2 Final Project

---

## 📚 Additional Resources

- [Sensing Module Guide](src/sensing_module/README.md)
- [Debugging Guide](src/sensing_module/docs/DEBUGGING_GUIDE.md)
- [Action Module Usage](src/action_module/HOW_TO_RUN.md)
- [Test Report](src/action_module/TEST_REPORT.md)
