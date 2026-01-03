// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from tablesens:msg/MarkerFix.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "tablesens/msg/marker_fix.hpp"


#ifndef TABLESENS__MSG__DETAIL__MARKER_FIX__STRUCT_HPP_
#define TABLESENS__MSG__DETAIL__MARKER_FIX__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'pose'
#include "geometry_msgs/msg/detail/pose__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__tablesens__msg__MarkerFix __attribute__((deprecated))
#else
# define DEPRECATED__tablesens__msg__MarkerFix __declspec(deprecated)
#endif

namespace tablesens
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct MarkerFix_
{
  using Type = MarkerFix_<ContainerAllocator>;

  explicit MarkerFix_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : pose(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = 0ul;
    }
  }

  explicit MarkerFix_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : pose(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = 0ul;
    }
  }

  // field types and members
  using _id_type =
    uint32_t;
  _id_type id;
  using _pose_type =
    geometry_msgs::msg::Pose_<ContainerAllocator>;
  _pose_type pose;

  // setters for named parameter idiom
  Type & set__id(
    const uint32_t & _arg)
  {
    this->id = _arg;
    return *this;
  }
  Type & set__pose(
    const geometry_msgs::msg::Pose_<ContainerAllocator> & _arg)
  {
    this->pose = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    tablesens::msg::MarkerFix_<ContainerAllocator> *;
  using ConstRawPtr =
    const tablesens::msg::MarkerFix_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<tablesens::msg::MarkerFix_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<tablesens::msg::MarkerFix_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      tablesens::msg::MarkerFix_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<tablesens::msg::MarkerFix_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      tablesens::msg::MarkerFix_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<tablesens::msg::MarkerFix_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<tablesens::msg::MarkerFix_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<tablesens::msg::MarkerFix_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__tablesens__msg__MarkerFix
    std::shared_ptr<tablesens::msg::MarkerFix_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__tablesens__msg__MarkerFix
    std::shared_ptr<tablesens::msg::MarkerFix_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MarkerFix_ & other) const
  {
    if (this->id != other.id) {
      return false;
    }
    if (this->pose != other.pose) {
      return false;
    }
    return true;
  }
  bool operator!=(const MarkerFix_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MarkerFix_

// alias to use template instance with default allocator
using MarkerFix =
  tablesens::msg::MarkerFix_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace tablesens

#endif  // TABLESENS__MSG__DETAIL__MARKER_FIX__STRUCT_HPP_
