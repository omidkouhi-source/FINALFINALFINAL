// generated from rosidl_typesupport_fastrtps_c/resource/idl__rosidl_typesupport_fastrtps_c.h.em
// with input from chesslab_setup2_interfaces:msg/InverseKinematicsSolution.idl
// generated code does not contain a copyright notice
#ifndef CHESSLAB_SETUP2_INTERFACES__MSG__DETAIL__INVERSE_KINEMATICS_SOLUTION__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_
#define CHESSLAB_SETUP2_INTERFACES__MSG__DETAIL__INVERSE_KINEMATICS_SOLUTION__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_


#include <stddef.h>
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "chesslab_setup2_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "chesslab_setup2_interfaces/msg/detail/inverse_kinematics_solution__struct.h"
#include "fastcdr/Cdr.h"

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_chesslab_setup2_interfaces
bool cdr_serialize_chesslab_setup2_interfaces__msg__InverseKinematicsSolution(
  const chesslab_setup2_interfaces__msg__InverseKinematicsSolution * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_chesslab_setup2_interfaces
bool cdr_deserialize_chesslab_setup2_interfaces__msg__InverseKinematicsSolution(
  eprosima::fastcdr::Cdr &,
  chesslab_setup2_interfaces__msg__InverseKinematicsSolution * ros_message);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_chesslab_setup2_interfaces
size_t get_serialized_size_chesslab_setup2_interfaces__msg__InverseKinematicsSolution(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_chesslab_setup2_interfaces
size_t max_serialized_size_chesslab_setup2_interfaces__msg__InverseKinematicsSolution(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_chesslab_setup2_interfaces
bool cdr_serialize_key_chesslab_setup2_interfaces__msg__InverseKinematicsSolution(
  const chesslab_setup2_interfaces__msg__InverseKinematicsSolution * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_chesslab_setup2_interfaces
size_t get_serialized_size_key_chesslab_setup2_interfaces__msg__InverseKinematicsSolution(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_chesslab_setup2_interfaces
size_t max_serialized_size_key_chesslab_setup2_interfaces__msg__InverseKinematicsSolution(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_chesslab_setup2_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, chesslab_setup2_interfaces, msg, InverseKinematicsSolution)();

#ifdef __cplusplus
}
#endif

#endif  // CHESSLAB_SETUP2_INTERFACES__MSG__DETAIL__INVERSE_KINEMATICS_SOLUTION__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_
