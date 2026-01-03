cmake_minimum_required(VERSION 3.8)
project(planning_module)

find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
find_package(geometry_msgs REQUIRED)
find_package(sensor_msgs REQUIRED)
find_package(std_srvs REQUIRED)
find_package(tf2 REQUIRED)
find_package(tf2_ros REQUIRED)
find_package(tf2_geometry_msgs REQUIRED)
find_package(kinenikros2 REQUIRED)

include_directories(include)

# ============================
# Core motion planning library
# ============================
add_library(planning_core SHARED
  src/board_geometry.cpp
  src/motion_planning.cpp
  src/pick_place_planner.cpp
)

ament_target_dependencies(planning_core
  rclcpp
  geometry_msgs
  sensor_msgs
  tf2
  tf2_ros
  tf2_geometry_msgs
  kinenikros2
)

target_include_directories(planning_core PUBLIC
  $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
  $<INSTALL_INTERFACE:include>
)

# Install library into standard lib directory so runtime linker can find it
install(
  TARGETS planning_core
  EXPORT export_planning_core
  LIBRARY DESTINATION lib
  ARCHIVE DESTINATION lib
  RUNTIME DESTINATION bin
)

# Install headers
install(
  DIRECTORY include/
  DESTINATION include
)

# Export include dirs
ament_export_include_directories(include)

# Export library (with target)
ament_export_targets(export_planning_core HAS_LIBRARY_TARGET)

# ============================
# Service node executables
# ============================
add_executable(pick_service_node src/pick_service_node.cpp)
target_link_libraries(pick_service_node planning_core)
ament_target_dependencies(pick_service_node
  rclcpp
  std_srvs
)

add_executable(place_service_node src/place_service_node.cpp)
target_link_libraries(place_service_node planning_core)
ament_target_dependencies(place_service_node
  rclcpp
  std_srvs
)

# Install executables
install(TARGETS pick_service_node place_service_node
  DESTINATION lib/${PROJECT_NAME}
)

# Install launch files
install(DIRECTORY launch
  DESTINATION share/${PROJECT_NAME}
)

# Export dependencies so downstream packages inherit them
ament_export_dependencies(
  rclcpp geometry_msgs sensor_msgs std_srvs tf2 tf2_ros tf2_geometry_msgs kinenikros2
)

ament_package()
