// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from action_module:srv/MovePiece.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "action_module/srv/move_piece.hpp"


#ifndef ACTION_MODULE__SRV__DETAIL__MOVE_PIECE__STRUCT_HPP_
#define ACTION_MODULE__SRV__DETAIL__MOVE_PIECE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__action_module__srv__MovePiece_Request __attribute__((deprecated))
#else
# define DEPRECATED__action_module__srv__MovePiece_Request __declspec(deprecated)
#endif

namespace action_module
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct MovePiece_Request_
{
  using Type = MovePiece_Request_<ContainerAllocator>;

  explicit MovePiece_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->aruco_id = 0l;
      this->target_square = "";
    }
  }

  explicit MovePiece_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : target_square(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->aruco_id = 0l;
      this->target_square = "";
    }
  }

  // field types and members
  using _aruco_id_type =
    int32_t;
  _aruco_id_type aruco_id;
  using _target_square_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _target_square_type target_square;

  // setters for named parameter idiom
  Type & set__aruco_id(
    const int32_t & _arg)
  {
    this->aruco_id = _arg;
    return *this;
  }
  Type & set__target_square(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->target_square = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    action_module::srv::MovePiece_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const action_module::srv::MovePiece_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<action_module::srv::MovePiece_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<action_module::srv::MovePiece_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      action_module::srv::MovePiece_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<action_module::srv::MovePiece_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      action_module::srv::MovePiece_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<action_module::srv::MovePiece_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<action_module::srv::MovePiece_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<action_module::srv::MovePiece_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__action_module__srv__MovePiece_Request
    std::shared_ptr<action_module::srv::MovePiece_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__action_module__srv__MovePiece_Request
    std::shared_ptr<action_module::srv::MovePiece_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MovePiece_Request_ & other) const
  {
    if (this->aruco_id != other.aruco_id) {
      return false;
    }
    if (this->target_square != other.target_square) {
      return false;
    }
    return true;
  }
  bool operator!=(const MovePiece_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MovePiece_Request_

// alias to use template instance with default allocator
using MovePiece_Request =
  action_module::srv::MovePiece_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace action_module


#ifndef _WIN32
# define DEPRECATED__action_module__srv__MovePiece_Response __attribute__((deprecated))
#else
# define DEPRECATED__action_module__srv__MovePiece_Response __declspec(deprecated)
#endif

namespace action_module
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct MovePiece_Response_
{
  using Type = MovePiece_Response_<ContainerAllocator>;

  explicit MovePiece_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->message = "";
    }
  }

  explicit MovePiece_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : message(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->message = "";
    }
  }

  // field types and members
  using _success_type =
    bool;
  _success_type success;
  using _message_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _message_type message;

  // setters for named parameter idiom
  Type & set__success(
    const bool & _arg)
  {
    this->success = _arg;
    return *this;
  }
  Type & set__message(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->message = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    action_module::srv::MovePiece_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const action_module::srv::MovePiece_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<action_module::srv::MovePiece_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<action_module::srv::MovePiece_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      action_module::srv::MovePiece_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<action_module::srv::MovePiece_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      action_module::srv::MovePiece_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<action_module::srv::MovePiece_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<action_module::srv::MovePiece_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<action_module::srv::MovePiece_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__action_module__srv__MovePiece_Response
    std::shared_ptr<action_module::srv::MovePiece_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__action_module__srv__MovePiece_Response
    std::shared_ptr<action_module::srv::MovePiece_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MovePiece_Response_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    if (this->message != other.message) {
      return false;
    }
    return true;
  }
  bool operator!=(const MovePiece_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MovePiece_Response_

// alias to use template instance with default allocator
using MovePiece_Response =
  action_module::srv::MovePiece_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace action_module


// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__action_module__srv__MovePiece_Event __attribute__((deprecated))
#else
# define DEPRECATED__action_module__srv__MovePiece_Event __declspec(deprecated)
#endif

namespace action_module
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct MovePiece_Event_
{
  using Type = MovePiece_Event_<ContainerAllocator>;

  explicit MovePiece_Event_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_init)
  {
    (void)_init;
  }

  explicit MovePiece_Event_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _info_type =
    service_msgs::msg::ServiceEventInfo_<ContainerAllocator>;
  _info_type info;
  using _request_type =
    rosidl_runtime_cpp::BoundedVector<action_module::srv::MovePiece_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<action_module::srv::MovePiece_Request_<ContainerAllocator>>>;
  _request_type request;
  using _response_type =
    rosidl_runtime_cpp::BoundedVector<action_module::srv::MovePiece_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<action_module::srv::MovePiece_Response_<ContainerAllocator>>>;
  _response_type response;

  // setters for named parameter idiom
  Type & set__info(
    const service_msgs::msg::ServiceEventInfo_<ContainerAllocator> & _arg)
  {
    this->info = _arg;
    return *this;
  }
  Type & set__request(
    const rosidl_runtime_cpp::BoundedVector<action_module::srv::MovePiece_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<action_module::srv::MovePiece_Request_<ContainerAllocator>>> & _arg)
  {
    this->request = _arg;
    return *this;
  }
  Type & set__response(
    const rosidl_runtime_cpp::BoundedVector<action_module::srv::MovePiece_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<action_module::srv::MovePiece_Response_<ContainerAllocator>>> & _arg)
  {
    this->response = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    action_module::srv::MovePiece_Event_<ContainerAllocator> *;
  using ConstRawPtr =
    const action_module::srv::MovePiece_Event_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<action_module::srv::MovePiece_Event_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<action_module::srv::MovePiece_Event_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      action_module::srv::MovePiece_Event_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<action_module::srv::MovePiece_Event_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      action_module::srv::MovePiece_Event_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<action_module::srv::MovePiece_Event_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<action_module::srv::MovePiece_Event_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<action_module::srv::MovePiece_Event_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__action_module__srv__MovePiece_Event
    std::shared_ptr<action_module::srv::MovePiece_Event_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__action_module__srv__MovePiece_Event
    std::shared_ptr<action_module::srv::MovePiece_Event_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MovePiece_Event_ & other) const
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
  bool operator!=(const MovePiece_Event_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MovePiece_Event_

// alias to use template instance with default allocator
using MovePiece_Event =
  action_module::srv::MovePiece_Event_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace action_module

namespace action_module
{

namespace srv
{

struct MovePiece
{
  using Request = action_module::srv::MovePiece_Request;
  using Response = action_module::srv::MovePiece_Response;
  using Event = action_module::srv::MovePiece_Event;
};

}  // namespace srv

}  // namespace action_module

#endif  // ACTION_MODULE__SRV__DETAIL__MOVE_PIECE__STRUCT_HPP_
