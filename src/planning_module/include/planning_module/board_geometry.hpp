#pragma once

#include <string>
#include <utility>
#include "geometry_msgs/msg/pose.hpp"

namespace planning_module
{

// Simple configuration for the board size and origin
struct BoardConfig
{
  double square_size;        // length of one square in metres (e.g. 0.05)
  double origin_x;           // board frame: x coordinate of A1 centre
  double origin_y;           // board frame: y coordinate of A1 centre
  double yaw;                // board rotation around Z in radians
  bool swap_xy;              // swap file/rank axes to match board layout
  bool flip_x;               // mirror file axis (a<->h)
  bool flip_y;               // mirror rank axis (1<->8)
};

// Responsible for converting a chess square (e.g. "e2") into a pose in the board frame
class BoardGeometry
{
public:
  explicit BoardGeometry(const BoardConfig & cfg);

  // Returns true if square string is valid (a1..h8)
  bool is_valid_square(const std::string & square) const;

  // Convert algebraic square (e.g. "e2") to (file, rank) indices [0..7]
  // file = 0 is 'a', rank = 0 is '1'
  std::pair<int, int> square_to_indices(const std::string & square) const;

  // Build a pose (in board frame) for the centre of the square at a given height z
  geometry_msgs::msg::Pose square_to_pose(const std::string & square, double height_z) const;

private:
  BoardConfig cfg_;
};

}  // namespace planning_module
