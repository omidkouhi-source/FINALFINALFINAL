// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from kinenikros2:msg/InverseKinematics.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "kinenikros2/msg/inverse_kinematics.h"


#ifndef KINENIKROS2__MSG__DETAIL__INVERSE_KINEMATICS__STRUCT_H_
#define KINENIKROS2__MSG__DETAIL__INVERSE_KINEMATICS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'ik'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/InverseKinematics in the package kinenikros2.
typedef struct kinenikros2__msg__InverseKinematics
{
  rosidl_runtime_c__double__Sequence ik;
} kinenikros2__msg__InverseKinematics;

// Struct for a sequence of kinenikros2__msg__InverseKinematics.
typedef struct kinenikros2__msg__InverseKinematics__Sequence
{
  kinenikros2__msg__InverseKinematics * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} kinenikros2__msg__InverseKinematics__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // KINENIKROS2__MSG__DETAIL__INVERSE_KINEMATICS__STRUCT_H_
