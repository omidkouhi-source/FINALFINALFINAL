// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from tablesens:msg/MarkerFixList.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "tablesens/msg/marker_fix_list.h"


#ifndef TABLESENS__MSG__DETAIL__MARKER_FIX_LIST__STRUCT_H_
#define TABLESENS__MSG__DETAIL__MARKER_FIX_LIST__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'marker_fix_list'
#include "tablesens/msg/detail/marker_fix__struct.h"

/// Struct defined in msg/MarkerFixList in the package tablesens.
typedef struct tablesens__msg__MarkerFixList
{
  tablesens__msg__MarkerFix__Sequence marker_fix_list;
} tablesens__msg__MarkerFixList;

// Struct for a sequence of tablesens__msg__MarkerFixList.
typedef struct tablesens__msg__MarkerFixList__Sequence
{
  tablesens__msg__MarkerFixList * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tablesens__msg__MarkerFixList__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TABLESENS__MSG__DETAIL__MARKER_FIX_LIST__STRUCT_H_
