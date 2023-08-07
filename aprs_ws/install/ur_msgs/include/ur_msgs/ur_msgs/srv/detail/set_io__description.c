// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from ur_msgs:srv/SetIO.idl
// generated code does not contain a copyright notice

#include "ur_msgs/srv/detail/set_io__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_ur_msgs
const rosidl_type_hash_t *
ur_msgs__srv__SetIO__get_type_hash(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x5c, 0xb0, 0xc8, 0x9e, 0xa4, 0x47, 0x9b, 0x29,
      0x47, 0xfc, 0xcd, 0xac, 0x0f, 0x92, 0xdd, 0x66,
      0x36, 0xc4, 0xb7, 0xfc, 0x3a, 0x31, 0x2f, 0x79,
      0xec, 0x7f, 0xb6, 0x8a, 0x1d, 0xaa, 0x6c, 0xd5,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_ur_msgs
const rosidl_type_hash_t *
ur_msgs__srv__SetIO_Request__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x95, 0xf0, 0xbf, 0xe8, 0xcf, 0x11, 0x20, 0x7c,
      0x48, 0x77, 0xbf, 0x4c, 0xce, 0xfa, 0xad, 0x2f,
      0x51, 0xa8, 0x53, 0x75, 0x0e, 0x24, 0xa3, 0x9b,
      0x7d, 0x25, 0xfd, 0xd5, 0xa1, 0x35, 0x84, 0xb4,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_ur_msgs
const rosidl_type_hash_t *
ur_msgs__srv__SetIO_Response__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xf4, 0x75, 0xf4, 0xf1, 0x89, 0xd6, 0xe9, 0xb6,
      0x55, 0x0f, 0x30, 0x92, 0x45, 0x59, 0xc5, 0x7c,
      0x59, 0x7c, 0x97, 0xe0, 0x25, 0xa9, 0xfe, 0xa5,
      0x5b, 0x61, 0x6c, 0x08, 0x73, 0xa5, 0x5a, 0xd2,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_ur_msgs
const rosidl_type_hash_t *
ur_msgs__srv__SetIO_Event__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x19, 0x98, 0x78, 0xba, 0xef, 0x9a, 0x89, 0x96,
      0x43, 0x97, 0x99, 0x5f, 0xd1, 0xe2, 0x15, 0xaa,
      0xd1, 0x97, 0x11, 0xac, 0x8e, 0x85, 0xa3, 0x3f,
      0xa5, 0x5f, 0x8e, 0x74, 0x7e, 0x35, 0xd7, 0x70,
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

static char ur_msgs__srv__SetIO__TYPE_NAME[] = "ur_msgs/srv/SetIO";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char service_msgs__msg__ServiceEventInfo__TYPE_NAME[] = "service_msgs/msg/ServiceEventInfo";
static char ur_msgs__srv__SetIO_Event__TYPE_NAME[] = "ur_msgs/srv/SetIO_Event";
static char ur_msgs__srv__SetIO_Request__TYPE_NAME[] = "ur_msgs/srv/SetIO_Request";
static char ur_msgs__srv__SetIO_Response__TYPE_NAME[] = "ur_msgs/srv/SetIO_Response";

// Define type names, field names, and default values
static char ur_msgs__srv__SetIO__FIELD_NAME__request_message[] = "request_message";
static char ur_msgs__srv__SetIO__FIELD_NAME__response_message[] = "response_message";
static char ur_msgs__srv__SetIO__FIELD_NAME__event_message[] = "event_message";

static rosidl_runtime_c__type_description__Field ur_msgs__srv__SetIO__FIELDS[] = {
  {
    {ur_msgs__srv__SetIO__FIELD_NAME__request_message, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {ur_msgs__srv__SetIO_Request__TYPE_NAME, 25, 25},
    },
    {NULL, 0, 0},
  },
  {
    {ur_msgs__srv__SetIO__FIELD_NAME__response_message, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {ur_msgs__srv__SetIO_Response__TYPE_NAME, 26, 26},
    },
    {NULL, 0, 0},
  },
  {
    {ur_msgs__srv__SetIO__FIELD_NAME__event_message, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {ur_msgs__srv__SetIO_Event__TYPE_NAME, 23, 23},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription ur_msgs__srv__SetIO__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
  {
    {ur_msgs__srv__SetIO_Event__TYPE_NAME, 23, 23},
    {NULL, 0, 0},
  },
  {
    {ur_msgs__srv__SetIO_Request__TYPE_NAME, 25, 25},
    {NULL, 0, 0},
  },
  {
    {ur_msgs__srv__SetIO_Response__TYPE_NAME, 26, 26},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
ur_msgs__srv__SetIO__get_type_description(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {ur_msgs__srv__SetIO__TYPE_NAME, 17, 17},
      {ur_msgs__srv__SetIO__FIELDS, 3, 3},
    },
    {ur_msgs__srv__SetIO__REFERENCED_TYPE_DESCRIPTIONS, 5, 5},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = ur_msgs__srv__SetIO_Event__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[3].fields = ur_msgs__srv__SetIO_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[4].fields = ur_msgs__srv__SetIO_Response__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char ur_msgs__srv__SetIO_Request__FIELD_NAME__fun[] = "fun";
static char ur_msgs__srv__SetIO_Request__FIELD_NAME__pin[] = "pin";
static char ur_msgs__srv__SetIO_Request__FIELD_NAME__state[] = "state";

static rosidl_runtime_c__type_description__Field ur_msgs__srv__SetIO_Request__FIELDS[] = {
  {
    {ur_msgs__srv__SetIO_Request__FIELD_NAME__fun, 3, 3},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ur_msgs__srv__SetIO_Request__FIELD_NAME__pin, 3, 3},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ur_msgs__srv__SetIO_Request__FIELD_NAME__state, 5, 5},
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
ur_msgs__srv__SetIO_Request__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {ur_msgs__srv__SetIO_Request__TYPE_NAME, 25, 25},
      {ur_msgs__srv__SetIO_Request__FIELDS, 3, 3},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char ur_msgs__srv__SetIO_Response__FIELD_NAME__success[] = "success";

static rosidl_runtime_c__type_description__Field ur_msgs__srv__SetIO_Response__FIELDS[] = {
  {
    {ur_msgs__srv__SetIO_Response__FIELD_NAME__success, 7, 7},
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
ur_msgs__srv__SetIO_Response__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {ur_msgs__srv__SetIO_Response__TYPE_NAME, 26, 26},
      {ur_msgs__srv__SetIO_Response__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char ur_msgs__srv__SetIO_Event__FIELD_NAME__info[] = "info";
static char ur_msgs__srv__SetIO_Event__FIELD_NAME__request[] = "request";
static char ur_msgs__srv__SetIO_Event__FIELD_NAME__response[] = "response";

static rosidl_runtime_c__type_description__Field ur_msgs__srv__SetIO_Event__FIELDS[] = {
  {
    {ur_msgs__srv__SetIO_Event__FIELD_NAME__info, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
  {
    {ur_msgs__srv__SetIO_Event__FIELD_NAME__request, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {ur_msgs__srv__SetIO_Request__TYPE_NAME, 25, 25},
    },
    {NULL, 0, 0},
  },
  {
    {ur_msgs__srv__SetIO_Event__FIELD_NAME__response, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {ur_msgs__srv__SetIO_Response__TYPE_NAME, 26, 26},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription ur_msgs__srv__SetIO_Event__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
  {
    {ur_msgs__srv__SetIO_Request__TYPE_NAME, 25, 25},
    {NULL, 0, 0},
  },
  {
    {ur_msgs__srv__SetIO_Response__TYPE_NAME, 26, 26},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
ur_msgs__srv__SetIO_Event__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {ur_msgs__srv__SetIO_Event__TYPE_NAME, 23, 23},
      {ur_msgs__srv__SetIO_Event__FIELDS, 3, 3},
    },
    {ur_msgs__srv__SetIO_Event__REFERENCED_TYPE_DESCRIPTIONS, 4, 4},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = ur_msgs__srv__SetIO_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[3].fields = ur_msgs__srv__SetIO_Response__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# Service allows setting digital (DIO) and analog (AIO) IO, as well as flags\n"
  "# and configuring tool voltage.\n"
  "#\n"
  "# This service has three request fields (see below).\n"
  "#\n"
  "# When setting DIO or AIO pins to new values:\n"
  "#\n"
  "#  fun    The function to perform\n"
  "#  pin    Numeric ID of the pin to set, see constants definition below\n"
  "#  state  Desired pin state (signal level for analog or STATE_(ON|OFF) for DIO and flags)\n"
  "#\n"
  "# When configuring tool voltage:\n"
  "#\n"
  "#  fun    Set to FUN_SET_TOOL_VOLTAGE\n"
  "#  pin    Ignored\n"
  "#  state  Desired tool voltage (use STATE_TOOL_VOLTAGE constants)\n"
  "\n"
  "# constants\n"
  "# pin mapping\n"
  "# analog out\n"
  "int8 PIN_AOUT0 = 0\n"
  "int8 PIN_AOUT1 = 1\n"
  "\n"
  "# digital out\n"
  "int8 PIN_DOUT0 = 0\n"
  "int8 PIN_DOUT1 = 1\n"
  "int8 PIN_DOUT2 = 2\n"
  "int8 PIN_DOUT3 = 3\n"
  "int8 PIN_DOUT4 = 4\n"
  "int8 PIN_DOUT5 = 5\n"
  "int8 PIN_DOUT6 = 6\n"
  "int8 PIN_DOUT7 = 7\n"
  "\n"
  "# configurable out\n"
  "int8 PIN_CONF_OUT0 = 8\n"
  "int8 PIN_CONF_OUT1 = 9\n"
  "int8 PIN_CONF_OUT2 = 10\n"
  "int8 PIN_CONF_OUT3 = 11\n"
  "int8 PIN_CONF_OUT4 = 12\n"
  "int8 PIN_CONF_OUT5 = 13\n"
  "int8 PIN_CONF_OUT6 = 14\n"
  "int8 PIN_CONF_OUT7 = 15\n"
  "\n"
  "# digital tool output\n"
  "int8 PIN_TOOL_DOUT0 = 16\n"
  "int8 PIN_TOOL_DOUT1 = 17\n"
  "\n"
  "# valid function values\n"
  "#\n"
  "# Note: 'fun' is short for 'function' (ie: the function the service should perform).\n"
  "int8 FUN_SET_DIGITAL_OUT = 1\n"
  "int8 FUN_SET_FLAG = 2\n"
  "int8 FUN_SET_ANALOG_OUT = 3\n"
  "int8 FUN_SET_TOOL_VOLTAGE = 4\n"
  "\n"
  "# valid values for 'state' when setting digital IO or flags\n"
  "int8 STATE_OFF = 0\n"
  "int8 STATE_ON = 1\n"
  "\n"
  "# valid 'state' values when setting tool voltage\n"
  "int8 STATE_TOOL_VOLTAGE_0V = 0\n"
  "int8 STATE_TOOL_VOLTAGE_12V = 12\n"
  "int8 STATE_TOOL_VOLTAGE_24V = 24\n"
  "\n"
  "# request fields\n"
  "int8 fun\n"
  "int8 pin\n"
  "float32 state\n"
  "---\n"
  "bool success";

static char srv_encoding[] = "srv";
static char implicit_encoding[] = "implicit";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
ur_msgs__srv__SetIO__get_individual_type_description_source(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {ur_msgs__srv__SetIO__TYPE_NAME, 17, 17},
    {srv_encoding, 3, 3},
    {toplevel_type_raw_source, 1629, 1629},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
ur_msgs__srv__SetIO_Request__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {ur_msgs__srv__SetIO_Request__TYPE_NAME, 25, 25},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
ur_msgs__srv__SetIO_Response__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {ur_msgs__srv__SetIO_Response__TYPE_NAME, 26, 26},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
ur_msgs__srv__SetIO_Event__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {ur_msgs__srv__SetIO_Event__TYPE_NAME, 23, 23},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
ur_msgs__srv__SetIO__get_type_description_sources(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[6];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 6, 6};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *ur_msgs__srv__SetIO__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    sources[3] = *ur_msgs__srv__SetIO_Event__get_individual_type_description_source(NULL);
    sources[4] = *ur_msgs__srv__SetIO_Request__get_individual_type_description_source(NULL);
    sources[5] = *ur_msgs__srv__SetIO_Response__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
ur_msgs__srv__SetIO_Request__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *ur_msgs__srv__SetIO_Request__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
ur_msgs__srv__SetIO_Response__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *ur_msgs__srv__SetIO_Response__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
ur_msgs__srv__SetIO_Event__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[5];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 5, 5};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *ur_msgs__srv__SetIO_Event__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    sources[3] = *ur_msgs__srv__SetIO_Request__get_individual_type_description_source(NULL);
    sources[4] = *ur_msgs__srv__SetIO_Response__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
