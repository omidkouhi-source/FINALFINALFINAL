// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from kinenikros2:msg/InverseKinematics.idl
// generated code does not contain a copyright notice

#include "kinenikros2/msg/detail/inverse_kinematics__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_kinenikros2
const rosidl_type_hash_t *
kinenikros2__msg__InverseKinematics__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x4d, 0x70, 0x3c, 0x8f, 0x15, 0xfe, 0x10, 0x84,
      0xa7, 0xbf, 0xe9, 0x3c, 0x95, 0x50, 0x38, 0xfe,
      0xd4, 0xae, 0x8b, 0x83, 0x43, 0xcc, 0xf8, 0xd9,
      0x5d, 0x8b, 0xcd, 0x1e, 0xba, 0x8d, 0xcf, 0x42,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char kinenikros2__msg__InverseKinematics__TYPE_NAME[] = "kinenikros2/msg/InverseKinematics";

// Define type names, field names, and default values
static char kinenikros2__msg__InverseKinematics__FIELD_NAME__ik[] = "ik";

static rosidl_runtime_c__type_description__Field kinenikros2__msg__InverseKinematics__FIELDS[] = {
  {
    {kinenikros2__msg__InverseKinematics__FIELD_NAME__ik, 2, 2},
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
kinenikros2__msg__InverseKinematics__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {kinenikros2__msg__InverseKinematics__TYPE_NAME, 33, 33},
      {kinenikros2__msg__InverseKinematics__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "float64[] ik";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
kinenikros2__msg__InverseKinematics__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {kinenikros2__msg__InverseKinematics__TYPE_NAME, 33, 33},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 13, 13},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
kinenikros2__msg__InverseKinematics__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *kinenikros2__msg__InverseKinematics__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
