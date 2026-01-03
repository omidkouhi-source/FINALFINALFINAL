// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from chesslab_setup2_interfaces:srv/AttachObj.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "chesslab_setup2_interfaces/srv/attach_obj.hpp"


#ifndef CHESSLAB_SETUP2_INTERFACES__SRV__DETAIL__ATTACH_OBJ__BUILDER_HPP_
#define CHESSLAB_SETUP2_INTERFACES__SRV__DETAIL__ATTACH_OBJ__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "chesslab_setup2_interfaces/srv/detail/attach_obj__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace chesslab_setup2_interfaces
{

namespace srv
{

namespace builder
{

class Init_AttachObj_Request_objarucoid
{
public:
  Init_AttachObj_Request_objarucoid()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::chesslab_setup2_interfaces::srv::AttachObj_Request objarucoid(::chesslab_setup2_interfaces::srv::AttachObj_Request::_objarucoid_type arg)
  {
    msg_.objarucoid = std::move(arg);
    return std::move(msg_);
  }

private:
  ::chesslab_setup2_interfaces::srv::AttachObj_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::chesslab_setup2_interfaces::srv::AttachObj_Request>()
{
  return chesslab_setup2_interfaces::srv::builder::Init_AttachObj_Request_objarucoid();
}

}  // namespace chesslab_setup2_interfaces


namespace chesslab_setup2_interfaces
{

namespace srv
{


}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::chesslab_setup2_interfaces::srv::AttachObj_Response>()
{
  return ::chesslab_setup2_interfaces::srv::AttachObj_Response(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace chesslab_setup2_interfaces


namespace chesslab_setup2_interfaces
{

namespace srv
{

namespace builder
{

class Init_AttachObj_Event_response
{
public:
  explicit Init_AttachObj_Event_response(::chesslab_setup2_interfaces::srv::AttachObj_Event & msg)
  : msg_(msg)
  {}
  ::chesslab_setup2_interfaces::srv::AttachObj_Event response(::chesslab_setup2_interfaces::srv::AttachObj_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::chesslab_setup2_interfaces::srv::AttachObj_Event msg_;
};

class Init_AttachObj_Event_request
{
public:
  explicit Init_AttachObj_Event_request(::chesslab_setup2_interfaces::srv::AttachObj_Event & msg)
  : msg_(msg)
  {}
  Init_AttachObj_Event_response request(::chesslab_setup2_interfaces::srv::AttachObj_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_AttachObj_Event_response(msg_);
  }

private:
  ::chesslab_setup2_interfaces::srv::AttachObj_Event msg_;
};

class Init_AttachObj_Event_info
{
public:
  Init_AttachObj_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AttachObj_Event_request info(::chesslab_setup2_interfaces::srv::AttachObj_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_AttachObj_Event_request(msg_);
  }

private:
  ::chesslab_setup2_interfaces::srv::AttachObj_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::chesslab_setup2_interfaces::srv::AttachObj_Event>()
{
  return chesslab_setup2_interfaces::srv::builder::Init_AttachObj_Event_info();
}

}  // namespace chesslab_setup2_interfaces

#endif  // CHESSLAB_SETUP2_INTERFACES__SRV__DETAIL__ATTACH_OBJ__BUILDER_HPP_
