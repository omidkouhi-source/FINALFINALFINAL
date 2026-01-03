// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from action_module:srv/MovePiece.idl
// generated code does not contain a copyright notice

#include "action_module/srv/detail/move_piece__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_action_module
const rosidl_type_hash_t *
action_module__srv__MovePiece__get_type_hash(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x7c, 0xd6, 0xb6, 0x31, 0xee, 0x67, 0x34, 0x19,
      0x1e, 0x44, 0x79, 0x61, 0xbc, 0x36, 0x36, 0x90,
      0x60, 0xde, 0x26, 0x73, 0x34, 0xba, 0xe3, 0x86,
      0xa7, 0xe0, 0x3e, 0xe3, 0xa3, 0xf2, 0x3c, 0xb2,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_action_module
const rosidl_type_hash_t *
action_module__srv__MovePiece_Request__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xb1, 0xa2, 0x03, 0x08, 0x3e, 0x07, 0x27, 0xad,
      0x3f, 0x8b, 0xbd, 0xaa, 0xb2, 0x24, 0x36, 0x4f,
      0xd6, 0x98, 0x4a, 0x72, 0x0d, 0xcd, 0x8a, 0xb5,
      0x10, 0xd2, 0x50, 0xff, 0xec, 0xc7, 0xf1, 0x4a,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_action_module
const rosidl_type_hash_t *
action_module__srv__MovePiece_Response__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x03, 0x55, 0x1e, 0x41, 0x60, 0x2f, 0x7e, 0xe5,
      0xc5, 0x80, 0x33, 0x06, 0x29, 0xe3, 0x2d, 0x8e,
      0xc1, 0x4e, 0xcf, 0x76, 0xd8, 0x75, 0xbb, 0x1b,
      0x71, 0x38, 0x9a, 0xb8, 0xdb, 0xec, 0x52, 0x3b,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_action_module
const rosidl_type_hash_t *
action_module__srv__MovePiece_Event__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xf2, 0x0d, 0x59, 0xd7, 0xd7, 0xae, 0xf6, 0x50,
      0x16, 0xba, 0x79, 0xae, 0xc0, 0x7e, 0x06, 0x14,
      0xf6, 0x71, 0x90, 0x76, 0xa4, 0x4c, 0x5c, 0xd9,
      0xb2, 0x44, 0xff, 0x3c, 0xf7, 0x67, 0x8f, 0x99,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "service_msgs/msg/detail/service_event_info__functions.h"
#include "builtin_interfaces/msg/detail/time__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t builtin_interfaces__msg__Time__EXPECTED_HASH = {1, {
    0xb1, 0x06, 0x23, 0x5e, 0x25, 0xa4, 0xc5, 0xed,
    0x35, 0x09, 0x8a, 0xa0, 0xa6, 0x1a, 0x3e, 0xe9,
    0xc9, 0xb1, 0x8d, 0x19, 0x7f, 0x39, 0x8b, 0x0e,
    0x42, 0x06, 0xce, 0xa9, 0xac, 0xf9, 0xc1, 0x97,
  }};
static const rosidl_type_hash_t service_msgs__msg__ServiceEventInfo__EXPECTED_HASH = {1, {
    0x41, 0xbc, 0xbb, 0xe0, 0x7a, 0x75, 0xc9, 0xb5,
    0x2b, 0xc9, 0x6b, 0xfd, 0x5c, 0x24, 0xd7, 0xf0,
    0xfc, 0x0a, 0x08, 0xc0, 0xcb, 0x79, 0x21, 0xb3,
    0x37, 0x3c, 0x57, 0x32, 0x34, 0x5a, 0x6f, 0x45,
  }};
#endif

static char action_module__srv__MovePiece__TYPE_NAME[] = "action_module/srv/MovePiece";
static char action_module__srv__MovePiece_Event__TYPE_NAME[] = "action_module/srv/MovePiece_Event";
static char action_module__srv__MovePiece_Request__TYPE_NAME[] = "action_module/srv/MovePiece_Request";
static char action_module__srv__MovePiece_Response__TYPE_NAME[] = "action_module/srv/MovePiece_Response";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char service_msgs__msg__ServiceEventInfo__TYPE_NAME[] = "service_msgs/msg/ServiceEventInfo";

// Define type names, field names, and default values
static char action_module__srv__MovePiece__FIELD_NAME__request_message[] = "request_message";
static char action_module__srv__MovePiece__FIELD_NAME__response_message[] = "response_message";
static char action_module__srv__MovePiece__FIELD_NAME__event_message[] = "event_message";

