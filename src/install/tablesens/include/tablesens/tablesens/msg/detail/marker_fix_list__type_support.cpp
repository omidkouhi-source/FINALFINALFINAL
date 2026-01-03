// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from tablesens:msg/MarkerFixList.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "tablesens/msg/detail/marker_fix_list__functions.h"
#include "tablesens/msg/detail/marker_fix_list__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace tablesens
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void MarkerFixList_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) tablesens::msg::MarkerFixList(_init);
}

void MarkerFixList_fini_function(void * message_memory)
{
  auto typed_message = static_cast<tablesens::msg::MarkerFixList *>(message_memory);
  typed_message->~MarkerFixList();
}

size_t size_function__MarkerFixList__marker_fix_list(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<tablesens::msg::MarkerFix> *>(untyped_member);
  return member->size();
}

const void * get_const_function__MarkerFixList__marker_fix_list(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<tablesens::msg::MarkerFix> *>(untyped_member);
  return &member[index];
}

void * get_function__MarkerFixList__marker_fix_list(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<tablesens::msg::MarkerFix> *>(untyped_member);
  return &member[index];
}

void fetch_function__MarkerFixList__marker_fix_list(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const tablesens::msg::MarkerFix *>(
    get_const_function__MarkerFixList__marker_fix_list(untyped_member, index));
  auto & value = *reinterpret_cast<tablesens::msg::MarkerFix *>(untyped_value);
  value = item;
}

void assign_function__MarkerFixList__marker_fix_list(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<tablesens::msg::MarkerFix *>(
    get_function__MarkerFixList__marker_fix_list(untyped_member, index));
  const auto & value = *reinterpret_cast<const tablesens::msg::MarkerFix *>(untyped_value);
  item = value;
}

void resize_function__MarkerFixList__marker_fix_list(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<tablesens::msg::MarkerFix> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember MarkerFixList_message_member_array[1] = {
  {
    "marker_fix_list",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<tablesens::msg::MarkerFix>(),  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tablesens::msg::MarkerFixList, marker_fix_list),  // bytes offset in struct
    nullptr,  // default value
    size_function__MarkerFixList__marker_fix_list,  // size() function pointer
    get_const_function__MarkerFixList__marker_fix_list,  // get_const(index) function pointer
    get_function__MarkerFixList__marker_fix_list,  // get(index) function pointer
    fetch_function__MarkerFixList__marker_fix_list,  // fetch(index, &value) function pointer
    assign_function__MarkerFixList__marker_fix_list,  // assign(index, value) function pointer
    resize_function__MarkerFixList__marker_fix_list  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers MarkerFixList_message_members = {
  "tablesens::msg",  // message namespace
  "MarkerFixList",  // message name
  1,  // number of fields
  sizeof(tablesens::msg::MarkerFixList),
  false,  // has_any_key_member_
  MarkerFixList_message_member_array,  // message members
  MarkerFixList_init_function,  // function to initialize message memory (memory has to be allocated)
  MarkerFixList_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t MarkerFixList_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &MarkerFixList_message_members,
  get_message_typesupport_handle_function,
  &tablesens__msg__MarkerFixList__get_type_hash,
  &tablesens__msg__MarkerFixList__get_type_description,
  &tablesens__msg__MarkerFixList__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace tablesens


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<tablesens::msg::MarkerFixList>()
{
  return &::tablesens::msg::rosidl_typesupport_introspection_cpp::MarkerFixList_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, tablesens, msg, MarkerFixList)() {
  return &::tablesens::msg::rosidl_typesupport_introspection_cpp::MarkerFixList_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
