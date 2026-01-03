// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from tablesens:msg/MarkerFix.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "tablesens/msg/marker_fix.h"


#ifndef TABLESENS__MSG__DETAIL__MARKER_FIX__STRUCT_H_
#define TABLESENS__MSG__DETAIL__MARKER_FIX__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'pose'
#include "geometry_msgs/msg/detail/pose__struct.h"

/// Struct defined in msg/MarkerFix in the package tablesens.
typedef struct tablesens__msg__MarkerFix
{
  uint32_t id;
  geometry_msgs__msg__Pose pose;
} tablesens__msg__MarkerFix;

// Struct for a sequence of tablesens__msg__MarkerFix.
typedef struct tablesens__msg__MarkerFix__Sequence
{
  tablesens__msg__MarkerFix * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tablesens__msg__MarkerFix__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TABLESENS__MSG__DETAIL__MARKER_FIX__STRUCT_H_