static rosidl_runtime_c__type_description__Field action_module__srv__MovePiece__FIELDS[] = {
  {
    {action_module__srv__MovePiece__FIELD_NAME__request_message, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {action_module__srv__MovePiece_Request__TYPE_NAME, 35, 35},
    },
    {NULL, 0, 0},
  },
  {
    {action_module__srv__MovePiece__FIELD_NAME__response_message, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {action_module__srv__MovePiece_Response__TYPE_NAME, 36, 36},
    },
    {NULL, 0, 0},
  },
  {
    {action_module__srv__MovePiece__FIELD_NAME__event_message, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {action_module__srv__MovePiece_Event__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription action_module__srv__MovePiece__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {action_module__srv__MovePiece_Event__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
  {
    {action_module__srv__MovePiece_Request__TYPE_NAME, 35, 35},
    {NULL, 0, 0},
  },
  {
    {action_module__srv__MovePiece_Response__TYPE_NAME, 36, 36},
    {NULL, 0, 0},
  },
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
action_module__srv__MovePiece__get_type_description(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {action_module__srv__MovePiece__TYPE_NAME, 27, 27},
      {action_module__srv__MovePiece__FIELDS, 3, 3},
    },
    {action_module__srv__MovePiece__REFERENCED_TYPE_DESCRIPTIONS, 5, 5},
  };
  if (!constructed) {
    description.referenced_type_descriptions.data[0].fields = action_module__srv__MovePiece_Event__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[1].fields = action_module__srv__MovePiece_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = action_module__srv__MovePiece_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[3].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[4].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char action_module__srv__MovePiece_Request__FIELD_NAME__aruco_id[] = "aruco_id";
static char action_module__srv__MovePiece_Request__FIELD_NAME__target_square[] = "target_square";

static rosidl_runtime_c__type_description__Field action_module__srv__MovePiece_Request__FIELDS[] = {
  {
    {action_module__srv__MovePiece_Request__FIELD_NAME__aruco_id, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {action_module__srv__MovePiece_Request__FIELD_NAME__target_square, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
action_module__srv__MovePiece_Request__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {action_module__srv__MovePiece_Request__TYPE_NAME, 35, 35},
      {action_module__srv__MovePiece_Request__FIELDS, 2, 2},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char action_module__srv__MovePiece_Response__FIELD_NAME__success[] = "success";
static char action_module__srv__MovePiece_Response__FIELD_NAME__message[] = "message";

static rosidl_runtime_c__type_description__Field action_module__srv__MovePiece_Response__FIELDS[] = {
  {
    {action_module__srv__MovePiece_Response__FIELD_NAME__success, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {action_module__srv__MovePiece_Response__FIELD_NAME__message, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
action_module__srv__MovePiece_Response__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {action_module__srv__MovePiece_Response__TYPE_NAME, 36, 36},
      {action_module__srv__MovePiece_Response__FIELDS, 2, 2},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char action_module__srv__MovePiece_Event__FIELD_NAME__info[] = "info";
static char action_module__srv__MovePiece_Event__FIELD_NAME__request[] = "request";
static char action_module__srv__MovePiece_Event__FIELD_NAME__response[] = "response";

static rosidl_runtime_c__type_description__Field action_module__srv__MovePiece_Event__FIELDS[] = {
  {
    {action_module__srv__MovePiece_Event__FIELD_NAME__info, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
  {
    {action_module__srv__MovePiece_Event__FIELD_NAME__request, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {action_module__srv__MovePiece_Request__TYPE_NAME, 35, 35},
    },
    {NULL, 0, 0},
  },
  {
    {action_module__srv__MovePiece_Event__FIELD_NAME__response, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {action_module__srv__MovePiece_Response__TYPE_NAME, 36, 36},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription action_module__srv__MovePiece_Event__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {action_module__srv__MovePiece_Request__TYPE_NAME, 35, 35},
    {NULL, 0, 0},
  },
  {
    {action_module__srv__MovePiece_Response__TYPE_NAME, 36, 36},
    {NULL, 0, 0},
  },
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
action_module__srv__MovePiece_Event__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {action_module__srv__MovePiece_Event__TYPE_NAME, 33, 33},
      {action_module__srv__MovePiece_Event__FIELDS, 3, 3},
    },
    {action_module__srv__MovePiece_Event__REFERENCED_TYPE_DESCRIPTIONS, 4, 4},
  };
  if (!constructed) {
    description.referenced_type_descriptions.data[0].fields = action_module__srv__MovePiece_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[1].fields = action_module__srv__MovePiece_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[2].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[3].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "int32 aruco_id\n"
  "string target_square\n"
  "---\n"
  "bool success\n"
  "string message";

static char srv_encoding[] = "srv";
static char implicit_encoding[] = "implicit";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
action_module__srv__MovePiece__get_individual_type_description_source(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {action_module__srv__MovePiece__TYPE_NAME, 27, 27},
    {srv_encoding, 3, 3},
    {toplevel_type_raw_source, 68, 68},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
action_module__srv__MovePiece_Request__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {action_module__srv__MovePiece_Request__TYPE_NAME, 35, 35},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
action_module__srv__MovePiece_Response__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {action_module__srv__MovePiece_Response__TYPE_NAME, 36, 36},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
action_module__srv__MovePiece_Event__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {action_module__srv__MovePiece_Event__TYPE_NAME, 33, 33},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
action_module__srv__MovePiece__get_type_description_sources(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[6];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 6, 6};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *action_module__srv__MovePiece__get_individual_type_description_source(NULL),
    sources[1] = *action_module__srv__MovePiece_Event__get_individual_type_description_source(NULL);
    sources[2] = *action_module__srv__MovePiece_Request__get_individual_type_description_source(NULL);
    sources[3] = *action_module__srv__MovePiece_Response__get_individual_type_description_source(NULL);
    sources[4] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[5] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
action_module__srv__MovePiece_Request__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *action_module__srv__MovePiece_Request__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
action_module__srv__MovePiece_Response__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *action_module__srv__MovePiece_Response__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
action_module__srv__MovePiece_Event__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[5];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 5, 5};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *action_module__srv__MovePiece_Event__get_individual_type_description_source(NULL),
    sources[1] = *action_module__srv__MovePiece_Request__get_individual_type_description_source(NULL);
    sources[2] = *action_module__srv__MovePiece_Response__get_individual_type_description_source(NULL);
    sources[3] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[4] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
