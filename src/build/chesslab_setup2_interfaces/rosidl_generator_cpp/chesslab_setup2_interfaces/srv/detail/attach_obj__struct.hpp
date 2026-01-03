// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from chesslab_setup2_interfaces:srv/AttachObj.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "chesslab_setup2_interfaces/srv/attach_obj.hpp"


#ifndef CHESSLAB_SETUP2_INTERFACES__SRV__DETAIL__ATTACH_OBJ__STRUCT_HPP_
#define CHESSLAB_SETUP2_INTERFACES__SRV__DETAIL__ATTACH_OBJ__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__chesslab_setup2_interfaces__srv__AttachObj_Request __attribute__((deprecated))
#else
# define DEPRECATED__chesslab_setup2_interfaces__srv__AttachObj_Request __declspec(deprecated)
#endif

namespace chesslab_setup2_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct AttachObj_Request_
{
  using Type = AttachObj_Request_<ContainerAllocator>;

  explicit AttachObj_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->objarucoid = 0;
    }
  }

  explicit AttachObj_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->objarucoid = 0;
    }
  }

  // field types and members
  using _objarucoid_type =
    int16_t;
  _objarucoid_type objarucoid;

  // setters for named parameter idiom
  Type & set__objarucoid(
    const int16_t & _arg)
  {
    this->objarucoid = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    chesslab_setup2_interfaces::srv::AttachObj_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const chesslab_setup2_interfaces::srv::AttachObj_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<chesslab_setup2_interfaces::srv::AttachObj_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<chesslab_setup2_interfaces::srv::AttachObj_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      chesslab_setup2_interfaces::srv::AttachObj_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<chesslab_setup2_interfaces::srv::AttachObj_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      chesslab_setup2_interfaces::srv::AttachObj_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<chesslab_setup2_interfaces::srv::AttachObj_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<chesslab_setup2_interfaces::srv::AttachObj_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<chesslab_setup2_interfaces::srv::AttachObj_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__chesslab_setup2_interfaces__srv__AttachObj_Request
    std::shared_ptr<chesslab_setup2_interfaces::srv::AttachObj_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__chesslab_setup2_interfaces__srv__AttachObj_Request
    std::shared_ptr<chesslab_setup2_interfaces::srv::AttachObj_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const AttachObj_Request_ & other) const
  {
    if (this->objarucoid != other.objarucoid) {
      return false;
    }
    return true;
  }
  bool operator!=(const AttachObj_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct AttachObj_Request_

// alias to use template instance with default allocator
using AttachObj_Request =
  chesslab_setup2_interfaces::srv::AttachObj_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace chesslab_setup2_interfaces


#ifndef _WIN32
# define DEPRECATED__chesslab_setup2_interfaces__srv__AttachObj_Response __attribute__((deprecated))
#else
# define DEPRECATED__chesslab_setup2_interfaces__srv__AttachObj_Response __declspec(deprecated)
#endif

namespace chesslab_setup2_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct AttachObj_Response_
{
  using Type = AttachObj_Response_<ContainerAllocator>;

  explicit AttachObj_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  explicit AttachObj_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  // field types and members
  using _structure_needs_at_least_one_member_type =
    uint8_t;
  _structure_needs_at_least_one_member_type structure_needs_at_least_one_member;


  // constant declarations

  // pointer types
  using RawPtr =
    chesslab_setup2_interfaces::srv::AttachObj_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const chesslab_setup2_interfaces::srv::AttachObj_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<chesslab_setup2_interfaces::srv::AttachObj_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<chesslab_setup2_interfaces::srv::AttachObj_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      chesslab_setup2_interfaces::srv::AttachObj_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<chesslab_setup2_interfaces::srv::AttachObj_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      chesslab_setup2_interfaces::srv::AttachObj_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<chesslab_setup2_interfaces::srv::AttachObj_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<chesslab_setup2_interfaces::srv::AttachObj_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<chesslab_setup2_interfaces::srv::AttachObj_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__chesslab_setup2_interfaces__srv__AttachObj_Response
    std::shared_ptr<chesslab_setup2_interfaces::srv::AttachObj_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__chesslab_setup2_interfaces__srv__AttachObj_Response
    std::shared_ptr<chesslab_setup2_interfaces::srv::AttachObj_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const AttachObj_Response_ & other) const
  {
    if (this->structure_needs_at_least_one_member != other.structure_needs_at_least_one_member) {
      return false;
    }
    return true;
  }
  bool operator!=(const AttachObj_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct AttachObj_Response_

// alias to use template instance with default allocator
using AttachObj_Response =
  chesslab_setup2_interfaces::srv::AttachObj_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace chesslab_setup2_interfaces


// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__chesslab_setup2_interfaces__srv__AttachObj_Event __attribute__((deprecated))
#else
# define DEPRECATED__chesslab_setup2_interfaces__srv__AttachObj_Event __declspec(deprecated)
#endif

namespace chesslab_setup2_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct AttachObj_Event_
{
  using Type = AttachObj_Event_<ContainerAllocator>;

  explicit AttachObj_Event_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_init)
  {
    (void)_init;
  }

  explicit AttachObj_Event_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _info_type =
    service_msgs::msg::ServiceEventInfo_<ContainerAllocator>;
  _info_type info;
  using _request_type =
    rosidl_runtime_cpp::BoundedVector<chesslab_setup2_interfaces::srv::AttachObj_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<chesslab_setup2_interfaces::srv::AttachObj_Request_<ContainerAllocator>>>;
  _request_type request;
  using _response_type =
    rosidl_runtime_cpp::BoundedVector<chesslab_setup2_interfaces::srv::AttachObj_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<chesslab_setup2_interfaces::srv::AttachObj_Response_<ContainerAllocator>>>;
  _response_type response;

  // setters for named parameter idiom
  Type & set__info(
    const service_msgs::msg::ServiceEventInfo_<ContainerAllocator> & _arg)
  {
    this->info = _arg;
    return *this;
  }
  Type & set__request(
    const rosidl_runtime_cpp::BoundedVector<chesslab_setup2_interfaces::srv::AttachObj_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<chesslab_setup2_interfaces::srv::AttachObj_Request_<ContainerAllocator>>> & _arg)
  {
    this->request = _arg;
    return *this;
  }
  Type & set__response(
    const rosidl_runtime_cpp::BoundedVector<chesslab_setup2_interfaces::srv::AttachObj_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<chesslab_setup2_interfaces::srv::AttachObj_Response_<ContainerAllocator>>> & _arg)
  {
    this->response = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    chesslab_setup2_interfaces::srv::AttachObj_Event_<ContainerAllocator> *;
  using ConstRawPtr =
    const chesslab_setup2_interfaces::srv::AttachObj_Event_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<chesslab_setup2_interfaces::srv::AttachObj_Event_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<chesslab_setup2_interfaces::srv::AttachObj_Event_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      chesslab_setup2_interfaces::srv::AttachObj_Event_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<chesslab_setup2_interfaces::srv::AttachObj_Event_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      chesslab_setup2_interfaces::srv::AttachObj_Event_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<chesslab_setup2_interfaces::srv::AttachObj_Event_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<chesslab_setup2_interfaces::srv::AttachObj_Event_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<chesslab_setup2_interfaces::srv::AttachObj_Event_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__chesslab_setup2_interfaces__srv__AttachObj_Event
    std::shared_ptr<chesslab_setup2_interfaces::srv::AttachObj_Event_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__chesslab_setup2_interfaces__srv__AttachObj_Event
    std::shared_ptr<chesslab_setup2_interfaces::srv::AttachObj_Event_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const AttachObj_Event_ & other) const
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
  bool operator!=(const AttachObj_Event_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct AttachObj_Event_

// alias to use template instance with default allocator
using AttachObj_Event =
  chesslab_setup2_interfaces::srv::AttachObj_Event_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace chesslab_setup2_interfaces

namespace chesslab_setup2_interfaces
{

namespace srv
{

struct AttachObj
{
  using Request = chesslab_setup2_interfaces::srv::AttachObj_Request;
  using Response = chesslab_setup2_interfaces::srv::AttachObj_Response;
  using Event = chesslab_setup2_interfaces::srv::AttachObj_Event;
};

}  // namespace srv

}  // namespace chesslab_setup2_interfaces

#endif  // CHESSLAB_SETUP2_INTERFACES__SRV__DETAIL__ATTACH_OBJ__STRUCT_HPP_
