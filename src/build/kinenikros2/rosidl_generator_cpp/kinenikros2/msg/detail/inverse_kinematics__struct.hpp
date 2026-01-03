// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from kinenikros2:msg/InverseKinematics.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "kinenikros2/msg/inverse_kinematics.hpp"


#ifndef KINENIKROS2__MSG__DETAIL__INVERSE_KINEMATICS__STRUCT_HPP_
#define KINENIKROS2__MSG__DETAIL__INVERSE_KINEMATICS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__kinenikros2__msg__InverseKinematics __attribute__((deprecated))
#else
# define DEPRECATED__kinenikros2__msg__InverseKinematics __declspec(deprecated)
#endif

namespace kinenikros2
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct InverseKinematics_
{
  using Type = InverseKinematics_<ContainerAllocator>;

  explicit InverseKinematics_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit InverseKinematics_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    kinenikros2::msg::InverseKinematics_<ContainerAllocator> *;
  using ConstRawPtr =
    const kinenikros2::msg::InverseKinematics_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<kinenikros2::msg::InverseKinematics_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<kinenikros2::msg::InverseKinematics_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      kinenikros2::msg::InverseKinematics_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<kinenikros2::msg::InverseKinematics_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      kinenikros2::msg::InverseKinematics_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<kinenikros2::msg::InverseKinematics_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<kinenikros2::msg::InverseKinematics_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<kinenikros2::msg::InverseKinematics_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__kinenikros2__msg__InverseKinematics
    std::shared_ptr<kinenikros2::msg::InverseKinematics_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__kinenikros2__msg__InverseKinematics
    std::shared_ptr<kinenikros2::msg::InverseKinematics_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const InverseKinematics_ & other) const
  {
    if (this->ik != other.ik) {
      return false;
    }
    return true;
  }
  bool operator!=(const InverseKinematics_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct InverseKinematics_

// alias to use template instance with default allocator
using InverseKinematics =
  kinenikros2::msg::InverseKinematics_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace kinenikros2

#endif  // KINENIKROS2__MSG__DETAIL__INVERSE_KINEMATICS__STRUCT_HPP_
