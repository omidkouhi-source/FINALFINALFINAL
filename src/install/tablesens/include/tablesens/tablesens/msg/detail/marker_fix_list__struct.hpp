// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from tablesens:msg/MarkerFixList.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "tablesens/msg/marker_fix_list.hpp"


#ifndef TABLESENS__MSG__DETAIL__MARKER_FIX_LIST__STRUCT_HPP_
#define TABLESENS__MSG__DETAIL__MARKER_FIX_LIST__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'marker_fix_list'
#include "tablesens/msg/detail/marker_fix__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__tablesens__msg__MarkerFixList __attribute__((deprecated))
#else
# define DEPRECATED__tablesens__msg__MarkerFixList __declspec(deprecated)
#endif

namespace tablesens
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct MarkerFixList_
{
  using Type = MarkerFixList_<ContainerAllocator>;

  explicit MarkerFixList_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit MarkerFixList_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _marker_fix_list_type =
    std::vector<tablesens::msg::MarkerFix_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<tablesens::msg::MarkerFix_<ContainerAllocator>>>;
  _marker_fix_list_type marker_fix_list;

  // setters for named parameter idiom
  Type & set__marker_fix_list(
    const std::vector<tablesens::msg::MarkerFix_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<tablesens::msg::MarkerFix_<ContainerAllocator>>> & _arg)
  {
    this->marker_fix_list = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    tablesens::msg::MarkerFixList_<ContainerAllocator> *;
  using ConstRawPtr =
    const tablesens::msg::MarkerFixList_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<tablesens::msg::MarkerFixList_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<tablesens::msg::MarkerFixList_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      tablesens::msg::MarkerFixList_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<tablesens::msg::MarkerFixList_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      tablesens::msg::MarkerFixList_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<tablesens::msg::MarkerFixList_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<tablesens::msg::MarkerFixList_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<tablesens::msg::MarkerFixList_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__tablesens__msg__MarkerFixList
    std::shared_ptr<tablesens::msg::MarkerFixList_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__tablesens__msg__MarkerFixList
    std::shared_ptr<tablesens::msg::MarkerFixList_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MarkerFixList_ & other) const
  {
    if (this->marker_fix_list != other.marker_fix_list) {
      return false;
    }
    return true;
  }
  bool operator!=(const MarkerFixList_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MarkerFixList_

// alias to use template instance with default allocator
using MarkerFixList =
  tablesens::msg::MarkerFixList_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace tablesens

#endif  // TABLESENS__MSG__DETAIL__MARKER_FIX_LIST__STRUCT_HPP_
