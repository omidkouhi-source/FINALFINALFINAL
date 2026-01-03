#include "planning_module/board_geometry.hpp"
#include <cmath>
#include <cctype>
#include <iostream>

namespace planning_module
{

BoardGeometry::BoardGeometry(const BoardConfig & cfg)
: cfg_(cfg)
{
}

bool BoardGeometry::is_valid_square(const std::string & square) const
{
  if (square.size() != 2) return false;
  char file = std::tolower(square[0]);
  char rank = square[1];

  return (file >= 'a' && file <= 'h' && rank >= '1' && rank <= '8');
}

std::pair<int,int> BoardGeometry::square_to_indices(const std::string & square) const
{
  char file = std::tolower(square[0]);
  char rank = square[1];

  int file_idx = file - 'a';   // a→0, b→1 ... h→7
  int rank_idx = rank - '1';   // 1→0 ... 8→7

  return {file_idx, rank_idx};
}

geometry_msgs::msg::Pose BoardGeometry::square_to_pose(
  const std::string & square,
  double height_z) const
{
  geometry_msgs::msg::Pose pose;

  auto [file_idx, rank_idx] = square_to_indices(square);

  int file = cfg_.flip_x ? (7 - file_idx) : file_idx;
  int rank = cfg_.flip_y ? (7 - rank_idx) : rank_idx;

  double dx = file * cfg_.square_size;
  double dy = rank * cfg_.square_size;

  if (cfg_.swap_xy) {
    std::swap(dx, dy);
  }

  double cos_yaw = std::cos(cfg_.yaw);
  double sin_yaw = std::sin(cfg_.yaw);

  pose.position.x = cfg_.origin_x + cos_yaw * dx - sin_yaw * dy;
  pose.position.y = cfg_.origin_y + sin_yaw * dx + cos_yaw * dy;
  pose.position.z = height_z;

  // Neutral orientation (point down optional)
  pose.orientation.x = 0.0;
  pose.orientation.y = 0.0;
  pose.orientation.z = 0.0;
  pose.orientation.w = 1.0;

  return pose;
}

}  // namespace planning_module
