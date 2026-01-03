// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from chesslab_setup2_interfaces:msg/InverseKinematicsSolution.idl
// generated code does not contain a copyright notice

#include "chesslab_setup2_interfaces/msg/detail/inverse_kinematics_solution__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_chesslab_setup2_interfaces
const rosidl_type_hash_t *
chesslab_setup2_interfaces__msg__InverseKinematicsSolution__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x68, 0x3c, 0x19, 0x7b, 0x81, 0xe9, 0x90, 0xa7,
      0x15, 0x14, 0xe9, 0xf3, 0xc2, 0x7d, 0xcf, 0x34,
      0xce, 0xcb, 0x98, 0x75, 0x47, 0x99, 0x21, 0x7d,
      0x2b, 0x65, 0x41, 0x18, 0x38, 0xf7, 0x0e, 0xce,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char chesslab_setup2_interfaces__msg__InverseKinematicsSolution__TYPE_NAME[] = "chesslab_setup2_interfaces/msg/InverseKinematicsSolution";

// Define type names, field names, and default values
static char chesslab_setup2_interfaces__msg__InverseKinematicsSolution__FIELD_NAME__ik[] = "ik";

static rosidl_runtime_c__type_description__Field chesslab_setup2_interfaces__msg__InverseKinematicsSolution__FIELDS[] = {
  {
    {chesslab_setup2_interfaces__msg__InverseKinematicsSolution__FIELD_NAME__ik, 2, 2},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
chesslab_setup2_interfaces__msg__InverseKinematicsSolution__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {chesslab_setup2_interfaces__msg__InverseKinematicsSolution__TYPE_NAME, 56, 56},
      {chesslab_setup2_interfaces__msg__InverseKinematicsSolution__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "float64[] ik\n"
  "";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
chesslab_setup2_interfaces__msg__InverseKinematicsSolution__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {chesslab_setup2_interfaces__msg__InverseKinematicsSolution__TYPE_NAME, 56, 56},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 14, 14},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
chesslab_setup2_interfaces__msg__InverseKinematicsSolution__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *chesslab_setup2_interfaces__msg__InverseKinematicsSolution__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
