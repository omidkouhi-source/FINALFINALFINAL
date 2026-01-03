// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from chesslab_setup2_interfaces:msg/InverseKinematicsSolution.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "chesslab_setup2_interfaces/msg/inverse_kinematics_solution.h"


#ifndef CHESSLAB_SETUP2_INTERFACES__MSG__DETAIL__INVERSE_KINEMATICS_SOLUTION__STRUCT_H_
#define CHESSLAB_SETUP2_INTERFACES__MSG__DETAIL__INVERSE_KINEMATICS_SOLUTION__STRUCT_H_

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

/// Struct defined in msg/InverseKinematicsSolution in the package chesslab_setup2_interfaces.
typedef struct chesslab_setup2_interfaces__msg__InverseKinematicsSolution
{
  rosidl_runtime_c__double__Sequence ik;
} chesslab_setup2_interfaces__msg__InverseKinematicsSolution;

// Struct for a sequence of chesslab_setup2_interfaces__msg__InverseKinematicsSolution.
typedef struct chesslab_setup2_interfaces__msg__InverseKinematicsSolution__Sequence
{
  chesslab_setup2_interfaces__msg__InverseKinematicsSolution * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} chesslab_setup2_interfaces__msg__InverseKinematicsSolution__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CHESSLAB_SETUP2_INTERFACES__MSG__DETAIL__INVERSE_KINEMATICS_SOLUTION__STRUCT_H_
