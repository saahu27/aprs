// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from ur_msgs:srv/SetSpeedSliderFraction.idl
// generated code does not contain a copyright notice

#include "ur_msgs/srv/detail/set_speed_slider_fraction__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_ur_msgs
const rosidl_type_hash_t *
ur_msgs__srv__SetSpeedSliderFraction__get_type_hash(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x04, 0xad, 0x37, 0xcc, 0xb2, 0x29, 0xfa, 0x4b,
      0xce, 0x24, 0xdb, 0x36, 0x23, 0x0f, 0x09, 0xf4,
      0x16, 0xa1, 0xa6, 0x37, 0xd3, 0xb2, 0x96, 0x02,
      0x90, 0x7f, 0x56, 0x75, 0x12, 0x5d, 0x40, 0x2a,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_ur_msgs
const rosidl_type_hash_t *
ur_msgs__srv__SetSpeedSliderFraction_Request__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xa1, 0x3c, 0xa0, 0x02, 0xa5, 0x9a, 0x7e, 0x4f,
      0xc8, 0x4d, 0x06, 0x8d, 0x02, 0x20, 0x1e, 0x46,
      0x66, 0x93, 0x04, 0x7b, 0x54, 0x2d, 0xd0, 0xe0,
      0x16, 0x51, 0x31, 0x50, 0x83, 0xac, 0xfe, 0x80,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_ur_msgs
const rosidl_type_hash_t *
ur_msgs__srv__SetSpeedSliderFraction_Response__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xcf, 0x3c, 0xe7, 0xee, 0x7b, 0x10, 0x25, 0xb8,
      0x72, 0x95, 0xf5, 0xe1, 0x61, 0x8f, 0x14, 0x15,
      0x5c, 0x51, 0x1e, 0xcb, 0x26, 0xd7, 0x22, 0xe2,
      0xdf, 0xd5, 0x70, 0x00, 0x30, 0xa5, 0x0a, 0x3f,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_ur_msgs
const rosidl_type_hash_t *
ur_msgs__srv__SetSpeedSliderFraction_Event__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x30, 0x1b, 0xbb, 0xda, 0xe4, 0x83, 0xf2, 0xd7,
      0x46, 0x3b, 0xdf, 0x44, 0x8c, 0x15, 0x03, 0x7c,
      0x3e, 0x6d, 0x69, 0xf5, 0xed, 0x3a, 0x69, 0xdc,
      0x48, 0xf5, 0x5d, 0xce, 0x26, 0xd8, 0xf6, 0x20,
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

static char ur_msgs__srv__SetSpeedSliderFraction__TYPE_NAME[] = "ur_msgs/srv/SetSpeedSliderFraction";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char service_msgs__msg__ServiceEventInfo__TYPE_NAME[] = "service_msgs/msg/ServiceEventInfo";
static char ur_msgs__srv__SetSpeedSliderFraction_Event__TYPE_NAME[] = "ur_msgs/srv/SetSpeedSliderFraction_Event";
static char ur_msgs__srv__SetSpeedSliderFraction_Request__TYPE_NAME[] = "ur_msgs/srv/SetSpeedSliderFraction_Request";
static char ur_msgs__srv__SetSpeedSliderFraction_Response__TYPE_NAME[] = "ur_msgs/srv/SetSpeedSliderFraction_Response";

// Define type names, field names, and default values
static char ur_msgs__srv__SetSpeedSliderFraction__FIELD_NAME__request_message[] = "request_message";
static char ur_msgs__srv__SetSpeedSliderFraction__FIELD_NAME__response_message[] = "response_message";
static char ur_msgs__srv__SetSpeedSliderFraction__FIELD_NAME__event_message[] = "event_message";

static rosidl_runtime_c__type_description__Field ur_msgs__srv__SetSpeedSliderFraction__FIELDS[] = {
  {
    {ur_msgs__srv__SetSpeedSliderFraction__FIELD_NAME__request_message, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {ur_msgs__srv__SetSpeedSliderFraction_Request__TYPE_NAME, 42, 42},
    },
    {NULL, 0, 0},
  },
  {
    {ur_msgs__srv__SetSpeedSliderFraction__FIELD_NAME__response_message, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {ur_msgs__srv__SetSpeedSliderFraction_Response__TYPE_NAME, 43, 43},
    },
    {NULL, 0, 0},
  },
  {
    {ur_msgs__srv__SetSpeedSliderFraction__FIELD_NAME__event_message, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {ur_msgs__srv__SetSpeedSliderFraction_Event__TYPE_NAME, 40, 40},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription ur_msgs__srv__SetSpeedSliderFraction__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
  {
    {ur_msgs__srv__SetSpeedSliderFraction_Event__TYPE_NAME, 40, 40},
    {NULL, 0, 0},
  },
  {
    {ur_msgs__srv__SetSpeedSliderFraction_Request__TYPE_NAME, 42, 42},
    {NULL, 0, 0},
  },
  {
    {ur_msgs__srv__SetSpeedSliderFraction_Response__TYPE_NAME, 43, 43},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
ur_msgs__srv__SetSpeedSliderFraction__get_type_description(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {ur_msgs__srv__SetSpeedSliderFraction__TYPE_NAME, 34, 34},
      {ur_msgs__srv__SetSpeedSliderFraction__FIELDS, 3, 3},
    },
    {ur_msgs__srv__SetSpeedSliderFraction__REFERENCED_TYPE_DESCRIPTIONS, 5, 5},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = ur_msgs__srv__SetSpeedSliderFraction_Event__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[3].fields = ur_msgs__srv__SetSpeedSliderFraction_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[4].fields = ur_msgs__srv__SetSpeedSliderFraction_Response__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char ur_msgs__srv__SetSpeedSliderFraction_Request__FIELD_NAME__speed_slider_fraction[] = "speed_slider_fraction";

static rosidl_runtime_c__type_description__Field ur_msgs__srv__SetSpeedSliderFraction_Request__FIELDS[] = {
  {
    {ur_msgs__srv__SetSpeedSliderFraction_Request__FIELD_NAME__speed_slider_fraction, 21, 21},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
ur_msgs__srv__SetSpeedSliderFraction_Request__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {ur_msgs__srv__SetSpeedSliderFraction_Request__TYPE_NAME, 42, 42},
      {ur_msgs__srv__SetSpeedSliderFraction_Request__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char ur_msgs__srv__SetSpeedSliderFraction_Response__FIELD_NAME__success[] = "success";

static rosidl_runtime_c__type_description__Field ur_msgs__srv__SetSpeedSliderFraction_Response__FIELDS[] = {
  {
    {ur_msgs__srv__SetSpeedSliderFraction_Response__FIELD_NAME__success, 7, 7},
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
ur_msgs__srv__SetSpeedSliderFraction_Response__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {ur_msgs__srv__SetSpeedSliderFraction_Response__TYPE_NAME, 43, 43},
      {ur_msgs__srv__SetSpeedSliderFraction_Response__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char ur_msgs__srv__SetSpeedSliderFraction_Event__FIELD_NAME__info[] = "info";
static char ur_msgs__srv__SetSpeedSliderFraction_Event__FIELD_NAME__request[] = "request";
static char ur_msgs__srv__SetSpeedSliderFraction_Event__FIELD_NAME__response[] = "response";

static rosidl_runtime_c__type_description__Field ur_msgs__srv__SetSpeedSliderFraction_Event__FIELDS[] = {
  {
    {ur_msgs__srv__SetSpeedSliderFraction_Event__FIELD_NAME__info, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
  {
    {ur_msgs__srv__SetSpeedSliderFraction_Event__FIELD_NAME__request, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {ur_msgs__srv__SetSpeedSliderFraction_Request__TYPE_NAME, 42, 42},
    },
    {NULL, 0, 0},
  },
  {
    {ur_msgs__srv__SetSpeedSliderFraction_Event__FIELD_NAME__response, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {ur_msgs__srv__SetSpeedSliderFraction_Response__TYPE_NAME, 43, 43},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription ur_msgs__srv__SetSpeedSliderFraction_Event__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
  {
    {ur_msgs__srv__SetSpeedSliderFraction_Request__TYPE_NAME, 42, 42},
    {NULL, 0, 0},
  },
  {
    {ur_msgs__srv__SetSpeedSliderFraction_Response__TYPE_NAME, 43, 43},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
ur_msgs__srv__SetSpeedSliderFraction_Event__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {ur_msgs__srv__SetSpeedSliderFraction_Event__TYPE_NAME, 40, 40},
      {ur_msgs__srv__SetSpeedSliderFraction_Event__FIELDS, 3, 3},
    },
    {ur_msgs__srv__SetSpeedSliderFraction_Event__REFERENCED_TYPE_DESCRIPTIONS, 4, 4},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = ur_msgs__srv__SetSpeedSliderFraction_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[3].fields = ur_msgs__srv__SetSpeedSliderFraction_Response__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# Set the speed slider on the teach pendant to the specified value.\n"
  "#\n"
  "# Values for 'speed_slider_fraction' must be from [0; 1.0]; values outside this\n"
  "# valid range will result in an error being returned to the caller.\n"
  "\n"
  "float64 speed_slider_fraction\n"
  "---\n"
  "bool success";

static char srv_encoding[] = "srv";
static char implicit_encoding[] = "implicit";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
ur_msgs__srv__SetSpeedSliderFraction__get_individual_type_description_source(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {ur_msgs__srv__SetSpeedSliderFraction__TYPE_NAME, 34, 34},
    {srv_encoding, 3, 3},
    {toplevel_type_raw_source, 266, 266},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
ur_msgs__srv__SetSpeedSliderFraction_Request__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {ur_msgs__srv__SetSpeedSliderFraction_Request__TYPE_NAME, 42, 42},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
ur_msgs__srv__SetSpeedSliderFraction_Response__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {ur_msgs__srv__SetSpeedSliderFraction_Response__TYPE_NAME, 43, 43},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
ur_msgs__srv__SetSpeedSliderFraction_Event__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {ur_msgs__srv__SetSpeedSliderFraction_Event__TYPE_NAME, 40, 40},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
ur_msgs__srv__SetSpeedSliderFraction__get_type_description_sources(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[6];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 6, 6};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *ur_msgs__srv__SetSpeedSliderFraction__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    sources[3] = *ur_msgs__srv__SetSpeedSliderFraction_Event__get_individual_type_description_source(NULL);
    sources[4] = *ur_msgs__srv__SetSpeedSliderFraction_Request__get_individual_type_description_source(NULL);
    sources[5] = *ur_msgs__srv__SetSpeedSliderFraction_Response__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
ur_msgs__srv__SetSpeedSliderFraction_Request__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *ur_msgs__srv__SetSpeedSliderFraction_Request__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
ur_msgs__srv__SetSpeedSliderFraction_Response__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *ur_msgs__srv__SetSpeedSliderFraction_Response__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
ur_msgs__srv__SetSpeedSliderFraction_Event__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[5];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 5, 5};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *ur_msgs__srv__SetSpeedSliderFraction_Event__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    sources[3] = *ur_msgs__srv__SetSpeedSliderFraction_Request__get_individual_type_description_source(NULL);
    sources[4] = *ur_msgs__srv__SetSpeedSliderFraction_Response__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
