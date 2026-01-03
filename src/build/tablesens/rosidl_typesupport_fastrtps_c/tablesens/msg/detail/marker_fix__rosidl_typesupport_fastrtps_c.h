// generated from rosidl_typesupport_fastrtps_c/resource/idl__rosidl_typesupport_fastrtps_c.h.em
// with input from tablesens:msg/MarkerFix.idl
// generated code does not contain a copyright notice
#ifndef TABLESENS__MSG__DETAIL__MARKER_FIX__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_
#define TABLESENS__MSG__DETAIL__MARKER_FIX__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_


#include <stddef.h>
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "tablesens/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "tablesens/msg/detail/marker_fix__struct.h"
#include "fastcdr/Cdr.h"

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_tablesens
bool cdr_serialize_tablesens__msg__MarkerFix(
  const tablesens__msg__MarkerFix * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_tablesens
bool cdr_deserialize_tablesens__msg__MarkerFix(
  eprosima::fastcdr::Cdr &,
  tablesens__msg__MarkerFix * ros_message);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_tablesens
size_t get_serialized_size_tablesens__msg__MarkerFix(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_tablesens
size_t max_serialized_size_tablesens__msg__MarkerFix(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_tablesens
bool cdr_serialize_key_tablesens__msg__MarkerFix(
  const tablesens__msg__MarkerFix * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_tablesens
size_t get_serialized_size_key_tablesens__msg__MarkerFix(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_tablesens
size_t max_serialized_size_key_tablesens__msg__MarkerFix(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_tablesens
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, tablesens, msg, MarkerFix)();

#ifdef __cplusplus
}
#endif

#endif  // TABLESENS__MSG__DETAIL__MARKER_FIX__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_
