// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from chesslab_setup2_interfaces:msg/InverseKinematicsSolution.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "chesslab_setup2_interfaces/msg/detail/inverse_kinematics_solution__functions.h"
#include "chesslab_setup2_interfaces/msg/detail/inverse_kinematics_solution__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace chesslab_setup2_interfaces
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void InverseKinematicsSolution_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) chesslab_setup2_interfaces::msg::InverseKinematicsSolution(_init);
}

void InverseKinematicsSolution_fini_function(void * message_memory)
{
  auto typed_message = static_cast<chesslab_setup2_interfaces::msg::InverseKinematicsSolution *>(message_memory);
  typed_message->~InverseKinematicsSolution();
}

size_t size_function__InverseKinematicsSolution__ik(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<double> *>(untyped_member);
  return member->size();
}

const void * get_const_function__InverseKinematicsSolution__ik(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<double> *>(untyped_member);
  return &member[index];
}

void * get_function__InverseKinematicsSolution__ik(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<double> *>(untyped_member);
  return &member[index];
}

void fetch_function__InverseKinematicsSolution__ik(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__InverseKinematicsSolution__ik(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__InverseKinematicsSolution__ik(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__InverseKinematicsSolution__ik(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

void resize_function__InverseKinematicsSolution__ik(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<double> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember InverseKinematicsSolution_message_member_array[1] = {
  {
    "ik",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(chesslab_setup2_interfaces::msg::InverseKinematicsSolution, ik),  // bytes offset in struct
    nullptr,  // default value
    size_function__InverseKinematicsSolution__ik,  // size() function pointer
    get_const_function__InverseKinematicsSolution__ik,  // get_const(index) function pointer
    get_function__InverseKinematicsSolution__ik,  // get(index) function pointer
    fetch_function__InverseKinematicsSolution__ik,  // fetch(index, &value) function pointer
    assign_function__InverseKinematicsSolution__ik,  // assign(index, value) function pointer
    resize_function__InverseKinematicsSolution__ik  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers InverseKinematicsSolution_message_members = {
  "chesslab_setup2_interfaces::msg",  // message namespace
  "InverseKinematicsSolution",  // message name
  1,  // number of fields
  sizeof(chesslab_setup2_interfaces::msg::InverseKinematicsSolution),
  false,  // has_any_key_member_
  InverseKinematicsSolution_message_member_array,  // message members
  InverseKinematicsSolution_init_function,  // function to initialize message memory (memory has to be allocated)
  InverseKinematicsSolution_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t InverseKinematicsSolution_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &InverseKinematicsSolution_message_members,
  get_message_typesupport_handle_function,
  &chesslab_setup2_interfaces__msg__InverseKinematicsSolution__get_type_hash,
  &chesslab_setup2_interfaces__msg__InverseKinematicsSolution__get_type_description,
  &chesslab_setup2_interfaces__msg__InverseKinematicsSolution__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace chesslab_setup2_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<chesslab_setup2_interfaces::msg::InverseKinematicsSolution>()
{
  return &::chesslab_setup2_interfaces::msg::rosidl_typesupport_introspection_cpp::InverseKinematicsSolution_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, chesslab_setup2_interfaces, msg, InverseKinematicsSolution)() {
  return &::chesslab_setup2_interfaces::msg::rosidl_typesupport_introspection_cpp::InverseKinematicsSolution_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
