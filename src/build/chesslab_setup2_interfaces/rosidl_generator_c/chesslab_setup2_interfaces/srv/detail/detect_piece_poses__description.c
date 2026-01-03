// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from chesslab_setup2_interfaces:srv/DetectPiecePoses.idl
// generated code does not contain a copyright notice

#include "chesslab_setup2_interfaces/srv/detail/detect_piece_poses__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_chesslab_setup2_interfaces
const rosidl_type_hash_t *
chesslab_setup2_interfaces__srv__DetectPiecePoses__get_type_hash(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x79, 0x7d, 0x69, 0x91, 0xc4, 0x07, 0x0c, 0x9d,
      0x14, 0xd8, 0x98, 0x11, 0xdf, 0x20, 0x9c, 0xfa,
      0xe9, 0x14, 0x1f, 0xb3, 0x12, 0x14, 0x52, 0x46,
      0xee, 0x32, 0xfc, 0xa2, 0x9f, 0xa1, 0x82, 0x60,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_chesslab_setup2_interfaces
const rosidl_type_hash_t *
chesslab_setup2_interfaces__srv__DetectPiecePoses_Request__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x2d, 0xba, 0x13, 0x52, 0x47, 0xa2, 0x42, 0x8f,
      0x9a, 0x11, 0xff, 0x41, 0x93, 0xf8, 0x0d, 0x17,
      0x4e, 0x7d, 0x5a, 0x4a, 0x7f, 0x3d, 0x47, 0x97,
      0x72, 0xd4, 0xc1, 0x42, 0x61, 0x30, 0x31, 0xdb,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_chesslab_setup2_interfaces
const rosidl_type_hash_t *
chesslab_setup2_interfaces__srv__DetectPiecePoses_Response__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x47, 0x3b, 0x24, 0x04, 0x8f, 0xba, 0xd9, 0x3a,
      0x9a, 0x40, 0x36, 0x03, 0x22, 0x0b, 0xd6, 0xc2,
      0xd9, 0x48, 0x01, 0x17, 0x81, 0x87, 0x88, 0x10,
      0x91, 0xfc, 0xed, 0x3d, 0xff, 0xbd, 0xb5, 0x35,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_chesslab_setup2_interfaces
const rosidl_type_hash_t *
chesslab_setup2_interfaces__srv__DetectPiecePoses_Event__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x2a, 0xda, 0x57, 0x20, 0x1f, 0xe8, 0x20, 0x33,
      0x10, 0x76, 0x1c, 0x43, 0x92, 0xb4, 0x2d, 0xda,
      0xbf, 0xe8, 0x49, 0x43, 0x41, 0xb6, 0x74, 0xf7,
      0x6c, 0x29, 0xea, 0x03, 0x47, 0x32, 0x50, 0xb0,
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

static char chesslab_setup2_interfaces__srv__DetectPiecePoses__TYPE_NAME[] = "chesslab_setup2_interfaces/srv/DetectPiecePoses";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char chesslab_setup2_interfaces__srv__DetectPiecePoses_Event__TYPE_NAME[] = "chesslab_setup2_interfaces/srv/DetectPiecePoses_Event";
static char chesslab_setup2_interfaces__srv__DetectPiecePoses_Request__TYPE_NAME[] = "chesslab_setup2_interfaces/srv/DetectPiecePoses_Request";
static char chesslab_setup2_interfaces__srv__DetectPiecePoses_Response__TYPE_NAME[] = "chesslab_setup2_interfaces/srv/DetectPiecePoses_Response";
static char service_msgs__msg__ServiceEventInfo__TYPE_NAME[] = "service_msgs/msg/ServiceEventInfo";

// Define type names, field names, and default values
static char chesslab_setup2_interfaces__srv__DetectPiecePoses__FIELD_NAME__request_message[] = "request_message";
static char chesslab_setup2_interfaces__srv__DetectPiecePoses__FIELD_NAME__response_message[] = "response_message";
static char chesslab_setup2_interfaces__srv__DetectPiecePoses__FIELD_NAME__event_message[] = "event_message";

static rosidl_runtime_c__type_description__Field chesslab_setup2_interfaces__srv__DetectPiecePoses__FIELDS[] = {
  {
    {chesslab_setup2_interfaces__srv__DetectPiecePoses__FIELD_NAME__request_message, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {chesslab_setup2_interfaces__srv__DetectPiecePoses_Request__TYPE_NAME, 55, 55},
    },
    {NULL, 0, 0},
  },
  {
    {chesslab_setup2_interfaces__srv__DetectPiecePoses__FIELD_NAME__response_message, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {chesslab_setup2_interfaces__srv__DetectPiecePoses_Response__TYPE_NAME, 56, 56},
    },
    {NULL, 0, 0},
  },
  {
    {chesslab_setup2_interfaces__srv__DetectPiecePoses__FIELD_NAME__event_message, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {chesslab_setup2_interfaces__srv__DetectPiecePoses_Event__TYPE_NAME, 53, 53},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription chesslab_setup2_interfaces__srv__DetectPiecePoses__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {chesslab_setup2_interfaces__srv__DetectPiecePoses_Event__TYPE_NAME, 53, 53},
    {NULL, 0, 0},
  },
  {
    {chesslab_setup2_interfaces__srv__DetectPiecePoses_Request__TYPE_NAME, 55, 55},
    {NULL, 0, 0},
  },
  {
    {chesslab_setup2_interfaces__srv__DetectPiecePoses_Response__TYPE_NAME, 56, 56},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
chesslab_setup2_interfaces__srv__DetectPiecePoses__get_type_description(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {chesslab_setup2_interfaces__srv__DetectPiecePoses__TYPE_NAME, 47, 47},
      {chesslab_setup2_interfaces__srv__DetectPiecePoses__FIELDS, 3, 3},
    },
    {chesslab_setup2_interfaces__srv__DetectPiecePoses__REFERENCED_TYPE_DESCRIPTIONS, 5, 5},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[1].fields = chesslab_setup2_interfaces__srv__DetectPiecePoses_Event__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = chesslab_setup2_interfaces__srv__DetectPiecePoses_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[3].fields = chesslab_setup2_interfaces__srv__DetectPiecePoses_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[4].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char chesslab_setup2_interfaces__srv__DetectPiecePoses_Request__FIELD_NAME__structure_needs_at_least_one_member[] = "structure_needs_at_least_one_member";

static rosidl_runtime_c__type_description__Field chesslab_setup2_interfaces__srv__DetectPiecePoses_Request__FIELDS[] = {
  {
    {chesslab_setup2_interfaces__srv__DetectPiecePoses_Request__FIELD_NAME__structure_needs_at_least_one_member, 35, 35},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
chesslab_setup2_interfaces__srv__DetectPiecePoses_Request__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {chesslab_setup2_interfaces__srv__DetectPiecePoses_Request__TYPE_NAME, 55, 55},
      {chesslab_setup2_interfaces__srv__DetectPiecePoses_Request__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char chesslab_setup2_interfaces__srv__DetectPiecePoses_Response__FIELD_NAME__success[] = "success";
static char chesslab_setup2_interfaces__srv__DetectPiecePoses_Response__FIELD_NAME__num_pieces_detected[] = "num_pieces_detected";
static char chesslab_setup2_interfaces__srv__DetectPiecePoses_Response__FIELD_NAME__message[] = "message";

static rosidl_runtime_c__type_description__Field chesslab_setup2_interfaces__srv__DetectPiecePoses_Response__FIELDS[] = {
  {
    {chesslab_setup2_interfaces__srv__DetectPiecePoses_Response__FIELD_NAME__success, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {chesslab_setup2_interfaces__srv__DetectPiecePoses_Response__FIELD_NAME__num_pieces_detected, 19, 19},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {chesslab_setup2_interfaces__srv__DetectPiecePoses_Response__FIELD_NAME__message, 7, 7},
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
chesslab_setup2_interfaces__srv__DetectPiecePoses_Response__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {chesslab_setup2_interfaces__srv__DetectPiecePoses_Response__TYPE_NAME, 56, 56},
      {chesslab_setup2_interfaces__srv__DetectPiecePoses_Response__FIELDS, 3, 3},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char chesslab_setup2_interfaces__srv__DetectPiecePoses_Event__FIELD_NAME__info[] = "info";
static char chesslab_setup2_interfaces__srv__DetectPiecePoses_Event__FIELD_NAME__request[] = "request";
static char chesslab_setup2_interfaces__srv__DetectPiecePoses_Event__FIELD_NAME__response[] = "response";

static rosidl_runtime_c__type_description__Field chesslab_setup2_interfaces__srv__DetectPiecePoses_Event__FIELDS[] = {
  {
    {chesslab_setup2_interfaces__srv__DetectPiecePoses_Event__FIELD_NAME__info, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
  {
    {chesslab_setup2_interfaces__srv__DetectPiecePoses_Event__FIELD_NAME__request, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {chesslab_setup2_interfaces__srv__DetectPiecePoses_Request__TYPE_NAME, 55, 55},
    },
    {NULL, 0, 0},
  },
  {
    {chesslab_setup2_interfaces__srv__DetectPiecePoses_Event__FIELD_NAME__response, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {chesslab_setup2_interfaces__srv__DetectPiecePoses_Response__TYPE_NAME, 56, 56},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription chesslab_setup2_interfaces__srv__DetectPiecePoses_Event__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {chesslab_setup2_interfaces__srv__DetectPiecePoses_Request__TYPE_NAME, 55, 55},
    {NULL, 0, 0},
  },
  {
    {chesslab_setup2_interfaces__srv__DetectPiecePoses_Response__TYPE_NAME, 56, 56},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
chesslab_setup2_interfaces__srv__DetectPiecePoses_Event__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {chesslab_setup2_interfaces__srv__DetectPiecePoses_Event__TYPE_NAME, 53, 53},
      {chesslab_setup2_interfaces__srv__DetectPiecePoses_Event__FIELDS, 3, 3},
    },
    {chesslab_setup2_interfaces__srv__DetectPiecePoses_Event__REFERENCED_TYPE_DESCRIPTIONS, 4, 4},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[1].fields = chesslab_setup2_interfaces__srv__DetectPiecePoses_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = chesslab_setup2_interfaces__srv__DetectPiecePoses_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[3].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# Service to detect all chess pieces and set their poses in rviz\n"
  "# Request: empty (detect all pieces)\n"
  "---\n"
  "# Response: success status and number of pieces detected\n"
  "bool success\n"
  "int16 num_pieces_detected\n"
  "string message";

static char srv_encoding[] = "srv";
static char implicit_encoding[] = "implicit";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
chesslab_setup2_interfaces__srv__DetectPiecePoses__get_individual_type_description_source(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {chesslab_setup2_interfaces__srv__DetectPiecePoses__TYPE_NAME, 47, 47},
    {srv_encoding, 3, 3},
    {toplevel_type_raw_source, 217, 217},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
chesslab_setup2_interfaces__srv__DetectPiecePoses_Request__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {chesslab_setup2_interfaces__srv__DetectPiecePoses_Request__TYPE_NAME, 55, 55},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
chesslab_setup2_interfaces__srv__DetectPiecePoses_Response__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {chesslab_setup2_interfaces__srv__DetectPiecePoses_Response__TYPE_NAME, 56, 56},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
chesslab_setup2_interfaces__srv__DetectPiecePoses_Event__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {chesslab_setup2_interfaces__srv__DetectPiecePoses_Event__TYPE_NAME, 53, 53},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
chesslab_setup2_interfaces__srv__DetectPiecePoses__get_type_description_sources(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[6];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 6, 6};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *chesslab_setup2_interfaces__srv__DetectPiecePoses__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *chesslab_setup2_interfaces__srv__DetectPiecePoses_Event__get_individual_type_description_source(NULL);
    sources[3] = *chesslab_setup2_interfaces__srv__DetectPiecePoses_Request__get_individual_type_description_source(NULL);
    sources[4] = *chesslab_setup2_interfaces__srv__DetectPiecePoses_Response__get_individual_type_description_source(NULL);
    sources[5] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
chesslab_setup2_interfaces__srv__DetectPiecePoses_Request__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *chesslab_setup2_interfaces__srv__DetectPiecePoses_Request__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
chesslab_setup2_interfaces__srv__DetectPiecePoses_Response__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *chesslab_setup2_interfaces__srv__DetectPiecePoses_Response__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
chesslab_setup2_interfaces__srv__DetectPiecePoses_Event__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[5];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 5, 5};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *chesslab_setup2_interfaces__srv__DetectPiecePoses_Event__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *chesslab_setup2_interfaces__srv__DetectPiecePoses_Request__get_individual_type_description_source(NULL);
    sources[3] = *chesslab_setup2_interfaces__srv__DetectPiecePoses_Response__get_individual_type_description_source(NULL);
    sources[4] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
