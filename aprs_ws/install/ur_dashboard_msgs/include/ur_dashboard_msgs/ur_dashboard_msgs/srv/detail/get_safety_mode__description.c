// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from ur_dashboard_msgs:srv/GetSafetyMode.idl
// generated code does not contain a copyright notice

#include "ur_dashboard_msgs/srv/detail/get_safety_mode__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_ur_dashboard_msgs
const rosidl_type_hash_t *
ur_dashboard_msgs__srv__GetSafetyMode__get_type_hash(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xe7, 0x3f, 0x0c, 0xd9, 0x25, 0x9b, 0xe7, 0x25,
      0xb6, 0x8a, 0x9c, 0x1d, 0x3e, 0x5a, 0x41, 0x6d,
      0x92, 0xad, 0x2e, 0x3c, 0xf5, 0xf4, 0x9b, 0x5f,
      0x6d, 0xb7, 0x7b, 0xa2, 0x04, 0xf3, 0x53, 0x7a,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_ur_dashboard_msgs
const rosidl_type_hash_t *
ur_dashboard_msgs__srv__GetSafetyMode_Request__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x49, 0xb9, 0xb3, 0x00, 0xd7, 0x6c, 0xe2, 0xe2,
      0x7e, 0xa5, 0x09, 0x1d, 0x68, 0x1c, 0x40, 0xd5,
      0xaf, 0x76, 0x25, 0xbd, 0x90, 0x51, 0x9f, 0x3d,
      0x40, 0x9c, 0x5b, 0x6f, 0x5d, 0x0f, 0x87, 0x3c,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_ur_dashboard_msgs
const rosidl_type_hash_t *
ur_dashboard_msgs__srv__GetSafetyMode_Response__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x3d, 0x54, 0x9d, 0x93, 0x3f, 0xb8, 0x9a, 0xab,
      0x97, 0xa1, 0x92, 0x37, 0x52, 0xa0, 0xa5, 0x7c,
      0x77, 0x88, 0xf5, 0x48, 0xbb, 0x08, 0x19, 0x17,
      0x39, 0x07, 0xf2, 0xae, 0x16, 0xda, 0x2c, 0xfa,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_ur_dashboard_msgs
const rosidl_type_hash_t *
ur_dashboard_msgs__srv__GetSafetyMode_Event__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x2e, 0xf4, 0x7a, 0x9e, 0xe8, 0x6d, 0x24, 0x26,
      0x31, 0x10, 0x85, 0x5a, 0xa7, 0x2b, 0x58, 0x5c,
      0x9d, 0x19, 0x2b, 0x8f, 0xe1, 0xf6, 0xdc, 0xd2,
      0x00, 0x7b, 0x3e, 0xac, 0x95, 0xd6, 0xc6, 0xaa,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "builtin_interfaces/msg/detail/time__functions.h"
#include "ur_dashboard_msgs/msg/detail/safety_mode__functions.h"
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
static const rosidl_type_hash_t ur_dashboard_msgs__msg__SafetyMode__EXPECTED_HASH = {1, {
    0x9e, 0xb2, 0x71, 0x6e, 0x69, 0x05, 0xf0, 0x6e,
    0x4e, 0xb6, 0x0a, 0xf2, 0x67, 0x12, 0x66, 0x04,
    0x86, 0xe9, 0x09, 0x02, 0x6a, 0xa8, 0x9c, 0x55,
    0x3d, 0xd6, 0x33, 0xf1, 0xfb, 0x22, 0xf5, 0x92,
  }};
#endif

static char ur_dashboard_msgs__srv__GetSafetyMode__TYPE_NAME[] = "ur_dashboard_msgs/srv/GetSafetyMode";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char service_msgs__msg__ServiceEventInfo__TYPE_NAME[] = "service_msgs/msg/ServiceEventInfo";
static char ur_dashboard_msgs__msg__SafetyMode__TYPE_NAME[] = "ur_dashboard_msgs/msg/SafetyMode";
static char ur_dashboard_msgs__srv__GetSafetyMode_Event__TYPE_NAME[] = "ur_dashboard_msgs/srv/GetSafetyMode_Event";
static char ur_dashboard_msgs__srv__GetSafetyMode_Request__TYPE_NAME[] = "ur_dashboard_msgs/srv/GetSafetyMode_Request";
static char ur_dashboard_msgs__srv__GetSafetyMode_Response__TYPE_NAME[] = "ur_dashboard_msgs/srv/GetSafetyMode_Response";

// Define type names, field names, and default values
static char ur_dashboard_msgs__srv__GetSafetyMode__FIELD_NAME__request_message[] = "request_message";
static char ur_dashboard_msgs__srv__GetSafetyMode__FIELD_NAME__response_message[] = "response_message";
static char ur_dashboard_msgs__srv__GetSafetyMode__FIELD_NAME__event_message[] = "event_message";

static rosidl_runtime_c__type_description__Field ur_dashboard_msgs__srv__GetSafetyMode__FIELDS[] = {
  {
    {ur_dashboard_msgs__srv__GetSafetyMode__FIELD_NAME__request_message, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {ur_dashboard_msgs__srv__GetSafetyMode_Request__TYPE_NAME, 43, 43},
    },
    {NULL, 0, 0},
  },
  {
    {ur_dashboard_msgs__srv__GetSafetyMode__FIELD_NAME__response_message, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {ur_dashboard_msgs__srv__GetSafetyMode_Response__TYPE_NAME, 44, 44},
    },
    {NULL, 0, 0},
  },
  {
    {ur_dashboard_msgs__srv__GetSafetyMode__FIELD_NAME__event_message, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {ur_dashboard_msgs__srv__GetSafetyMode_Event__TYPE_NAME, 41, 41},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription ur_dashboard_msgs__srv__GetSafetyMode__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
  {
    {ur_dashboard_msgs__msg__SafetyMode__TYPE_NAME, 32, 32},
    {NULL, 0, 0},
  },
  {
    {ur_dashboard_msgs__srv__GetSafetyMode_Event__TYPE_NAME, 41, 41},
    {NULL, 0, 0},
  },
  {
    {ur_dashboard_msgs__srv__GetSafetyMode_Request__TYPE_NAME, 43, 43},
    {NULL, 0, 0},
  },
  {
    {ur_dashboard_msgs__srv__GetSafetyMode_Response__TYPE_NAME, 44, 44},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
ur_dashboard_msgs__srv__GetSafetyMode__get_type_description(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {ur_dashboard_msgs__srv__GetSafetyMode__TYPE_NAME, 35, 35},
      {ur_dashboard_msgs__srv__GetSafetyMode__FIELDS, 3, 3},
    },
    {ur_dashboard_msgs__srv__GetSafetyMode__REFERENCED_TYPE_DESCRIPTIONS, 6, 6},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&ur_dashboard_msgs__msg__SafetyMode__EXPECTED_HASH, ur_dashboard_msgs__msg__SafetyMode__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[2].fields = ur_dashboard_msgs__msg__SafetyMode__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[3].fields = ur_dashboard_msgs__srv__GetSafetyMode_Event__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[4].fields = ur_dashboard_msgs__srv__GetSafetyMode_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[5].fields = ur_dashboard_msgs__srv__GetSafetyMode_Response__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char ur_dashboard_msgs__srv__GetSafetyMode_Request__FIELD_NAME__structure_needs_at_least_one_member[] = "structure_needs_at_least_one_member";

static rosidl_runtime_c__type_description__Field ur_dashboard_msgs__srv__GetSafetyMode_Request__FIELDS[] = {
  {
    {ur_dashboard_msgs__srv__GetSafetyMode_Request__FIELD_NAME__structure_needs_at_least_one_member, 35, 35},
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
ur_dashboard_msgs__srv__GetSafetyMode_Request__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {ur_dashboard_msgs__srv__GetSafetyMode_Request__TYPE_NAME, 43, 43},
      {ur_dashboard_msgs__srv__GetSafetyMode_Request__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char ur_dashboard_msgs__srv__GetSafetyMode_Response__FIELD_NAME__safety_mode[] = "safety_mode";
static char ur_dashboard_msgs__srv__GetSafetyMode_Response__FIELD_NAME__answer[] = "answer";
static char ur_dashboard_msgs__srv__GetSafetyMode_Response__FIELD_NAME__success[] = "success";

static rosidl_runtime_c__type_description__Field ur_dashboard_msgs__srv__GetSafetyMode_Response__FIELDS[] = {
  {
    {ur_dashboard_msgs__srv__GetSafetyMode_Response__FIELD_NAME__safety_mode, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {ur_dashboard_msgs__msg__SafetyMode__TYPE_NAME, 32, 32},
    },
    {NULL, 0, 0},
  },
  {
    {ur_dashboard_msgs__srv__GetSafetyMode_Response__FIELD_NAME__answer, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ur_dashboard_msgs__srv__GetSafetyMode_Response__FIELD_NAME__success, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription ur_dashboard_msgs__srv__GetSafetyMode_Response__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {ur_dashboard_msgs__msg__SafetyMode__TYPE_NAME, 32, 32},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
ur_dashboard_msgs__srv__GetSafetyMode_Response__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {ur_dashboard_msgs__srv__GetSafetyMode_Response__TYPE_NAME, 44, 44},
      {ur_dashboard_msgs__srv__GetSafetyMode_Response__FIELDS, 3, 3},
    },
    {ur_dashboard_msgs__srv__GetSafetyMode_Response__REFERENCED_TYPE_DESCRIPTIONS, 1, 1},
  };
  if (!constructed) {
    assert(0 == memcmp(&ur_dashboard_msgs__msg__SafetyMode__EXPECTED_HASH, ur_dashboard_msgs__msg__SafetyMode__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = ur_dashboard_msgs__msg__SafetyMode__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char ur_dashboard_msgs__srv__GetSafetyMode_Event__FIELD_NAME__info[] = "info";
static char ur_dashboard_msgs__srv__GetSafetyMode_Event__FIELD_NAME__request[] = "request";
static char ur_dashboard_msgs__srv__GetSafetyMode_Event__FIELD_NAME__response[] = "response";

static rosidl_runtime_c__type_description__Field ur_dashboard_msgs__srv__GetSafetyMode_Event__FIELDS[] = {
  {
    {ur_dashboard_msgs__srv__GetSafetyMode_Event__FIELD_NAME__info, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
  {
    {ur_dashboard_msgs__srv__GetSafetyMode_Event__FIELD_NAME__request, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {ur_dashboard_msgs__srv__GetSafetyMode_Request__TYPE_NAME, 43, 43},
    },
    {NULL, 0, 0},
  },
  {
    {ur_dashboard_msgs__srv__GetSafetyMode_Event__FIELD_NAME__response, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {ur_dashboard_msgs__srv__GetSafetyMode_Response__TYPE_NAME, 44, 44},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription ur_dashboard_msgs__srv__GetSafetyMode_Event__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
  {
    {ur_dashboard_msgs__msg__SafetyMode__TYPE_NAME, 32, 32},
    {NULL, 0, 0},
  },
  {
    {ur_dashboard_msgs__srv__GetSafetyMode_Request__TYPE_NAME, 43, 43},
    {NULL, 0, 0},
  },
  {
    {ur_dashboard_msgs__srv__GetSafetyMode_Response__TYPE_NAME, 44, 44},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
ur_dashboard_msgs__srv__GetSafetyMode_Event__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {ur_dashboard_msgs__srv__GetSafetyMode_Event__TYPE_NAME, 41, 41},
      {ur_dashboard_msgs__srv__GetSafetyMode_Event__FIELDS, 3, 3},
    },
    {ur_dashboard_msgs__srv__GetSafetyMode_Event__REFERENCED_TYPE_DESCRIPTIONS, 5, 5},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&ur_dashboard_msgs__msg__SafetyMode__EXPECTED_HASH, ur_dashboard_msgs__msg__SafetyMode__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[2].fields = ur_dashboard_msgs__msg__SafetyMode__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[3].fields = ur_dashboard_msgs__srv__GetSafetyMode_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[4].fields = ur_dashboard_msgs__srv__GetSafetyMode_Response__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "---\n"
  "SafetyMode safety_mode\n"
  "string answer\n"
  "bool success";

static char srv_encoding[] = "srv";
static char implicit_encoding[] = "implicit";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
ur_dashboard_msgs__srv__GetSafetyMode__get_individual_type_description_source(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {ur_dashboard_msgs__srv__GetSafetyMode__TYPE_NAME, 35, 35},
    {srv_encoding, 3, 3},
    {toplevel_type_raw_source, 54, 54},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
ur_dashboard_msgs__srv__GetSafetyMode_Request__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {ur_dashboard_msgs__srv__GetSafetyMode_Request__TYPE_NAME, 43, 43},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
ur_dashboard_msgs__srv__GetSafetyMode_Response__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {ur_dashboard_msgs__srv__GetSafetyMode_Response__TYPE_NAME, 44, 44},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
ur_dashboard_msgs__srv__GetSafetyMode_Event__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {ur_dashboard_msgs__srv__GetSafetyMode_Event__TYPE_NAME, 41, 41},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
ur_dashboard_msgs__srv__GetSafetyMode__get_type_description_sources(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[7];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 7, 7};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *ur_dashboard_msgs__srv__GetSafetyMode__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    sources[3] = *ur_dashboard_msgs__msg__SafetyMode__get_individual_type_description_source(NULL);
    sources[4] = *ur_dashboard_msgs__srv__GetSafetyMode_Event__get_individual_type_description_source(NULL);
    sources[5] = *ur_dashboard_msgs__srv__GetSafetyMode_Request__get_individual_type_description_source(NULL);
    sources[6] = *ur_dashboard_msgs__srv__GetSafetyMode_Response__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
ur_dashboard_msgs__srv__GetSafetyMode_Request__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *ur_dashboard_msgs__srv__GetSafetyMode_Request__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
ur_dashboard_msgs__srv__GetSafetyMode_Response__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[2];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 2, 2};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *ur_dashboard_msgs__srv__GetSafetyMode_Response__get_individual_type_description_source(NULL),
    sources[1] = *ur_dashboard_msgs__msg__SafetyMode__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
ur_dashboard_msgs__srv__GetSafetyMode_Event__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[6];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 6, 6};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *ur_dashboard_msgs__srv__GetSafetyMode_Event__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    sources[3] = *ur_dashboard_msgs__msg__SafetyMode__get_individual_type_description_source(NULL);
    sources[4] = *ur_dashboard_msgs__srv__GetSafetyMode_Request__get_individual_type_description_source(NULL);
    sources[5] = *ur_dashboard_msgs__srv__GetSafetyMode_Response__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
