// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from chesslab_setup2_interfaces:srv/SetRobConf.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "chesslab_setup2_interfaces/srv/set_rob_conf.hpp"


#ifndef CHESSLAB_SETUP2_INTERFACES__SRV__DETAIL__SET_ROB_CONF__BUILDER_HPP_
#define CHESSLAB_SETUP2_INTERFACES__SRV__DETAIL__SET_ROB_CONF__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "chesslab_setup2_interfaces/srv/detail/set_rob_conf__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace chesslab_setup2_interfaces
{

namespace srv
{

namespace builder
{

class Init_SetRobConf_Request_conf
{
public:
  Init_SetRobConf_Request_conf()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::chesslab_setup2_interfaces::srv::SetRobConf_Request conf(::chesslab_setup2_interfaces::srv::SetRobConf_Request::_conf_type arg)
  {
    msg_.conf = std::move(arg);
    return std::move(msg_);
  }

private:
  ::chesslab_setup2_interfaces::srv::SetRobConf_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::chesslab_setup2_interfaces::srv::SetRobConf_Request>()
{
  return chesslab_setup2_interfaces::srv::builder::Init_SetRobConf_Request_conf();
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
auto build<::chesslab_setup2_interfaces::srv::SetRobConf_Response>()
{
  return ::chesslab_setup2_interfaces::srv::SetRobConf_Response(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace chesslab_setup2_interfaces


namespace chesslab_setup2_interfaces
{

namespace srv
{

namespace builder
{

class Init_SetRobConf_Event_response
{
public:
  explicit Init_SetRobConf_Event_response(::chesslab_setup2_interfaces::srv::SetRobConf_Event & msg)
  : msg_(msg)
  {}
  ::chesslab_setup2_interfaces::srv::SetRobConf_Event response(::chesslab_setup2_interfaces::srv::SetRobConf_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::chesslab_setup2_interfaces::srv::SetRobConf_Event msg_;
};

class Init_SetRobConf_Event_request
{
public:
  explicit Init_SetRobConf_Event_request(::chesslab_setup2_interfaces::srv::SetRobConf_Event & msg)
  : msg_(msg)
  {}
  Init_SetRobConf_Event_response request(::chesslab_setup2_interfaces::srv::SetRobConf_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_SetRobConf_Event_response(msg_);
  }

private:
  ::chesslab_setup2_interfaces::srv::SetRobConf_Event msg_;
};

class Init_SetRobConf_Event_info
{
public:
  Init_SetRobConf_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetRobConf_Event_request info(::chesslab_setup2_interfaces::srv::SetRobConf_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_SetRobConf_Event_request(msg_);
  }

private:
  ::chesslab_setup2_interfaces::srv::SetRobConf_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::chesslab_setup2_interfaces::srv::SetRobConf_Event>()
{
  return chesslab_setup2_interfaces::srv::builder::Init_SetRobConf_Event_info();
}

}  // namespace chesslab_setup2_interfaces

#endif  // CHESSLAB_SETUP2_INTERFACES__SRV__DETAIL__SET_ROB_CONF__BUILDER_HPP_
