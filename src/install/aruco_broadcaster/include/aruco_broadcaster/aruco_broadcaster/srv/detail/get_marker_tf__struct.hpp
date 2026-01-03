// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from aruco_broadcaster:srv/GetMarkerTf.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "aruco_broadcaster/srv/get_marker_tf.hpp"


#ifndef ARUCO_BROADCASTER__SRV__DETAIL__GET_MARKER_TF__STRUCT_HPP_
#define ARUCO_BROADCASTER__SRV__DETAIL__GET_MARKER_TF__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__aruco_broadcaster__srv__GetMarkerTf_Request __attribute__((deprecated))
#else
# define DEPRECATED__aruco_broadcaster__srv__GetMarkerTf_Request __declspec(deprecated)
#endif

namespace aruco_broadcaster
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GetMarkerTf_Request_
{
  using Type = GetMarkerTf_Request_<ContainerAllocator>;

  explicit GetMarkerTf_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->parent = "";
      this->marker_id = "";
    }
  }

  explicit GetMarkerTf_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : parent(_alloc),
    marker_id(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->parent = "";
      this->marker_id = "";
    }
  }

  // field types and members
  using _parent_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _parent_type parent;
  using _marker_id_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _marker_id_type marker_id;

  // setters for named parameter idiom
  Type & set__parent(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->parent = _arg;
    return *this;
  }
  Type & set__marker_id(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->marker_id = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    aruco_broadcaster::srv::GetMarkerTf_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const aruco_broadcaster::srv::GetMarkerTf_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<aruco_broadcaster::srv::GetMarkerTf_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<aruco_broadcaster::srv::GetMarkerTf_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      aruco_broadcaster::srv::GetMarkerTf_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<aruco_broadcaster::srv::GetMarkerTf_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      aruco_broadcaster::srv::GetMarkerTf_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<aruco_broadcaster::srv::GetMarkerTf_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<aruco_broadcaster::srv::GetMarkerTf_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<aruco_broadcaster::srv::GetMarkerTf_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__aruco_broadcaster__srv__GetMarkerTf_Request
    std::shared_ptr<aruco_broadcaster::srv::GetMarkerTf_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__aruco_broadcaster__srv__GetMarkerTf_Request
    std::shared_ptr<aruco_broadcaster::srv::GetMarkerTf_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetMarkerTf_Request_ & other) const
  {
    if (this->parent != other.parent) {
      return false;
    }
    if (this->marker_id != other.marker_id) {
      return false;
    }
    return true;
  }
  bool operator!=(const GetMarkerTf_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetMarkerTf_Request_

// alias to use template instance with default allocator
using GetMarkerTf_Request =
  aruco_broadcaster::srv::GetMarkerTf_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace aruco_broadcaster


// Include directives for member types
// Member 'ret'
#include "geometry_msgs/msg/detail/transform_stamped__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__aruco_broadcaster__srv__GetMarkerTf_Response __attribute__((deprecated))
#else
# define DEPRECATED__aruco_broadcaster__srv__GetMarkerTf_Response __declspec(deprecated)
#endif

namespace aruco_broadcaster
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GetMarkerTf_Response_
{
  using Type = GetMarkerTf_Response_<ContainerAllocator>;

  explicit GetMarkerTf_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : ret(_init)
  {
    (void)_init;
  }

  explicit GetMarkerTf_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : ret(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _ret_type =
    geometry_msgs::msg::TransformStamped_<ContainerAllocator>;
  _ret_type ret;

  // setters for named parameter idiom
  Type & set__ret(
    const geometry_msgs::msg::TransformStamped_<ContainerAllocator> & _arg)
  {
    this->ret = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    aruco_broadcaster::srv::GetMarkerTf_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const aruco_broadcaster::srv::GetMarkerTf_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<aruco_broadcaster::srv::GetMarkerTf_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<aruco_broadcaster::srv::GetMarkerTf_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      aruco_broadcaster::srv::GetMarkerTf_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<aruco_broadcaster::srv::GetMarkerTf_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      aruco_broadcaster::srv::GetMarkerTf_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<aruco_broadcaster::srv::GetMarkerTf_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<aruco_broadcaster::srv::GetMarkerTf_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<aruco_broadcaster::srv::GetMarkerTf_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__aruco_broadcaster__srv__GetMarkerTf_Response
    std::shared_ptr<aruco_broadcaster::srv::GetMarkerTf_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__aruco_broadcaster__srv__GetMarkerTf_Response
    std::shared_ptr<aruco_broadcaster::srv::GetMarkerTf_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetMarkerTf_Response_ & other) const
  {
    if (this->ret != other.ret) {
      return false;
    }
    return true;
  }
  bool operator!=(const GetMarkerTf_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetMarkerTf_Response_

// alias to use template instance with default allocator
using GetMarkerTf_Response =
  aruco_broadcaster::srv::GetMarkerTf_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace aruco_broadcaster


// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__aruco_broadcaster__srv__GetMarkerTf_Event __attribute__((deprecated))
#else
# define DEPRECATED__aruco_broadcaster__srv__GetMarkerTf_Event __declspec(deprecated)
#endif

namespace aruco_broadcaster
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GetMarkerTf_Event_
{
  using Type = GetMarkerTf_Event_<ContainerAllocator>;

  explicit GetMarkerTf_Event_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_init)
  {
    (void)_init;
  }

  explicit GetMarkerTf_Event_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _info_type =
    service_msgs::msg::ServiceEventInfo_<ContainerAllocator>;
  _info_type info;
  using _request_type =
    rosidl_runtime_cpp::BoundedVector<aruco_broadcaster::srv::GetMarkerTf_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<aruco_broadcaster::srv::GetMarkerTf_Request_<ContainerAllocator>>>;
  _request_type request;
  using _response_type =
    rosidl_runtime_cpp::BoundedVector<aruco_broadcaster::srv::GetMarkerTf_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<aruco_broadcaster::srv::GetMarkerTf_Response_<ContainerAllocator>>>;
  _response_type response;

  // setters for named parameter idiom
  Type & set__info(
    const service_msgs::msg::ServiceEventInfo_<ContainerAllocator> & _arg)
  {
    this->info = _arg;
    return *this;
  }
  Type & set__request(
    const rosidl_runtime_cpp::BoundedVector<aruco_broadcaster::srv::GetMarkerTf_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<aruco_broadcaster::srv::GetMarkerTf_Request_<ContainerAllocator>>> & _arg)
  {
    this->request = _arg;
    return *this;
  }
  Type & set__response(
    const rosidl_runtime_cpp::BoundedVector<aruco_broadcaster::srv::GetMarkerTf_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<aruco_broadcaster::srv::GetMarkerTf_Response_<ContainerAllocator>>> & _arg)
  {
    this->response = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    aruco_broadcaster::srv::GetMarkerTf_Event_<ContainerAllocator> *;
  using ConstRawPtr =
    const aruco_broadcaster::srv::GetMarkerTf_Event_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<aruco_broadcaster::srv::GetMarkerTf_Event_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<aruco_broadcaster::srv::GetMarkerTf_Event_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      aruco_broadcaster::srv::GetMarkerTf_Event_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<aruco_broadcaster::srv::GetMarkerTf_Event_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      aruco_broadcaster::srv::GetMarkerTf_Event_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<aruco_broadcaster::srv::GetMarkerTf_Event_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<aruco_broadcaster::srv::GetMarkerTf_Event_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<aruco_broadcaster::srv::GetMarkerTf_Event_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__aruco_broadcaster__srv__GetMarkerTf_Event
    std::shared_ptr<aruco_broadcaster::srv::GetMarkerTf_Event_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__aruco_broadcaster__srv__GetMarkerTf_Event
    std::shared_ptr<aruco_broadcaster::srv::GetMarkerTf_Event_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetMarkerTf_Event_ & other) const
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
  bool operator!=(const GetMarkerTf_Event_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetMarkerTf_Event_

// alias to use template instance with default allocator
using GetMarkerTf_Event =
  aruco_broadcaster::srv::GetMarkerTf_Event_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace aruco_broadcaster

namespace aruco_broadcaster
{

namespace srv
{

struct GetMarkerTf
{
  using Request = aruco_broadcaster::srv::GetMarkerTf_Request;
  using Response = aruco_broadcaster::srv::GetMarkerTf_Response;
  using Event = aruco_broadcaster::srv::GetMarkerTf_Event;
};

}  // namespace srv

}  // namespace aruco_broadcaster

#endif  // ARUCO_BROADCASTER__SRV__DETAIL__GET_MARKER_TF__STRUCT_HPP_
