// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from chesslab_setup2_interfaces:msg/InverseKinematicsSolution.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "chesslab_setup2_interfaces/msg/inverse_kinematics_solution.hpp"


#ifndef CHESSLAB_SETUP2_INTERFACES__MSG__DETAIL__INVERSE_KINEMATICS_SOLUTION__STRUCT_HPP_
#define CHESSLAB_SETUP2_INTERFACES__MSG__DETAIL__INVERSE_KINEMATICS_SOLUTION__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__chesslab_setup2_interfaces__msg__InverseKinematicsSolution __attribute__((deprecated))
#else
# define DEPRECATED__chesslab_setup2_interfaces__msg__InverseKinematicsSolution __declspec(deprecated)
#endif

namespace chesslab_setup2_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct InverseKinematicsSolution_
{
  using Type = InverseKinematicsSolution_<ContainerAllocator>;

  explicit InverseKinematicsSolution_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit InverseKinematicsSolution_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _ik_type =
    std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _ik_type ik;

  // setters for named parameter idiom
  Type & set__ik(
    const std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> & _arg)
  {
    this->ik = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    chesslab_setup2_interfaces::msg::InverseKinematicsSolution_<ContainerAllocator> *;
  using ConstRawPtr =
    const chesslab_setup2_interfaces::msg::InverseKinematicsSolution_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<chesslab_setup2_interfaces::msg::InverseKinematicsSolution_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<chesslab_setup2_interfaces::msg::InverseKinematicsSolution_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      chesslab_setup2_interfaces::msg::InverseKinematicsSolution_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<chesslab_setup2_interfaces::msg::InverseKinematicsSolution_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      chesslab_setup2_interfaces::msg::InverseKinematicsSolution_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<chesslab_setup2_interfaces::msg::InverseKinematicsSolution_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<chesslab_setup2_interfaces::msg::InverseKinematicsSolution_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<chesslab_setup2_interfaces::msg::InverseKinematicsSolution_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__chesslab_setup2_interfaces__msg__InverseKinematicsSolution
    std::shared_ptr<chesslab_setup2_interfaces::msg::InverseKinematicsSolution_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__chesslab_setup2_interfaces__msg__InverseKinematicsSolution
    std::shared_ptr<chesslab_setup2_interfaces::msg::InverseKinematicsSolution_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const InverseKinematicsSolution_ & other) const
  {
    if (this->ik != other.ik) {
      return false;
    }
    return true;
  }
  bool operator!=(const InverseKinematicsSolution_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct InverseKinematicsSolution_

// alias to use template instance with default allocator
using InverseKinematicsSolution =
  chesslab_setup2_interfaces::msg::InverseKinematicsSolution_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace chesslab_setup2_interfaces

#endif  // CHESSLAB_SETUP2_INTERFACES__MSG__DETAIL__INVERSE_KINEMATICS_SOLUTION__STRUCT_HPP_
