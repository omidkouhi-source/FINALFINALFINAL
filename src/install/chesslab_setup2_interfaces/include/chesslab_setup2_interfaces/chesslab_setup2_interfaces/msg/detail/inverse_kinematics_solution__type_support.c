// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from chesslab_setup2_interfaces:msg/InverseKinematicsSolution.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "chesslab_setup2_interfaces/msg/detail/inverse_kinematics_solution__rosidl_typesupport_introspection_c.h"
#include "chesslab_setup2_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "chesslab_setup2_interfaces/msg/detail/inverse_kinematics_solution__functions.h"
#include "chesslab_setup2_interfaces/msg/detail/inverse_kinematics_solution__struct.h"


// Include directives for member types
// Member `ik`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void chesslab_setup2_interfaces__msg__InverseKinematicsSolution__rosidl_typesupport_introspection_c__InverseKinematicsSolution_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  chesslab_setup2_interfaces__msg__InverseKinematicsSolution__init(message_memory);
}

void chesslab_setup2_interfaces__msg__InverseKinematicsSolution__rosidl_typesupport_introspection_c__InverseKinematicsSolution_fini_function(void * message_memory)
{
  chesslab_setup2_interfaces__msg__InverseKinematicsSolution__fini(message_memory);
}

size_t chesslab_setup2_interfaces__msg__InverseKinematicsSolution__rosidl_typesupport_introspection_c__size_function__InverseKinematicsSolution__ik(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * chesslab_setup2_interfaces__msg__InverseKinematicsSolution__rosidl_typesupport_introspection_c__get_const_function__InverseKinematicsSolution__ik(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * chesslab_setup2_interfaces__msg__InverseKinematicsSolution__rosidl_typesupport_introspection_c__get_function__InverseKinematicsSolution__ik(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void chesslab_setup2_interfaces__msg__InverseKinematicsSolution__rosidl_typesupport_introspection_c__fetch_function__InverseKinematicsSolution__ik(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    chesslab_setup2_interfaces__msg__InverseKinematicsSolution__rosidl_typesupport_introspection_c__get_const_function__InverseKinematicsSolution__ik(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void chesslab_setup2_interfaces__msg__InverseKinematicsSolution__rosidl_typesupport_introspection_c__assign_function__InverseKinematicsSolution__ik(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    chesslab_setup2_interfaces__msg__InverseKinematicsSolution__rosidl_typesupport_introspection_c__get_function__InverseKinematicsSolution__ik(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool chesslab_setup2_interfaces__msg__InverseKinematicsSolution__rosidl_typesupport_introspection_c__resize_function__InverseKinematicsSolution__ik(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember chesslab_setup2_interfaces__msg__InverseKinematicsSolution__rosidl_typesupport_introspection_c__InverseKinematicsSolution_message_member_array[1] = {
  {
    "ik",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(chesslab_setup2_interfaces__msg__InverseKinematicsSolution, ik),  // bytes offset in struct
    NULL,  // default value
    chesslab_setup2_interfaces__msg__InverseKinematicsSolution__rosidl_typesupport_introspection_c__size_function__InverseKinematicsSolution__ik,  // size() function pointer
    chesslab_setup2_interfaces__msg__InverseKinematicsSolution__rosidl_typesupport_introspection_c__get_const_function__InverseKinematicsSolution__ik,  // get_const(index) function pointer
    chesslab_setup2_interfaces__msg__InverseKinematicsSolution__rosidl_typesupport_introspection_c__get_function__InverseKinematicsSolution__ik,  // get(index) function pointer
    chesslab_setup2_interfaces__msg__InverseKinematicsSolution__rosidl_typesupport_introspection_c__fetch_function__InverseKinematicsSolution__ik,  // fetch(index, &value) function pointer
    chesslab_setup2_interfaces__msg__InverseKinematicsSolution__rosidl_typesupport_introspection_c__assign_function__InverseKinematicsSolution__ik,  // assign(index, value) function pointer
    chesslab_setup2_interfaces__msg__InverseKinematicsSolution__rosidl_typesupport_introspection_c__resize_function__InverseKinematicsSolution__ik  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers chesslab_setup2_interfaces__msg__InverseKinematicsSolution__rosidl_typesupport_introspection_c__InverseKinematicsSolution_message_members = {
  "chesslab_setup2_interfaces__msg",  // message namespace
  "InverseKinematicsSolution",  // message name
  1,  // number of fields
  sizeof(chesslab_setup2_interfaces__msg__InverseKinematicsSolution),
  false,  // has_any_key_member_
  chesslab_setup2_interfaces__msg__InverseKinematicsSolution__rosidl_typesupport_introspection_c__InverseKinematicsSolution_message_member_array,  // message members
  chesslab_setup2_interfaces__msg__InverseKinematicsSolution__rosidl_typesupport_introspection_c__InverseKinematicsSolution_init_function,  // function to initialize message memory (memory has to be allocated)
  chesslab_setup2_interfaces__msg__InverseKinematicsSolution__rosidl_typesupport_introspection_c__InverseKinematicsSolution_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t chesslab_setup2_interfaces__msg__InverseKinematicsSolution__rosidl_typesupport_introspection_c__InverseKinematicsSolution_message_type_support_handle = {
  0,
  &chesslab_setup2_interfaces__msg__InverseKinematicsSolution__rosidl_typesupport_introspection_c__InverseKinematicsSolution_message_members,
  get_message_typesupport_handle_function,
  &chesslab_setup2_interfaces__msg__InverseKinematicsSolution__get_type_hash,
  &chesslab_setup2_interfaces__msg__InverseKinematicsSolution__get_type_description,
  &chesslab_setup2_interfaces__msg__InverseKinematicsSolution__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_chesslab_setup2_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, chesslab_setup2_interfaces, msg, InverseKinematicsSolution)() {
  if (!chesslab_setup2_interfaces__msg__InverseKinematicsSolution__rosidl_typesupport_introspection_c__InverseKinematicsSolution_message_type_support_handle.typesupport_identifier) {
    chesslab_setup2_interfaces__msg__InverseKinematicsSolution__rosidl_typesupport_introspection_c__InverseKinematicsSolution_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &chesslab_setup2_interfaces__msg__InverseKinematicsSolution__rosidl_typesupport_introspection_c__InverseKinematicsSolution_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
