cmake_minimum_required(VERSION 3.8)
project(action_module)

# ======================
# Dependencies
# ======================
find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
find_package(tf2 REQUIRED)
find_package(tf2_ros REQUIRED)
find_package(tf2_geometry_msgs REQUIRED)
find_package(geometry_msgs REQUIRED)
find_package(sensor_msgs REQUIRED)
find_package(trajectory_msgs REQUIRED)
find_package(kinenikros2 REQUIRED)
find_package(planning_module REQUIRED)   # our own exported package
find_package(robotiq_85_gripper_server REQUIRED)
find_package(chesslab_setup2_interfaces REQUIRED)  # for sensing module services
find_package(rosidl_default_generators REQUIRED)


# ======================
# Service generation
# ======================
rosidl_generate_interfaces(${PROJECT_NAME}
  "srv/MovePiece.srv"
)

# ======================
# Include directories
# ======================
include_directories(
  include
  ${planning_module_INCLUDE_DIRS}
)

# ======================
# Core library
# ======================
add_library(action_module_core SHARED
    src/ik_mover.cpp
    src/tf_grasp_builder.cpp
)

ament_target_dependencies(action_module_core
    rclcpp
    tf2
    tf2_ros
    tf2_geometry_msgs
    geometry_msgs
    sensor_msgs
    trajectory_msgs
    kinenikros2
    planning_module
)

# ======================
# Executor node
# ======================
add_executable(executor src/executor.cpp)

target_link_libraries(executor
    action_module_core
    planning_module::planning_core      # <-- correct exported target
)

ament_target_dependencies(executor
    rclcpp
    tf2
    tf2_ros
    tf2_geometry_msgs
    geometry_msgs
    sensor_msgs
    trajectory_msgs
    kinenikros2
    planning_module
    robotiq_85_gripper_server
    chesslab_setup2_interfaces
)

# Link C++ typesupport for generated interfaces
rosidl_get_typesupport_target(cpp_typesupport_target "${PROJECT_NAME}" "rosidl_typesupport_cpp")
target_link_libraries(executor "${cpp_typesupport_target}")

# ======================
# Install
# ======================
install(
    TARGETS executor
    DESTINATION lib/${PROJECT_NAME}
)

install(
    TARGETS action_module_core
    LIBRARY DESTINATION lib
    ARCHIVE DESTINATION lib
    RUNTIME DESTINATION bin
)

install(
    DIRECTORY include/
    DESTINATION include
)

install(
    DIRECTORY launch/
    DESTINATION share/${PROJECT_NAME}
)

install(
    DIRECTORY srv/
    DESTINATION share/${PROJECT_NAME}
)

# ======================
# Export
# ======================
ament_export_include_directories(include)
ament_export_dependencies(
    rclcpp tf2 tf2_ros tf2_geometry_msgs geometry_msgs sensor_msgs trajectory_msgs kinenikros2 planning_module chesslab_setup2_interfaces rosidl_default_runtime
)

ament_package()
