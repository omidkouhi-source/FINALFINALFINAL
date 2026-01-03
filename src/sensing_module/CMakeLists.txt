cmake_minimum_required(VERSION 3.8)
project(sensing_module)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# find dependencies
find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
find_package(std_msgs REQUIRED)
find_package(geometry_msgs REQUIRED)
find_package(visualization_msgs REQUIRED)
find_package(sensor_msgs REQUIRED)
find_package(tf2 REQUIRED)
find_package(tf2_ros REQUIRED)
find_package(tf2_geometry_msgs REQUIRED)
find_package(chesslab_setup2_interfaces REQUIRED)

set(dependencies
  rclcpp
  std_msgs
  geometry_msgs
  visualization_msgs
  sensor_msgs
  tf2
  tf2_ros
  tf2_geometry_msgs
  chesslab_setup2_interfaces
)

# Create sensing_node executable from combined file
add_executable(sensing_node src/sensing_node_combined.cpp)
target_compile_features(sensing_node PUBLIC c_std_99 cxx_std_17)
ament_target_dependencies(sensing_node ${dependencies})

# Install targets
install(TARGETS sensing_node
  DESTINATION lib/${PROJECT_NAME})

# Install directories
install(DIRECTORY launch config
  DESTINATION share/${PROJECT_NAME}/)

if(BUILD_TESTING)
  find_package(ament_lint_auto REQUIRED)
  set(ament_cmake_copyright_FOUND TRUE)
  set(ament_cmake_cpplint_FOUND TRUE)
  ament_lint_auto_find_test_dependencies()
endif()

ament_export_dependencies(${dependencies})
ament_package()
