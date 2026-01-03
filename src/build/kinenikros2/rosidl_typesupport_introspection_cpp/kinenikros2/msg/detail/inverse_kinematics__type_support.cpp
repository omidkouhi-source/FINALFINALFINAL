// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from kinenikros2:msg/InverseKinematics.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "kinenikros2/msg/detail/inverse_kinematics__functions.h"
#include "kinenikros2/msg/detail/inverse_kinematics__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace kinenikros2
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void InverseKinematics_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) kinenikros2::msg::InverseKinematics(_init);
}

void InverseKinematics_fini_function(void * message_memory)
{
  auto typed_message = static_cast<kinenikros2::msg::InverseKinematics *>(message_memory);
  typed_message->~InverseKinematics();
}

size_t size_function__InverseKinematics__ik(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<double> *>(untyped_member);
  return member->size();
}

const void * get_const_function__InverseKinematics__ik(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<double> *>(untyped_member);
  return &member[index];
}

void * get_function__InverseKinematics__ik(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<double> *>(untyped_member);
  return &member[index];
}

void fetch_function__InverseKinematics__ik(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__InverseKinematics__ik(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__InverseKinematics__ik(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__InverseKinematics__ik(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

void resize_function__InverseKinematics__ik(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<double> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember InverseKinematics_message_member_array[1] = {
  {
    "ik",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(kinenikros2::msg::InverseKinematics, ik),  // bytes offset in struct
    nullptr,  // default value
    size_function__InverseKinematics__ik,  // size() function pointer
    get_const_function__InverseKinematics__ik,  // get_const(index) function pointer
    get_function__InverseKinematics__ik,  // get(index) function pointer
    fetch_function__InverseKinematics__ik,  // fetch(index, &value) function pointer
    assign_function__InverseKinematics__ik,  // assign(index, value) function pointer
    resize_function__InverseKinematics__ik  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers InverseKinematics_message_members = {
  "kinenikros2::msg",  // message namespace
  "InverseKinematics",  // message name
  1,  // number of fields
  sizeof(kinenikros2::msg::InverseKinematics),
  false,  // has_any_key_member_
  InverseKinematics_message_member_array,  // message members
  InverseKinematics_init_function,  // function to initialize message memory (memory has to be allocated)
  InverseKinematics_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t InverseKinematics_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &InverseKinematics_message_members,
  get_message_typesupport_handle_function,
  &kinenikros2__msg__InverseKinematics__get_type_hash,
  &kinenikros2__msg__InverseKinematics__get_type_description,
  &kinenikros2__msg__InverseKinematics__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace kinenikros2


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<kinenikros2::msg::InverseKinematics>()
{
  return &::kinenikros2::msg::rosidl_typesupport_introspection_cpp::InverseKinematics_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, kinenikros2, msg, InverseKinematics)() {
  return &::kinenikros2::msg::rosidl_typesupport_introspection_cpp::InverseKinematics_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
