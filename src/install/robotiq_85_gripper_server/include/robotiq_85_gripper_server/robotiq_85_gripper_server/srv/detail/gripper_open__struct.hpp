// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from robotiq_85_gripper_server:srv/GripperOpen.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "robotiq_85_gripper_server/srv/gripper_open.hpp"


#ifndef ROBOTIQ_85_GRIPPER_SERVER__SRV__DETAIL__GRIPPER_OPEN__STRUCT_HPP_
#define ROBOTIQ_85_GRIPPER_SERVER__SRV__DETAIL__GRIPPER_OPEN__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__robotiq_85_gripper_server__srv__GripperOpen_Request __attribute__((deprecated))
#else
# define DEPRECATED__robotiq_85_gripper_server__srv__GripperOpen_Request __declspec(deprecated)
#endif

namespace robotiq_85_gripper_server
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GripperOpen_Request_
{
  using Type = GripperOpen_Request_<ContainerAllocator>;

  explicit GripperOpen_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->order = false;
    }
  }

  explicit GripperOpen_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->order = false;
    }
  }

  // field types and members
  using _order_type =
    bool;
  _order_type order;

  // setters for named parameter idiom
  Type & set__order(
    const bool & _arg)
  {
    this->order = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    robotiq_85_gripper_server::srv::GripperOpen_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const robotiq_85_gripper_server::srv::GripperOpen_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<robotiq_85_gripper_server::srv::GripperOpen_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<robotiq_85_gripper_server::srv::GripperOpen_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      robotiq_85_gripper_server::srv::GripperOpen_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<robotiq_85_gripper_server::srv::GripperOpen_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      robotiq_85_gripper_server::srv::GripperOpen_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<robotiq_85_gripper_server::srv::GripperOpen_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<robotiq_85_gripper_server::srv::GripperOpen_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<robotiq_85_gripper_server::srv::GripperOpen_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__robotiq_85_gripper_server__srv__GripperOpen_Request
    std::shared_ptr<robotiq_85_gripper_server::srv::GripperOpen_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__robotiq_85_gripper_server__srv__GripperOpen_Request
    std::shared_ptr<robotiq_85_gripper_server::srv::GripperOpen_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GripperOpen_Request_ & other) const
  {
    if (this->order != other.order) {
      return false;
    }
    return true;
  }
  bool operator!=(const GripperOpen_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GripperOpen_Request_

// alias to use template instance with default allocator
using GripperOpen_Request =
  robotiq_85_gripper_server::srv::GripperOpen_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace robotiq_85_gripper_server


#ifndef _WIN32
# define DEPRECATED__robotiq_85_gripper_server__srv__GripperOpen_Response __attribute__((deprecated))
#else
# define DEPRECATED__robotiq_85_gripper_server__srv__GripperOpen_Response __declspec(deprecated)
#endif

namespace robotiq_85_gripper_server
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GripperOpen_Response_
{
  using Type = GripperOpen_Response_<ContainerAllocator>;

  explicit GripperOpen_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = false;
    }
  }

  explicit GripperOpen_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = false;
    }
  }

  // field types and members
  using _status_type =
    bool;
  _status_type status;

  // setters for named parameter idiom
  Type & set__status(
    const bool & _arg)
  {
    this->status = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    robotiq_85_gripper_server::srv::GripperOpen_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const robotiq_85_gripper_server::srv::GripperOpen_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<robotiq_85_gripper_server::srv::GripperOpen_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<robotiq_85_gripper_server::srv::GripperOpen_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      robotiq_85_gripper_server::srv::GripperOpen_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<robotiq_85_gripper_server::srv::GripperOpen_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      robotiq_85_gripper_server::srv::GripperOpen_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<robotiq_85_gripper_server::srv::GripperOpen_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<robotiq_85_gripper_server::srv::GripperOpen_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<robotiq_85_gripper_server::srv::GripperOpen_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__robotiq_85_gripper_server__srv__GripperOpen_Response
    std::shared_ptr<robotiq_85_gripper_server::srv::GripperOpen_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__robotiq_85_gripper_server__srv__GripperOpen_Response
    std::shared_ptr<robotiq_85_gripper_server::srv::GripperOpen_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GripperOpen_Response_ & other) const
  {
    if (this->status != other.status) {
      return false;
    }
    return true;
  }
  bool operator!=(const GripperOpen_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GripperOpen_Response_

// alias to use template instance with default allocator
using GripperOpen_Response =
  robotiq_85_gripper_server::srv::GripperOpen_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace robotiq_85_gripper_server


// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__robotiq_85_gripper_server__srv__GripperOpen_Event __attribute__((deprecated))
#else
# define DEPRECATED__robotiq_85_gripper_server__srv__GripperOpen_Event __declspec(deprecated)
#endif

namespace robotiq_85_gripper_server
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GripperOpen_Event_
{
  using Type = GripperOpen_Event_<ContainerAllocator>;

  explicit GripperOpen_Event_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_init)
  {
    (void)_init;
  }

  explicit GripperOpen_Event_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _info_type =
    service_msgs::msg::ServiceEventInfo_<ContainerAllocator>;
  _info_type info;
  using _request_type =
    rosidl_runtime_cpp::BoundedVector<robotiq_85_gripper_server::srv::GripperOpen_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<robotiq_85_gripper_server::srv::GripperOpen_Request_<ContainerAllocator>>>;
  _request_type request;
  using _response_type =
    rosidl_runtime_cpp::BoundedVector<robotiq_85_gripper_server::srv::GripperOpen_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<robotiq_85_gripper_server::srv::GripperOpen_Response_<ContainerAllocator>>>;
  _response_type response;

  // setters for named parameter idiom
  Type & set__info(
    const service_msgs::msg::ServiceEventInfo_<ContainerAllocator> & _arg)
  {
    this->info = _arg;
    return *this;
  }
  Type & set__request(
    const rosidl_runtime_cpp::BoundedVector<robotiq_85_gripper_server::srv::GripperOpen_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<robotiq_85_gripper_server::srv::GripperOpen_Request_<ContainerAllocator>>> & _arg)
  {
    this->request = _arg;
    return *this;
  }
  Type & set__response(
    const rosidl_runtime_cpp::BoundedVector<robotiq_85_gripper_server::srv::GripperOpen_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<robotiq_85_gripper_server::srv::GripperOpen_Response_<ContainerAllocator>>> & _arg)
  {
    this->response = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    robotiq_85_gripper_server::srv::GripperOpen_Event_<ContainerAllocator> *;
  using ConstRawPtr =
    const robotiq_85_gripper_server::srv::GripperOpen_Event_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<robotiq_85_gripper_server::srv::GripperOpen_Event_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<robotiq_85_gripper_server::srv::GripperOpen_Event_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      robotiq_85_gripper_server::srv::GripperOpen_Event_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<robotiq_85_gripper_server::srv::GripperOpen_Event_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      robotiq_85_gripper_server::srv::GripperOpen_Event_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<robotiq_85_gripper_server::srv::GripperOpen_Event_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<robotiq_85_gripper_server::srv::GripperOpen_Event_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<robotiq_85_gripper_server::srv::GripperOpen_Event_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__robotiq_85_gripper_server__srv__GripperOpen_Event
    std::shared_ptr<robotiq_85_gripper_server::srv::GripperOpen_Event_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__robotiq_85_gripper_server__srv__GripperOpen_Event
    std::shared_ptr<robotiq_85_gripper_server::srv::GripperOpen_Event_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GripperOpen_Event_ & other) const
  {
    if (this->info != other.info) {
      return false;
    }
    if (this->request != other.request) {
      return false;
    }
    if (this->response != other.response) {
      return false;
    }
    return true;
  }
  bool operator!=(const GripperOpen_Event_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GripperOpen_Event_

// alias to use template instance with default allocator
using GripperOpen_Event =
  robotiq_85_gripper_server::srv::GripperOpen_Event_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace robotiq_85_gripper_server

namespace robotiq_85_gripper_server
{

namespace srv
{

struct GripperOpen
{
  using Request = robotiq_85_gripper_server::srv::GripperOpen_Request;
  using Response = robotiq_85_gripper_server::srv::GripperOpen_Response;
  using Event = robotiq_85_gripper_server::srv::GripperOpen_Event;
};

}  // namespace srv

}  // namespace robotiq_85_gripper_server

#endif  // ROBOTIQ_85_GRIPPER_SERVER__SRV__DETAIL__GRIPPER_OPEN__STRUCT_HPP_
