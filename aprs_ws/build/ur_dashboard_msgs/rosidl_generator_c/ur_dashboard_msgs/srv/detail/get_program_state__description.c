// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from ur_dashboard_msgs:srv/GetProgramState.idl
// generated code does not contain a copyright notice

#include "ur_dashboard_msgs/srv/detail/get_program_state__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_ur_dashboard_msgs
const rosidl_type_hash_t *
ur_dashboard_msgs__srv__GetProgramState__get_type_hash(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x29, 0x2c, 0x51, 0x68, 0x72, 0xa5, 0x57, 0x6f,
      0x05, 0xcb, 0x58, 0x8f, 0x4c, 0xbf, 0x01, 0xa1,
      0x74, 0x65, 0x05, 0x1d, 0x62, 0x7a, 0xa9, 0x6e,
      0x2b, 0x4d, 0x92, 0x91, 0x4e, 0x27, 0xda, 0x2d,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_ur_dashboard_msgs
const rosidl_type_hash_t *
ur_dashboard_msgs__srv__GetProgramState_Request__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x7d, 0x1c, 0x3f, 0x1a, 0x4e, 0x0c, 0xd4, 0xfa,
      0x56, 0xe3, 0x85, 0x4c, 0x22, 0x26, 0xa6, 0xa7,
      0x31, 0x25, 0x68, 0x67, 0x79, 0x8b, 0x7f, 0x1b,
      0x63, 0x7b, 0x3f, 0x9b, 0xc4, 0x37, 0x48, 0x91,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_ur_dashboard_msgs
const rosidl_type_hash_t *
ur_dashboard_msgs__srv__GetProgramState_Response__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x88, 0x56, 0x5c, 0x86, 0x45, 0x32, 0x18, 0xfc,
      0x0d, 0x73, 0xd8, 0xde, 0xc9, 0x65, 0xac, 0xd0,
      0x61, 0xa2, 0x52, 0xa7, 0x9d, 0x44, 0x47, 0x79,
      0x19, 0x4f, 0x3c, 0xc0, 0xb9, 0x3d, 0x92, 0x89,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_ur_dashboard_msgs
const rosidl_type_hash_t *
ur_dashboard_msgs__srv__GetProgramState_Event__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x09, 0x45, 0xbb, 0xc9, 0x2e, 0x75, 0xe5, 0x5d,
      0xe1, 0xa7, 0xdb, 0x3d, 0x13, 0x81, 0x83, 0x43,
      0x08, 0x39, 0x26, 0x27, 0x92, 0xcb, 0x34, 0x35,
      0x7e, 0x32, 0x3a, 0x59, 0x89, 0xda, 0x69, 0x6e,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "service_msgs/msg/detail/service_event_info__functions.h"
#include "ur_dashboard_msgs/msg/detail/program_state__functions.h"
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
static const rosidl_type_hash_t ur_dashboard_msgs__msg__ProgramState__EXPECTED_HASH = {1, {
    0x20, 0xe0, 0x96, 0x06, 0xe4, 0xcb, 0xa2, 0x0c,
    0xbe, 0x31, 0x68, 0x09, 0x18, 0xf2, 0x5c, 0x77,
    0x0a, 0x2c, 0x46, 0xaf, 0xc4, 0x4c, 0xa9, 0x1f,
    0x0c, 0xb3, 0x30, 0x55, 0x93, 0x33, 0xed, 0x76,
  }};
#endif

static char ur_dashboard_msgs__srv__GetProgramState__TYPE_NAME[] = "ur_dashboard_msgs/srv/GetProgramState";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char service_msgs__msg__ServiceEventInfo__TYPE_NAME[] = "service_msgs/msg/ServiceEventInfo";
static char ur_dashboard_msgs__msg__ProgramState__TYPE_NAME[] = "ur_dashboard_msgs/msg/ProgramState";
static char ur_dashboard_msgs__srv__GetProgramState_Event__TYPE_NAME[] = "ur_dashboard_msgs/srv/GetProgramState_Event";
static char ur_dashboard_msgs__srv__GetProgramState_Request__TYPE_NAME[] = "ur_dashboard_msgs/srv/GetProgramState_Request";
static char ur_dashboard_msgs__srv__GetProgramState_Response__TYPE_NAME[] = "ur_dashboard_msgs/srv/GetProgramState_Response";

// Define type names, field names, and default values
static char ur_dashboard_msgs__srv__GetProgramState__FIELD_NAME__request_message[] = "request_message";
static char ur_dashboard_msgs__srv__GetProgramState__FIELD_NAME__response_message[] = "response_message";
static char ur_dashboard_msgs__srv__GetProgramState__FIELD_NAME__event_message[] = "event_message";

static rosidl_runtime_c__type_description__Field ur_dashboard_msgs__srv__GetProgramState__FIELDS[] = {
  {
    {ur_dashboard_msgs__srv__GetProgramState__FIELD_NAME__request_message, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {ur_dashboard_msgs__srv__GetProgramState_Request__TYPE_NAME, 45, 45},
    },
    {NULL, 0, 0},
  },
  {
    {ur_dashboard_msgs__srv__GetProgramState__FIELD_NAME__response_message, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {ur_dashboard_msgs__srv__GetProgramState_Response__TYPE_NAME, 46, 46},
    },
    {NULL, 0, 0},
  },
  {
    {ur_dashboard_msgs__srv__GetProgramState__FIELD_NAME__event_message, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {ur_dashboard_msgs__srv__GetProgramState_Event__TYPE_NAME, 43, 43},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription ur_dashboard_msgs__srv__GetProgramState__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
  {
    {ur_dashboard_msgs__msg__ProgramState__TYPE_NAME, 34, 34},
    {NULL, 0, 0},
  },
  {
    {ur_dashboard_msgs__srv__GetProgramState_Event__TYPE_NAME, 43, 43},
    {NULL, 0, 0},
  },
  {
    {ur_dashboard_msgs__srv__GetProgramState_Request__TYPE_NAME, 45, 45},
    {NULL, 0, 0},
  },
  {
    {ur_dashboard_msgs__srv__GetProgramState_Response__TYPE_NAME, 46, 46},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
ur_dashboard_msgs__srv__GetProgramState__get_type_description(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {ur_dashboard_msgs__srv__GetProgramState__TYPE_NAME, 37, 37},
      {ur_dashboard_msgs__srv__GetProgramState__FIELDS, 3, 3},
    },
    {ur_dashboard_msgs__srv__GetProgramState__REFERENCED_TYPE_DESCRIPTIONS, 6, 6},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&ur_dashboard_msgs__msg__ProgramState__EXPECTED_HASH, ur_dashboard_msgs__msg__ProgramState__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[2].fields = ur_dashboard_msgs__msg__ProgramState__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[3].fields = ur_dashboard_msgs__srv__GetProgramState_Event__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[4].fields = ur_dashboard_msgs__srv__GetProgramState_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[5].fields = ur_dashboard_msgs__srv__GetProgramState_Response__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char ur_dashboard_msgs__srv__GetProgramState_Request__FIELD_NAME__structure_needs_at_least_one_member[] = "structure_needs_at_least_one_member";

static rosidl_runtime_c__type_description__Field ur_dashboard_msgs__srv__GetProgramState_Request__FIELDS[] = {
  {
    {ur_dashboard_msgs__srv__GetProgramState_Request__FIELD_NAME__structure_needs_at_least_one_member, 35, 35},
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
ur_dashboard_msgs__srv__GetProgramState_Request__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {ur_dashboard_msgs__srv__GetProgramState_Request__TYPE_NAME, 45, 45},
      {ur_dashboard_msgs__srv__GetProgramState_Request__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char ur_dashboard_msgs__srv__GetProgramState_Response__FIELD_NAME__state[] = "state";
static char ur_dashboard_msgs__srv__GetProgramState_Response__FIELD_NAME__program_name[] = "program_name";
static char ur_dashboard_msgs__srv__GetProgramState_Response__FIELD_NAME__answer[] = "answer";
static char ur_dashboard_msgs__srv__GetProgramState_Response__FIELD_NAME__success[] = "success";

static rosidl_runtime_c__type_description__Field ur_dashboard_msgs__srv__GetProgramState_Response__FIELDS[] = {
  {
    {ur_dashboard_msgs__srv__GetProgramState_Response__FIELD_NAME__state, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {ur_dashboard_msgs__msg__ProgramState__TYPE_NAME, 34, 34},
    },
    {NULL, 0, 0},
  },
  {
    {ur_dashboard_msgs__srv__GetProgramState_Response__FIELD_NAME__program_name, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ur_dashboard_msgs__srv__GetProgramState_Response__FIELD_NAME__answer, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ur_dashboard_msgs__srv__GetProgramState_Response__FIELD_NAME__success, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription ur_dashboard_msgs__srv__GetProgramState_Response__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {ur_dashboard_msgs__msg__ProgramState__TYPE_NAME, 34, 34},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
ur_dashboard_msgs__srv__GetProgramState_Response__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {ur_dashboard_msgs__srv__GetProgramState_Response__TYPE_NAME, 46, 46},
      {ur_dashboard_msgs__srv__GetProgramState_Response__FIELDS, 4, 4},
    },
    {ur_dashboard_msgs__srv__GetProgramState_Response__REFERENCED_TYPE_DESCRIPTIONS, 1, 1},
  };
  if (!constructed) {
    assert(0 == memcmp(&ur_dashboard_msgs__msg__ProgramState__EXPECTED_HASH, ur_dashboard_msgs__msg__ProgramState__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = ur_dashboard_msgs__msg__ProgramState__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char ur_dashboard_msgs__srv__GetProgramState_Event__FIELD_NAME__info[] = "info";
static char ur_dashboard_msgs__srv__GetProgramState_Event__FIELD_NAME__request[] = "request";
static char ur_dashboard_msgs__srv__GetProgramState_Event__FIELD_NAME__response[] = "response";

static rosidl_runtime_c__type_description__Field ur_dashboard_msgs__srv__GetProgramState_Event__FIELDS[] = {
  {
    {ur_dashboard_msgs__srv__GetProgramState_Event__FIELD_NAME__info, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
  {
    {ur_dashboard_msgs__srv__GetProgramState_Event__FIELD_NAME__request, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {ur_dashboard_msgs__srv__GetProgramState_Request__TYPE_NAME, 45, 45},
    },
    {NULL, 0, 0},
  },
  {
    {ur_dashboard_msgs__srv__GetProgramState_Event__FIELD_NAME__response, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {ur_dashboard_msgs__srv__GetProgramState_Response__TYPE_NAME, 46, 46},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription ur_dashboard_msgs__srv__GetProgramState_Event__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
  {
    {ur_dashboard_msgs__msg__ProgramState__TYPE_NAME, 34, 34},
    {NULL, 0, 0},
  },
  {
    {ur_dashboard_msgs__srv__GetProgramState_Request__TYPE_NAME, 45, 45},
    {NULL, 0, 0},
  },
  {
    {ur_dashboard_msgs__srv__GetProgramState_Response__TYPE_NAME, 46, 46},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
ur_dashboard_msgs__srv__GetProgramState_Event__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {ur_dashboard_msgs__srv__GetProgramState_Event__TYPE_NAME, 43, 43},
      {ur_dashboard_msgs__srv__GetProgramState_Event__FIELDS, 3, 3},
    },
    {ur_dashboard_msgs__srv__GetProgramState_Event__REFERENCED_TYPE_DESCRIPTIONS, 5, 5},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&ur_dashboard_msgs__msg__ProgramState__EXPECTED_HASH, ur_dashboard_msgs__msg__ProgramState__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[2].fields = ur_dashboard_msgs__msg__ProgramState__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[3].fields = ur_dashboard_msgs__srv__GetProgramState_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[4].fields = ur_dashboard_msgs__srv__GetProgramState_Response__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "---\n"
  "ProgramState state\n"
  "string program_name\n"
  "string answer\n"
  "bool success";

static char srv_encoding[] = "srv";
static char implicit_encoding[] = "implicit";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
ur_dashboard_msgs__srv__GetProgramState__get_individual_type_description_source(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {ur_dashboard_msgs__srv__GetProgramState__TYPE_NAME, 37, 37},
    {srv_encoding, 3, 3},
    {toplevel_type_raw_source, 70, 70},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
ur_dashboard_msgs__srv__GetProgramState_Request__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {ur_dashboard_msgs__srv__GetProgramState_Request__TYPE_NAME, 45, 45},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
ur_dashboard_msgs__srv__GetProgramState_Response__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {ur_dashboard_msgs__srv__GetProgramState_Response__TYPE_NAME, 46, 46},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
ur_dashboard_msgs__srv__GetProgramState_Event__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {ur_dashboard_msgs__srv__GetProgramState_Event__TYPE_NAME, 43, 43},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
ur_dashboard_msgs__srv__GetProgramState__get_type_description_sources(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[7];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 7, 7};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *ur_dashboard_msgs__srv__GetProgramState__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    sources[3] = *ur_dashboard_msgs__msg__ProgramState__get_individual_type_description_source(NULL);
    sources[4] = *ur_dashboard_msgs__srv__GetProgramState_Event__get_individual_type_description_source(NULL);
    sources[5] = *ur_dashboard_msgs__srv__GetProgramState_Request__get_individual_type_description_source(NULL);
    sources[6] = *ur_dashboard_msgs__srv__GetProgramState_Response__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
ur_dashboard_msgs__srv__GetProgramState_Request__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *ur_dashboard_msgs__srv__GetProgramState_Request__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
ur_dashboard_msgs__srv__GetProgramState_Response__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[2];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 2, 2};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *ur_dashboard_msgs__srv__GetProgramState_Response__get_individual_type_description_source(NULL),
    sources[1] = *ur_dashboard_msgs__msg__ProgramState__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
ur_dashboard_msgs__srv__GetProgramState_Event__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[6];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 6, 6};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *ur_dashboard_msgs__srv__GetProgramState_Event__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    sources[3] = *ur_dashboard_msgs__msg__ProgramState__get_individual_type_description_source(NULL);
    sources[4] = *ur_dashboard_msgs__srv__GetProgramState_Request__get_individual_type_description_source(NULL);
    sources[5] = *ur_dashboard_msgs__srv__GetProgramState_Response__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
