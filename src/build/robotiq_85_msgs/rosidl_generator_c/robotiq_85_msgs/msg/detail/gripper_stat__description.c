// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from robotiq_85_msgs:msg/GripperStat.idl
// generated code does not contain a copyright notice

#include "robotiq_85_msgs/msg/detail/gripper_stat__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_robotiq_85_msgs
const rosidl_type_hash_t *
robotiq_85_msgs__msg__GripperStat__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x06, 0x63, 0xc9, 0xdc, 0xf4, 0x39, 0x45, 0x51,
      0x24, 0xba, 0xdd, 0xae, 0x74, 0xa0, 0x26, 0x3c,
      0xc4, 0x30, 0x5b, 0x30, 0xc4, 0xda, 0x06, 0xf5,
      0x4b, 0x0b, 0x0d, 0x8d, 0xa5, 0xeb, 0x0e, 0x0e,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "std_msgs/msg/detail/header__functions.h"
#include "builtin_interfaces/msg/detail/time__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t builtin_interfaces__msg__Time__EXPECTED_HASH = {1, {
    0xb1, 0x06, 0x23, 0x5e, 0x25, 0xa4, 0xc5, 0xed,
    0x35, 0x09, 0x8a, 0xa0, 0xa6, 0x1a, 0x3e, 0xe9,
    0xc9, 0xb1, 0x8d, 0x19, 0x7f, 0x39, 0x8b, 0x0e,
    0x42, 0x06, 0xce, 0xa9, 0xac, 0xf9, 0xc1, 0x97,
  }};
static const rosidl_type_hash_t std_msgs__msg__Header__EXPECTED_HASH = {1, {
    0xf4, 0x9f, 0xb3, 0xae, 0x2c, 0xf0, 0x70, 0xf7,
    0x93, 0x64, 0x5f, 0xf7, 0x49, 0x68, 0x3a, 0xc6,
    0xb0, 0x62, 0x03, 0xe4, 0x1c, 0x89, 0x1e, 0x17,
    0x70, 0x1b, 0x1c, 0xb5, 0x97, 0xce, 0x6a, 0x01,
  }};
#endif

static char robotiq_85_msgs__msg__GripperStat__TYPE_NAME[] = "robotiq_85_msgs/msg/GripperStat";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char std_msgs__msg__Header__TYPE_NAME[] = "std_msgs/msg/Header";

// Define type names, field names, and default values
static char robotiq_85_msgs__msg__GripperStat__FIELD_NAME__header[] = "header";
static char robotiq_85_msgs__msg__GripperStat__FIELD_NAME__is_ready[] = "is_ready";
static char robotiq_85_msgs__msg__GripperStat__FIELD_NAME__is_reset[] = "is_reset";
static char robotiq_85_msgs__msg__GripperStat__FIELD_NAME__is_moving[] = "is_moving";
static char robotiq_85_msgs__msg__GripperStat__FIELD_NAME__obj_detected[] = "obj_detected";
static char robotiq_85_msgs__msg__GripperStat__FIELD_NAME__fault_status[] = "fault_status";
static char robotiq_85_msgs__msg__GripperStat__FIELD_NAME__position[] = "position";
static char robotiq_85_msgs__msg__GripperStat__FIELD_NAME__requested_position[] = "requested_position";
static char robotiq_85_msgs__msg__GripperStat__FIELD_NAME__current[] = "current";

static rosidl_runtime_c__type_description__Field robotiq_85_msgs__msg__GripperStat__FIELDS[] = {
  {
    {robotiq_85_msgs__msg__GripperStat__FIELD_NAME__header, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {std_msgs__msg__Header__TYPE_NAME, 19, 19},
    },
    {NULL, 0, 0},
  },
  {
    {robotiq_85_msgs__msg__GripperStat__FIELD_NAME__is_ready, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {robotiq_85_msgs__msg__GripperStat__FIELD_NAME__is_reset, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {robotiq_85_msgs__msg__GripperStat__FIELD_NAME__is_moving, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {robotiq_85_msgs__msg__GripperStat__FIELD_NAME__obj_detected, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {robotiq_85_msgs__msg__GripperStat__FIELD_NAME__fault_status, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {robotiq_85_msgs__msg__GripperStat__FIELD_NAME__position, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {robotiq_85_msgs__msg__GripperStat__FIELD_NAME__requested_position, 18, 18},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {robotiq_85_msgs__msg__GripperStat__FIELD_NAME__current, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription robotiq_85_msgs__msg__GripperStat__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {std_msgs__msg__Header__TYPE_NAME, 19, 19},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
robotiq_85_msgs__msg__GripperStat__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {robotiq_85_msgs__msg__GripperStat__TYPE_NAME, 31, 31},
      {robotiq_85_msgs__msg__GripperStat__FIELDS, 9, 9},
    },
    {robotiq_85_msgs__msg__GripperStat__REFERENCED_TYPE_DESCRIPTIONS, 2, 2},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&std_msgs__msg__Header__EXPECTED_HASH, std_msgs__msg__Header__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = std_msgs__msg__Header__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "std_msgs/Header header\n"
  "bool is_ready\n"
  "bool is_reset\n"
  "bool is_moving\n"
  "bool obj_detected\n"
  "uint8 fault_status\n"
  "float32 position\n"
  "float32 requested_position\n"
  "float32 current";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
robotiq_85_msgs__msg__GripperStat__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {robotiq_85_msgs__msg__GripperStat__TYPE_NAME, 31, 31},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 163, 163},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
robotiq_85_msgs__msg__GripperStat__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[3];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 3, 3};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *robotiq_85_msgs__msg__GripperStat__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *std_msgs__msg__Header__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
