// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from chesslab_setup2_interfaces:srv/SetObjPose.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "chesslab_setup2_interfaces/srv/set_obj_pose.hpp"


#ifndef CHESSLAB_SETUP2_INTERFACES__SRV__DETAIL__SET_OBJ_POSE__BUILDER_HPP_
#define CHESSLAB_SETUP2_INTERFACES__SRV__DETAIL__SET_OBJ_POSE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "chesslab_setup2_interfaces/srv/detail/set_obj_pose__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace chesslab_setup2_interfaces
{

namespace srv
{

namespace builder
{

class Init_SetObjPose_Request_p
{
public:
  explicit Init_SetObjPose_Request_p(::chesslab_setup2_interfaces::srv::SetObjPose_Request & msg)
  : msg_(msg)
  {}
  ::chesslab_setup2_interfaces::srv::SetObjPose_Request p(::chesslab_setup2_interfaces::srv::SetObjPose_Request::_p_type arg)
  {
    msg_.p = std::move(arg);
    return std::move(msg_);
  }

private:
  ::chesslab_setup2_interfaces::srv::SetObjPose_Request msg_;
};

class Init_SetObjPose_Request_objid
{
public:
  Init_SetObjPose_Request_objid()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetObjPose_Request_p objid(::chesslab_setup2_interfaces::srv::SetObjPose_Request::_objid_type arg)
  {
    msg_.objid = std::move(arg);
    return Init_SetObjPose_Request_p(msg_);
  }

private:
  ::chesslab_setup2_interfaces::srv::SetObjPose_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::chesslab_setup2_interfaces::srv::SetObjPose_Request>()
{
  return chesslab_setup2_interfaces::srv::builder::Init_SetObjPose_Request_objid();
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
auto build<::chesslab_setup2_interfaces::srv::SetObjPose_Response>()
{
  return ::chesslab_setup2_interfaces::srv::SetObjPose_Response(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace chesslab_setup2_interfaces


namespace chesslab_setup2_interfaces
{

namespace srv
{

namespace builder
{

class Init_SetObjPose_Event_response
{
public:
  explicit Init_SetObjPose_Event_response(::chesslab_setup2_interfaces::srv::SetObjPose_Event & msg)
  : msg_(msg)
  {}
  ::chesslab_setup2_interfaces::srv::SetObjPose_Event response(::chesslab_setup2_interfaces::srv::SetObjPose_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::chesslab_setup2_interfaces::srv::SetObjPose_Event msg_;
};

class Init_SetObjPose_Event_request
{
public:
  explicit Init_SetObjPose_Event_request(::chesslab_setup2_interfaces::srv::SetObjPose_Event & msg)
  : msg_(msg)
  {}
  Init_SetObjPose_Event_response request(::chesslab_setup2_interfaces::srv::SetObjPose_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_SetObjPose_Event_response(msg_);
  }

private:
  ::chesslab_setup2_interfaces::srv::SetObjPose_Event msg_;
};

class Init_SetObjPose_Event_info
{
public:
  Init_SetObjPose_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetObjPose_Event_request info(::chesslab_setup2_interfaces::srv::SetObjPose_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_SetObjPose_Event_request(msg_);
  }

private:
  ::chesslab_setup2_interfaces::srv::SetObjPose_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::chesslab_setup2_interfaces::srv::SetObjPose_Event>()
{
  return chesslab_setup2_interfaces::srv::builder::Init_SetObjPose_Event_info();
}

}  // namespace chesslab_setup2_interfaces

#endif  // CHESSLAB_SETUP2_INTERFACES__SRV__DETAIL__SET_OBJ_POSE__BUILDER_HPP_
