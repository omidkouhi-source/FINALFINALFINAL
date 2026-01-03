// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from kinenikros2:msg/InverseKinematics.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "kinenikros2/msg/detail/inverse_kinematics__rosidl_typesupport_introspection_c.h"
#include "kinenikros2/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "kinenikros2/msg/detail/inverse_kinematics__functions.h"
#include "kinenikros2/msg/detail/inverse_kinematics__struct.h"


// Include directives for member types
// Member `ik`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void kinenikros2__msg__InverseKinematics__rosidl_typesupport_introspection_c__InverseKinematics_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  kinenikros2__msg__InverseKinematics__init(message_memory);
}

void kinenikros2__msg__InverseKinematics__rosidl_typesupport_introspection_c__InverseKinematics_fini_function(void * message_memory)
{
  kinenikros2__msg__InverseKinematics__fini(message_memory);
}

size_t kinenikros2__msg__InverseKinematics__rosidl_typesupport_introspection_c__size_function__InverseKinematics__ik(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * kinenikros2__msg__InverseKinematics__rosidl_typesupport_introspection_c__get_const_function__InverseKinematics__ik(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * kinenikros2__msg__InverseKinematics__rosidl_typesupport_introspection_c__get_function__InverseKinematics__ik(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void kinenikros2__msg__InverseKinematics__rosidl_typesupport_introspection_c__fetch_function__InverseKinematics__ik(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    kinenikros2__msg__InverseKinematics__rosidl_typesupport_introspection_c__get_const_function__InverseKinematics__ik(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void kinenikros2__msg__InverseKinematics__rosidl_typesupport_introspection_c__assign_function__InverseKinematics__ik(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    kinenikros2__msg__InverseKinematics__rosidl_typesupport_introspection_c__get_function__InverseKinematics__ik(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool kinenikros2__msg__InverseKinematics__rosidl_typesupport_introspection_c__resize_function__InverseKinematics__ik(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember kinenikros2__msg__InverseKinematics__rosidl_typesupport_introspection_c__InverseKinematics_message_member_array[1] = {
  {
    "ik",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(kinenikros2__msg__InverseKinematics, ik),  // bytes offset in struct
    NULL,  // default value
    kinenikros2__msg__InverseKinematics__rosidl_typesupport_introspection_c__size_function__InverseKinematics__ik,  // size() function pointer
    kinenikros2__msg__InverseKinematics__rosidl_typesupport_introspection_c__get_const_function__InverseKinematics__ik,  // get_const(index) function pointer
    kinenikros2__msg__InverseKinematics__rosidl_typesupport_introspection_c__get_function__InverseKinematics__ik,  // get(index) function pointer
    kinenikros2__msg__InverseKinematics__rosidl_typesupport_introspection_c__fetch_function__InverseKinematics__ik,  // fetch(index, &value) function pointer
    kinenikros2__msg__InverseKinematics__rosidl_typesupport_introspection_c__assign_function__InverseKinematics__ik,  // assign(index, value) function pointer
    kinenikros2__msg__InverseKinematics__rosidl_typesupport_introspection_c__resize_function__InverseKinematics__ik  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers kinenikros2__msg__InverseKinematics__rosidl_typesupport_introspection_c__InverseKinematics_message_members = {
  "kinenikros2__msg",  // message namespace
  "InverseKinematics",  // message name
  1,  // number of fields
  sizeof(kinenikros2__msg__InverseKinematics),
  false,  // has_any_key_member_
  kinenikros2__msg__InverseKinematics__rosidl_typesupport_introspection_c__InverseKinematics_message_member_array,  // message members
  kinenikros2__msg__InverseKinematics__rosidl_typesupport_introspection_c__InverseKinematics_init_function,  // function to initialize message memory (memory has to be allocated)
  kinenikros2__msg__InverseKinematics__rosidl_typesupport_introspection_c__InverseKinematics_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t kinenikros2__msg__InverseKinematics__rosidl_typesupport_introspection_c__InverseKinematics_message_type_support_handle = {
  0,
  &kinenikros2__msg__InverseKinematics__rosidl_typesupport_introspection_c__InverseKinematics_message_members,
  get_message_typesupport_handle_function,
  &kinenikros2__msg__InverseKinematics__get_type_hash,
  &kinenikros2__msg__InverseKinematics__get_type_description,
  &kinenikros2__msg__InverseKinematics__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_kinenikros2
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, kinenikros2, msg, InverseKinematics)() {
  if (!kinenikros2__msg__InverseKinematics__rosidl_typesupport_introspection_c__InverseKinematics_message_type_support_handle.typesupport_identifier) {
    kinenikros2__msg__InverseKinematics__rosidl_typesupport_introspection_c__InverseKinematics_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &kinenikros2__msg__InverseKinematics__rosidl_typesupport_introspection_c__InverseKinematics_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
