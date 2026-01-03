// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from robotiq_85_msgs:msg/GripperCmd.idl
// generated code does not contain a copyright notice

#include "robotiq_85_msgs/msg/detail/gripper_cmd__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_robotiq_85_msgs
const rosidl_type_hash_t *
robotiq_85_msgs__msg__GripperCmd__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xb6, 0x40, 0x3a, 0x72, 0x9b, 0x77, 0xc9, 0x22,
      0x3d, 0xb6, 0x88, 0xb7, 0x8d, 0xd5, 0xa0, 0x7a,
      0xad, 0x22, 0x36, 0xaf, 0xf5, 0xd8, 0x05, 0xff,
      0x4f, 0x64, 0x92, 0x25, 0x07, 0xb3, 0xfc, 0x0d,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char robotiq_85_msgs__msg__GripperCmd__TYPE_NAME[] = "robotiq_85_msgs/msg/GripperCmd";

// Define type names, field names, and default values
static char robotiq_85_msgs__msg__GripperCmd__FIELD_NAME__emergency_release[] = "emergency_release";
static char robotiq_85_msgs__msg__GripperCmd__FIELD_NAME__emergency_release_dir[] = "emergency_release_dir";
static char robotiq_85_msgs__msg__GripperCmd__FIELD_NAME__stop[] = "stop";
static char robotiq_85_msgs__msg__GripperCmd__FIELD_NAME__position[] = "position";
static char robotiq_85_msgs__msg__GripperCmd__FIELD_NAME__speed[] = "speed";
static char robotiq_85_msgs__msg__GripperCmd__FIELD_NAME__force[] = "force";

static rosidl_runtime_c__type_description__Field robotiq_85_msgs__msg__GripperCmd__FIELDS[] = {
  {
    {robotiq_85_msgs__msg__GripperCmd__FIELD_NAME__emergency_release, 17, 17},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {robotiq_85_msgs__msg__GripperCmd__FIELD_NAME__emergency_release_dir, 21, 21},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {robotiq_85_msgs__msg__GripperCmd__FIELD_NAME__stop, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {robotiq_85_msgs__msg__GripperCmd__FIELD_NAME__position, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {robotiq_85_msgs__msg__GripperCmd__FIELD_NAME__speed, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {robotiq_85_msgs__msg__GripperCmd__FIELD_NAME__force, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
robotiq_85_msgs__msg__GripperCmd__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {robotiq_85_msgs__msg__GripperCmd__TYPE_NAME, 30, 30},
      {robotiq_85_msgs__msg__GripperCmd__FIELDS, 6, 6},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "bool emergency_release\n"
  "uint32 emergency_release_dir\n"
  "bool stop\n"
  "float32 position\n"
  "float32 speed\n"
  "float32 force\n"
  "";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
robotiq_85_msgs__msg__GripperCmd__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {robotiq_85_msgs__msg__GripperCmd__TYPE_NAME, 30, 30},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 108, 108},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
robotiq_85_msgs__msg__GripperCmd__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *robotiq_85_msgs__msg__GripperCmd__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
