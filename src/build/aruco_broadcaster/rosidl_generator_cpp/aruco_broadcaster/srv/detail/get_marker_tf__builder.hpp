// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from aruco_broadcaster:srv/GetMarkerTf.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "aruco_broadcaster/srv/get_marker_tf.hpp"


#ifndef ARUCO_BROADCASTER__SRV__DETAIL__GET_MARKER_TF__BUILDER_HPP_
#define ARUCO_BROADCASTER__SRV__DETAIL__GET_MARKER_TF__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "aruco_broadcaster/srv/detail/get_marker_tf__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace aruco_broadcaster
{

namespace srv
{

namespace builder
{

class Init_GetMarkerTf_Request_marker_id
{
public:
  explicit Init_GetMarkerTf_Request_marker_id(::aruco_broadcaster::srv::GetMarkerTf_Request & msg)
  : msg_(msg)
  {}
  ::aruco_broadcaster::srv::GetMarkerTf_Request marker_id(::aruco_broadcaster::srv::GetMarkerTf_Request::_marker_id_type arg)
  {
    msg_.marker_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::aruco_broadcaster::srv::GetMarkerTf_Request msg_;
};

class Init_GetMarkerTf_Request_parent
{
public:
  Init_GetMarkerTf_Request_parent()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GetMarkerTf_Request_marker_id parent(::aruco_broadcaster::srv::GetMarkerTf_Request::_parent_type arg)
  {
    msg_.parent = std::move(arg);
    return Init_GetMarkerTf_Request_marker_id(msg_);
  }

private:
  ::aruco_broadcaster::srv::GetMarkerTf_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::aruco_broadcaster::srv::GetMarkerTf_Request>()
{
  return aruco_broadcaster::srv::builder::Init_GetMarkerTf_Request_parent();
}

}  // namespace aruco_broadcaster


namespace aruco_broadcaster
{

namespace srv
{

namespace builder
{

class Init_GetMarkerTf_Response_ret
{
public:
  Init_GetMarkerTf_Response_ret()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::aruco_broadcaster::srv::GetMarkerTf_Response ret(::aruco_broadcaster::srv::GetMarkerTf_Response::_ret_type arg)
  {
    msg_.ret = std::move(arg);
    return std::move(msg_);
  }

private:
  ::aruco_broadcaster::srv::GetMarkerTf_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::aruco_broadcaster::srv::GetMarkerTf_Response>()
{
  return aruco_broadcaster::srv::builder::Init_GetMarkerTf_Response_ret();
}

}  // namespace aruco_broadcaster


namespace aruco_broadcaster
{

namespace srv
{

namespace builder
{

class Init_GetMarkerTf_Event_response
{
public:
  explicit Init_GetMarkerTf_Event_response(::aruco_broadcaster::srv::GetMarkerTf_Event & msg)
  : msg_(msg)
  {}
  ::aruco_broadcaster::srv::GetMarkerTf_Event response(::aruco_broadcaster::srv::GetMarkerTf_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::aruco_broadcaster::srv::GetMarkerTf_Event msg_;
};

class Init_GetMarkerTf_Event_request
{
public:
  explicit Init_GetMarkerTf_Event_request(::aruco_broadcaster::srv::GetMarkerTf_Event & msg)
  : msg_(msg)
  {}
  Init_GetMarkerTf_Event_response request(::aruco_broadcaster::srv::GetMarkerTf_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_GetMarkerTf_Event_response(msg_);
  }

private:
  ::aruco_broadcaster::srv::GetMarkerTf_Event msg_;
};

class Init_GetMarkerTf_Event_info
{
public:
  Init_GetMarkerTf_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GetMarkerTf_Event_request info(::aruco_broadcaster::srv::GetMarkerTf_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_GetMarkerTf_Event_request(msg_);
  }

private:
  ::aruco_broadcaster::srv::GetMarkerTf_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::aruco_broadcaster::srv::GetMarkerTf_Event>()
{
  return aruco_broadcaster::srv::builder::Init_GetMarkerTf_Event_info();
}

}  // namespace aruco_broadcaster

#endif  // ARUCO_BROADCASTER__SRV__DETAIL__GET_MARKER_TF__BUILDER_HPP_
