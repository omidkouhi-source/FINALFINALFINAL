// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from tablesens:srv/ConfigureFromService.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "tablesens/srv/configure_from_service.hpp"


#ifndef TABLESENS__SRV__DETAIL__CONFIGURE_FROM_SERVICE__BUILDER_HPP_
#define TABLESENS__SRV__DETAIL__CONFIGURE_FROM_SERVICE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "tablesens/srv/detail/configure_from_service__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace tablesens
{

namespace srv
{

namespace builder
{

class Init_ConfigureFromService_Request_fix_list
{
public:
  Init_ConfigureFromService_Request_fix_list()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::tablesens::srv::ConfigureFromService_Request fix_list(::tablesens::srv::ConfigureFromService_Request::_fix_list_type arg)
  {
    msg_.fix_list = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tablesens::srv::ConfigureFromService_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::tablesens::srv::ConfigureFromService_Request>()
{
  return tablesens::srv::builder::Init_ConfigureFromService_Request_fix_list();
}

}  // namespace tablesens


namespace tablesens
{

namespace srv
{

namespace builder
{

class Init_ConfigureFromService_Response_success
{
public:
  Init_ConfigureFromService_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::tablesens::srv::ConfigureFromService_Response success(::tablesens::srv::ConfigureFromService_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tablesens::srv::ConfigureFromService_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::tablesens::srv::ConfigureFromService_Response>()
{
  return tablesens::srv::builder::Init_ConfigureFromService_Response_success();
}

}  // namespace tablesens


namespace tablesens
{

namespace srv
{

namespace builder
{

class Init_ConfigureFromService_Event_response
{
public:
  explicit Init_ConfigureFromService_Event_response(::tablesens::srv::ConfigureFromService_Event & msg)
  : msg_(msg)
  {}
  ::tablesens::srv::ConfigureFromService_Event response(::tablesens::srv::ConfigureFromService_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tablesens::srv::ConfigureFromService_Event msg_;
};

class Init_ConfigureFromService_Event_request
{
public:
  explicit Init_ConfigureFromService_Event_request(::tablesens::srv::ConfigureFromService_Event & msg)
  : msg_(msg)
  {}
  Init_ConfigureFromService_Event_response request(::tablesens::srv::ConfigureFromService_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_ConfigureFromService_Event_response(msg_);
  }

private:
  ::tablesens::srv::ConfigureFromService_Event msg_;
};

class Init_ConfigureFromService_Event_info
{
public:
  Init_ConfigureFromService_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ConfigureFromService_Event_request info(::tablesens::srv::ConfigureFromService_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_ConfigureFromService_Event_request(msg_);
  }

private:
  ::tablesens::srv::ConfigureFromService_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::tablesens::srv::ConfigureFromService_Event>()
{
  return tablesens::srv::builder::Init_ConfigureFromService_Event_info();
}

}  // namespace tablesens

#endif  // TABLESENS__SRV__DETAIL__CONFIGURE_FROM_SERVICE__BUILDER_HPP_
