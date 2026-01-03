// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from robotiq_85_gripper_server:srv/GripperOpen.idl
// generated code does not contain a copyright notice

#include "robotiq_85_gripper_server/srv/detail/gripper_open__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_robotiq_85_gripper_server
const rosidl_type_hash_t *
robotiq_85_gripper_server__srv__GripperOpen__get_type_hash(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xe8, 0x47, 0xe8, 0x0a, 0xa0, 0x01, 0x44, 0x2b,
      0xb9, 0x41, 0x1c, 0x13, 0x73, 0x03, 0x45, 0x86,
      0xb9, 0xe4, 0x93, 0x5d, 0x4f, 0xb6, 0x30, 0x7a,
      0xe5, 0xaf, 0x0d, 0xfb, 0x57, 0x59, 0xbf, 0x25,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_robotiq_85_gripper_server
const rosidl_type_hash_t *
robotiq_85_gripper_server__srv__GripperOpen_Request__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xd6, 0x08, 0xa0, 0x52, 0x13, 0x22, 0x09, 0xd3,
      0xf8, 0x76, 0x22, 0xd2, 0xa2, 0x75, 0x16, 0xc5,
      0xf2, 0x54, 0xa9, 0xbc, 0x41, 0x6c, 0x4b, 0x08,
      0x89, 0xa9, 0xe0, 0xd4, 0xf2, 0xa0, 0xe4, 0xbb,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_robotiq_85_gripper_server
const rosidl_type_hash_t *
robotiq_85_gripper_server__srv__GripperOpen_Response__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x6e, 0xe5, 0x69, 0x5a, 0xdf, 0x2b, 0x34, 0x70,
      0xc7, 0x0a, 0x47, 0xe2, 0xbb, 0xf1, 0xa1, 0xb9,
      0xf0, 0x0d, 0x9e, 0x88, 0x4d, 0x93, 0x63, 0x89,
      0x6f, 0xd9, 0x9b, 0x00, 0x4f, 0x3f, 0x1d, 0x6b,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_robotiq_85_gripper_server
const rosidl_type_hash_t *
robotiq_85_gripper_server__srv__GripperOpen_Event__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x99, 0xd0, 0xe1, 0x6f, 0xbf, 0x85, 0x58, 0x1a,
      0x95, 0x3f, 0x70, 0xff, 0x00, 0x3b, 0xd5, 0xb9,
      0x46, 0x0c, 0x62, 0x91, 0xc5, 0x40, 0x94, 0x37,
      0x9e, 0x0f, 0xe5, 0x2e, 0xd0, 0x4d, 0x92, 0xd5,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "builtin_interfaces/msg/detail/time__functions.h"
#include "service_msgs/msg/detail/service_event_info__functions.h"

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

static char robotiq_85_gripper_server__srv__GripperOpen__TYPE_NAME[] = "robotiq_85_gripper_server/srv/GripperOpen";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char robotiq_85_gripper_server__srv__GripperOpen_Event__TYPE_NAME[] = "robotiq_85_gripper_server/srv/GripperOpen_Event";
static char robotiq_85_gripper_server__srv__GripperOpen_Request__TYPE_NAME[] = "robotiq_85_gripper_server/srv/GripperOpen_Request";
static char robotiq_85_gripper_server__srv__GripperOpen_Response__TYPE_NAME[] = "robotiq_85_gripper_server/srv/GripperOpen_Response";
static char service_msgs__msg__ServiceEventInfo__TYPE_NAME[] = "service_msgs/msg/ServiceEventInfo";

// Define type names, field names, and default values
static char robotiq_85_gripper_server__srv__GripperOpen__FIELD_NAME__request_message[] = "request_message";
static char robotiq_85_gripper_server__srv__GripperOpen__FIELD_NAME__response_message[] = "response_message";
static char robotiq_85_gripper_server__srv__GripperOpen__FIELD_NAME__event_message[] = "event_message";

static rosidl_runtime_c__type_description__Field robotiq_85_gripper_server__srv__GripperOpen__FIELDS[] = {
  {
    {robotiq_85_gripper_server__srv__GripperOpen__FIELD_NAME__request_message, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {robotiq_85_gripper_server__srv__GripperOpen_Request__TYPE_NAME, 49, 49},
    },
    {NULL, 0, 0},
  },
  {
    {robotiq_85_gripper_server__srv__GripperOpen__FIELD_NAME__response_message, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {robotiq_85_gripper_server__srv__GripperOpen_Response__TYPE_NAME, 50, 50},
    },
    {NULL, 0, 0},
  },
  {
    {robotiq_85_gripper_server__srv__GripperOpen__FIELD_NAME__event_message, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {robotiq_85_gripper_server__srv__GripperOpen_Event__TYPE_NAME, 47, 47},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription robotiq_85_gripper_server__srv__GripperOpen__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {robotiq_85_gripper_server__srv__GripperOpen_Event__TYPE_NAME, 47, 47},
    {NULL, 0, 0},
  },
  {
    {robotiq_85_gripper_server__srv__GripperOpen_Request__TYPE_NAME, 49, 49},
    {NULL, 0, 0},
  },
  {
    {robotiq_85_gripper_server__srv__GripperOpen_Response__TYPE_NAME, 50, 50},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
robotiq_85_gripper_server__srv__GripperOpen__get_type_description(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {robotiq_85_gripper_server__srv__GripperOpen__TYPE_NAME, 41, 41},
      {robotiq_85_gripper_server__srv__GripperOpen__FIELDS, 3, 3},
    },
    {robotiq_85_gripper_server__srv__GripperOpen__REFERENCED_TYPE_DESCRIPTIONS, 5, 5},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[1].fields = robotiq_85_gripper_server__srv__GripperOpen_Event__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = robotiq_85_gripper_server__srv__GripperOpen_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[3].fields = robotiq_85_gripper_server__srv__GripperOpen_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[4].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char robotiq_85_gripper_server__srv__GripperOpen_Request__FIELD_NAME__order[] = "order";

static rosidl_runtime_c__type_description__Field robotiq_85_gripper_server__srv__GripperOpen_Request__FIELDS[] = {
  {
    {robotiq_85_gripper_server__srv__GripperOpen_Request__FIELD_NAME__order, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
robotiq_85_gripper_server__srv__GripperOpen_Request__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {robotiq_85_gripper_server__srv__GripperOpen_Request__TYPE_NAME, 49, 49},
      {robotiq_85_gripper_server__srv__GripperOpen_Request__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char robotiq_85_gripper_server__srv__GripperOpen_Response__FIELD_NAME__status[] = "status";

static rosidl_runtime_c__type_description__Field robotiq_85_gripper_server__srv__GripperOpen_Response__FIELDS[] = {
  {
    {robotiq_85_gripper_server__srv__GripperOpen_Response__FIELD_NAME__status, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
robotiq_85_gripper_server__srv__GripperOpen_Response__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {robotiq_85_gripper_server__srv__GripperOpen_Response__TYPE_NAME, 50, 50},
      {robotiq_85_gripper_server__srv__GripperOpen_Response__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char robotiq_85_gripper_server__srv__GripperOpen_Event__FIELD_NAME__info[] = "info";
static char robotiq_85_gripper_server__srv__GripperOpen_Event__FIELD_NAME__request[] = "request";
static char robotiq_85_gripper_server__srv__GripperOpen_Event__FIELD_NAME__response[] = "response";

static rosidl_runtime_c__type_description__Field robotiq_85_gripper_server__srv__GripperOpen_Event__FIELDS[] = {
  {
    {robotiq_85_gripper_server__srv__GripperOpen_Event__FIELD_NAME__info, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
  {
    {robotiq_85_gripper_server__srv__GripperOpen_Event__FIELD_NAME__request, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {robotiq_85_gripper_server__srv__GripperOpen_Request__TYPE_NAME, 49, 49},
    },
    {NULL, 0, 0},
  },
  {
    {robotiq_85_gripper_server__srv__GripperOpen_Event__FIELD_NAME__response, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {robotiq_85_gripper_server__srv__GripperOpen_Response__TYPE_NAME, 50, 50},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription robotiq_85_gripper_server__srv__GripperOpen_Event__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {robotiq_85_gripper_server__srv__GripperOpen_Request__TYPE_NAME, 49, 49},
    {NULL, 0, 0},
  },
  {
    {robotiq_85_gripper_server__srv__GripperOpen_Response__TYPE_NAME, 50, 50},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
robotiq_85_gripper_server__srv__GripperOpen_Event__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {robotiq_85_gripper_server__srv__GripperOpen_Event__TYPE_NAME, 47, 47},
      {robotiq_85_gripper_server__srv__GripperOpen_Event__FIELDS, 3, 3},
    },
    {robotiq_85_gripper_server__srv__GripperOpen_Event__REFERENCED_TYPE_DESCRIPTIONS, 4, 4},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[1].fields = robotiq_85_gripper_server__srv__GripperOpen_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = robotiq_85_gripper_server__srv__GripperOpen_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[3].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "bool order\n"
  "---\n"
  "bool      status";

static char srv_encoding[] = "srv";
static char implicit_encoding[] = "implicit";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
robotiq_85_gripper_server__srv__GripperOpen__get_individual_type_description_source(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {robotiq_85_gripper_server__srv__GripperOpen__TYPE_NAME, 41, 41},
    {srv_encoding, 3, 3},
    {toplevel_type_raw_source, 31, 31},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
robotiq_85_gripper_server__srv__GripperOpen_Request__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {robotiq_85_gripper_server__srv__GripperOpen_Request__TYPE_NAME, 49, 49},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
robotiq_85_gripper_server__srv__GripperOpen_Response__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {robotiq_85_gripper_server__srv__GripperOpen_Response__TYPE_NAME, 50, 50},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
robotiq_85_gripper_server__srv__GripperOpen_Event__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {robotiq_85_gripper_server__srv__GripperOpen_Event__TYPE_NAME, 47, 47},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
robotiq_85_gripper_server__srv__GripperOpen__get_type_description_sources(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[6];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 6, 6};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *robotiq_85_gripper_server__srv__GripperOpen__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *robotiq_85_gripper_server__srv__GripperOpen_Event__get_individual_type_description_source(NULL);
    sources[3] = *robotiq_85_gripper_server__srv__GripperOpen_Request__get_individual_type_description_source(NULL);
    sources[4] = *robotiq_85_gripper_server__srv__GripperOpen_Response__get_individual_type_description_source(NULL);
    sources[5] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
robotiq_85_gripper_server__srv__GripperOpen_Request__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *robotiq_85_gripper_server__srv__GripperOpen_Request__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
robotiq_85_gripper_server__srv__GripperOpen_Response__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *robotiq_85_gripper_server__srv__GripperOpen_Response__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
robotiq_85_gripper_server__srv__GripperOpen_Event__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[5];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 5, 5};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *robotiq_85_gripper_server__srv__GripperOpen_Event__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *robotiq_85_gripper_server__srv__GripperOpen_Request__get_individual_type_description_source(NULL);
    sources[3] = *robotiq_85_gripper_server__srv__GripperOpen_Response__get_individual_type_description_source(NULL);
    sources[4] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
