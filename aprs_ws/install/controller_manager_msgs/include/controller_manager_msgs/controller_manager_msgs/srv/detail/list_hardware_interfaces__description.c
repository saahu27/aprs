// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from controller_manager_msgs:srv/ListHardwareInterfaces.idl
// generated code does not contain a copyright notice

#include "controller_manager_msgs/srv/detail/list_hardware_interfaces__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_controller_manager_msgs
const rosidl_type_hash_t *
controller_manager_msgs__srv__ListHardwareInterfaces__get_type_hash(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xd2, 0x7b, 0xea, 0xad, 0xbd, 0x31, 0x4c, 0x34,
      0x21, 0x47, 0xe4, 0x1d, 0x30, 0x46, 0x9c, 0x20,
      0x68, 0xe6, 0x21, 0x81, 0x8b, 0xd9, 0xff, 0x9d,
      0xd2, 0x56, 0xd3, 0xe7, 0xa9, 0xd6, 0x01, 0x94,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_controller_manager_msgs
const rosidl_type_hash_t *
controller_manager_msgs__srv__ListHardwareInterfaces_Request__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x41, 0x9a, 0x20, 0x4c, 0x74, 0xb8, 0x5a, 0xdb,
      0x60, 0x28, 0x48, 0xd0, 0xf2, 0x88, 0xfc, 0x75,
      0x6d, 0x02, 0x16, 0xf7, 0x0b, 0xd3, 0x0a, 0xb8,
      0x89, 0xc1, 0xd9, 0xb1, 0x54, 0xed, 0x80, 0x98,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_controller_manager_msgs
const rosidl_type_hash_t *
controller_manager_msgs__srv__ListHardwareInterfaces_Response__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x75, 0x50, 0x61, 0xd6, 0xc2, 0x73, 0x30, 0x4c,
      0x25, 0x08, 0xdb, 0x65, 0x32, 0x94, 0xac, 0xa0,
      0x9e, 0x66, 0xda, 0x79, 0xf1, 0xb5, 0xdd, 0x98,
      0x1e, 0x81, 0x41, 0xb1, 0x11, 0xd4, 0xe1, 0x9d,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_controller_manager_msgs
const rosidl_type_hash_t *
controller_manager_msgs__srv__ListHardwareInterfaces_Event__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xff, 0x1b, 0xe5, 0x99, 0x01, 0x3d, 0xa8, 0x9f,
      0x86, 0x9b, 0xe7, 0x94, 0x9c, 0x8e, 0xb2, 0xd7,
      0x80, 0x30, 0xf2, 0x87, 0x3b, 0x2c, 0x1c, 0xdf,
      0xa0, 0x7f, 0x29, 0xf9, 0x30, 0xdc, 0xf5, 0xcf,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "service_msgs/msg/detail/service_event_info__functions.h"
#include "controller_manager_msgs/msg/detail/hardware_interface__functions.h"
#include "builtin_interfaces/msg/detail/time__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t builtin_interfaces__msg__Time__EXPECTED_HASH = {1, {
    0xb1, 0x06, 0x23, 0x5e, 0x25, 0xa4, 0xc5, 0xed,
    0x35, 0x09, 0x8a, 0xa0, 0xa6, 0x1a, 0x3e, 0xe9,
    0xc9, 0xb1, 0x8d, 0x19, 0x7f, 0x39, 0x8b, 0x0e,
    0x42, 0x06, 0xce, 0xa9, 0xac, 0xf9, 0xc1, 0x97,
  }};
static const rosidl_type_hash_t controller_manager_msgs__msg__HardwareInterface__EXPECTED_HASH = {1, {
    0xc2, 0x4d, 0xdd, 0x03, 0x64, 0x68, 0x6a, 0x74,
    0xc1, 0xce, 0xdc, 0x2d, 0x01, 0x5b, 0x58, 0xa9,
    0xb7, 0xeb, 0x10, 0x7b, 0x86, 0x44, 0xc1, 0x4a,
    0x63, 0xcd, 0x5e, 0xd6, 0x78, 0x18, 0x14, 0x5f,
  }};
static const rosidl_type_hash_t service_msgs__msg__ServiceEventInfo__EXPECTED_HASH = {1, {
    0x41, 0xbc, 0xbb, 0xe0, 0x7a, 0x75, 0xc9, 0xb5,
    0x2b, 0xc9, 0x6b, 0xfd, 0x5c, 0x24, 0xd7, 0xf0,
    0xfc, 0x0a, 0x08, 0xc0, 0xcb, 0x79, 0x21, 0xb3,
    0x37, 0x3c, 0x57, 0x32, 0x34, 0x5a, 0x6f, 0x45,
  }};
#endif

static char controller_manager_msgs__srv__ListHardwareInterfaces__TYPE_NAME[] = "controller_manager_msgs/srv/ListHardwareInterfaces";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char controller_manager_msgs__msg__HardwareInterface__TYPE_NAME[] = "controller_manager_msgs/msg/HardwareInterface";
static char controller_manager_msgs__srv__ListHardwareInterfaces_Event__TYPE_NAME[] = "controller_manager_msgs/srv/ListHardwareInterfaces_Event";
static char controller_manager_msgs__srv__ListHardwareInterfaces_Request__TYPE_NAME[] = "controller_manager_msgs/srv/ListHardwareInterfaces_Request";
static char controller_manager_msgs__srv__ListHardwareInterfaces_Response__TYPE_NAME[] = "controller_manager_msgs/srv/ListHardwareInterfaces_Response";
static char service_msgs__msg__ServiceEventInfo__TYPE_NAME[] = "service_msgs/msg/ServiceEventInfo";

// Define type names, field names, and default values
static char controller_manager_msgs__srv__ListHardwareInterfaces__FIELD_NAME__request_message[] = "request_message";
static char controller_manager_msgs__srv__ListHardwareInterfaces__FIELD_NAME__response_message[] = "response_message";
static char controller_manager_msgs__srv__ListHardwareInterfaces__FIELD_NAME__event_message[] = "event_message";

static rosidl_runtime_c__type_description__Field controller_manager_msgs__srv__ListHardwareInterfaces__FIELDS[] = {
  {
    {controller_manager_msgs__srv__ListHardwareInterfaces__FIELD_NAME__request_message, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {controller_manager_msgs__srv__ListHardwareInterfaces_Request__TYPE_NAME, 58, 58},
    },
    {NULL, 0, 0},
  },
  {
    {controller_manager_msgs__srv__ListHardwareInterfaces__FIELD_NAME__response_message, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {controller_manager_msgs__srv__ListHardwareInterfaces_Response__TYPE_NAME, 59, 59},
    },
    {NULL, 0, 0},
  },
  {
    {controller_manager_msgs__srv__ListHardwareInterfaces__FIELD_NAME__event_message, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {controller_manager_msgs__srv__ListHardwareInterfaces_Event__TYPE_NAME, 56, 56},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription controller_manager_msgs__srv__ListHardwareInterfaces__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {controller_manager_msgs__msg__HardwareInterface__TYPE_NAME, 45, 45},
    {NULL, 0, 0},
  },
  {
    {controller_manager_msgs__srv__ListHardwareInterfaces_Event__TYPE_NAME, 56, 56},
    {NULL, 0, 0},
  },
  {
    {controller_manager_msgs__srv__ListHardwareInterfaces_Request__TYPE_NAME, 58, 58},
    {NULL, 0, 0},
  },
  {
    {controller_manager_msgs__srv__ListHardwareInterfaces_Response__TYPE_NAME, 59, 59},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
controller_manager_msgs__srv__ListHardwareInterfaces__get_type_description(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {controller_manager_msgs__srv__ListHardwareInterfaces__TYPE_NAME, 50, 50},
      {controller_manager_msgs__srv__ListHardwareInterfaces__FIELDS, 3, 3},
    },
    {controller_manager_msgs__srv__ListHardwareInterfaces__REFERENCED_TYPE_DESCRIPTIONS, 6, 6},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&controller_manager_msgs__msg__HardwareInterface__EXPECTED_HASH, controller_manager_msgs__msg__HardwareInterface__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = controller_manager_msgs__msg__HardwareInterface__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = controller_manager_msgs__srv__ListHardwareInterfaces_Event__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[3].fields = controller_manager_msgs__srv__ListHardwareInterfaces_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[4].fields = controller_manager_msgs__srv__ListHardwareInterfaces_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[5].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char controller_manager_msgs__srv__ListHardwareInterfaces_Request__FIELD_NAME__structure_needs_at_least_one_member[] = "structure_needs_at_least_one_member";

static rosidl_runtime_c__type_description__Field controller_manager_msgs__srv__ListHardwareInterfaces_Request__FIELDS[] = {
  {
    {controller_manager_msgs__srv__ListHardwareInterfaces_Request__FIELD_NAME__structure_needs_at_least_one_member, 35, 35},
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
controller_manager_msgs__srv__ListHardwareInterfaces_Request__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {controller_manager_msgs__srv__ListHardwareInterfaces_Request__TYPE_NAME, 58, 58},
      {controller_manager_msgs__srv__ListHardwareInterfaces_Request__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char controller_manager_msgs__srv__ListHardwareInterfaces_Response__FIELD_NAME__command_interfaces[] = "command_interfaces";
static char controller_manager_msgs__srv__ListHardwareInterfaces_Response__FIELD_NAME__state_interfaces[] = "state_interfaces";

static rosidl_runtime_c__type_description__Field controller_manager_msgs__srv__ListHardwareInterfaces_Response__FIELDS[] = {
  {
    {controller_manager_msgs__srv__ListHardwareInterfaces_Response__FIELD_NAME__command_interfaces, 18, 18},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {controller_manager_msgs__msg__HardwareInterface__TYPE_NAME, 45, 45},
    },
    {NULL, 0, 0},
  },
  {
    {controller_manager_msgs__srv__ListHardwareInterfaces_Response__FIELD_NAME__state_interfaces, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {controller_manager_msgs__msg__HardwareInterface__TYPE_NAME, 45, 45},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription controller_manager_msgs__srv__ListHardwareInterfaces_Response__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {controller_manager_msgs__msg__HardwareInterface__TYPE_NAME, 45, 45},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
controller_manager_msgs__srv__ListHardwareInterfaces_Response__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {controller_manager_msgs__srv__ListHardwareInterfaces_Response__TYPE_NAME, 59, 59},
      {controller_manager_msgs__srv__ListHardwareInterfaces_Response__FIELDS, 2, 2},
    },
    {controller_manager_msgs__srv__ListHardwareInterfaces_Response__REFERENCED_TYPE_DESCRIPTIONS, 1, 1},
  };
  if (!constructed) {
    assert(0 == memcmp(&controller_manager_msgs__msg__HardwareInterface__EXPECTED_HASH, controller_manager_msgs__msg__HardwareInterface__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = controller_manager_msgs__msg__HardwareInterface__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char controller_manager_msgs__srv__ListHardwareInterfaces_Event__FIELD_NAME__info[] = "info";
static char controller_manager_msgs__srv__ListHardwareInterfaces_Event__FIELD_NAME__request[] = "request";
static char controller_manager_msgs__srv__ListHardwareInterfaces_Event__FIELD_NAME__response[] = "response";

static rosidl_runtime_c__type_description__Field controller_manager_msgs__srv__ListHardwareInterfaces_Event__FIELDS[] = {
  {
    {controller_manager_msgs__srv__ListHardwareInterfaces_Event__FIELD_NAME__info, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
  {
    {controller_manager_msgs__srv__ListHardwareInterfaces_Event__FIELD_NAME__request, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {controller_manager_msgs__srv__ListHardwareInterfaces_Request__TYPE_NAME, 58, 58},
    },
    {NULL, 0, 0},
  },
  {
    {controller_manager_msgs__srv__ListHardwareInterfaces_Event__FIELD_NAME__response, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {controller_manager_msgs__srv__ListHardwareInterfaces_Response__TYPE_NAME, 59, 59},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription controller_manager_msgs__srv__ListHardwareInterfaces_Event__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {controller_manager_msgs__msg__HardwareInterface__TYPE_NAME, 45, 45},
    {NULL, 0, 0},
  },
  {
    {controller_manager_msgs__srv__ListHardwareInterfaces_Request__TYPE_NAME, 58, 58},
    {NULL, 0, 0},
  },
  {
    {controller_manager_msgs__srv__ListHardwareInterfaces_Response__TYPE_NAME, 59, 59},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
controller_manager_msgs__srv__ListHardwareInterfaces_Event__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {controller_manager_msgs__srv__ListHardwareInterfaces_Event__TYPE_NAME, 56, 56},
      {controller_manager_msgs__srv__ListHardwareInterfaces_Event__FIELDS, 3, 3},
    },
    {controller_manager_msgs__srv__ListHardwareInterfaces_Event__REFERENCED_TYPE_DESCRIPTIONS, 5, 5},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&controller_manager_msgs__msg__HardwareInterface__EXPECTED_HASH, controller_manager_msgs__msg__HardwareInterface__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = controller_manager_msgs__msg__HardwareInterface__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = controller_manager_msgs__srv__ListHardwareInterfaces_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[3].fields = controller_manager_msgs__srv__ListHardwareInterfaces_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[4].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "\n"
  "---\n"
  "HardwareInterface[] command_interfaces\n"
  "HardwareInterface[] state_interfaces";

static char srv_encoding[] = "srv";
static char implicit_encoding[] = "implicit";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
controller_manager_msgs__srv__ListHardwareInterfaces__get_individual_type_description_source(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {controller_manager_msgs__srv__ListHardwareInterfaces__TYPE_NAME, 50, 50},
    {srv_encoding, 3, 3},
    {toplevel_type_raw_source, 81, 81},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
controller_manager_msgs__srv__ListHardwareInterfaces_Request__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {controller_manager_msgs__srv__ListHardwareInterfaces_Request__TYPE_NAME, 58, 58},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
controller_manager_msgs__srv__ListHardwareInterfaces_Response__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {controller_manager_msgs__srv__ListHardwareInterfaces_Response__TYPE_NAME, 59, 59},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
controller_manager_msgs__srv__ListHardwareInterfaces_Event__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {controller_manager_msgs__srv__ListHardwareInterfaces_Event__TYPE_NAME, 56, 56},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
controller_manager_msgs__srv__ListHardwareInterfaces__get_type_description_sources(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[7];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 7, 7};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *controller_manager_msgs__srv__ListHardwareInterfaces__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *controller_manager_msgs__msg__HardwareInterface__get_individual_type_description_source(NULL);
    sources[3] = *controller_manager_msgs__srv__ListHardwareInterfaces_Event__get_individual_type_description_source(NULL);
    sources[4] = *controller_manager_msgs__srv__ListHardwareInterfaces_Request__get_individual_type_description_source(NULL);
    sources[5] = *controller_manager_msgs__srv__ListHardwareInterfaces_Response__get_individual_type_description_source(NULL);
    sources[6] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
controller_manager_msgs__srv__ListHardwareInterfaces_Request__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *controller_manager_msgs__srv__ListHardwareInterfaces_Request__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
controller_manager_msgs__srv__ListHardwareInterfaces_Response__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[2];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 2, 2};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *controller_manager_msgs__srv__ListHardwareInterfaces_Response__get_individual_type_description_source(NULL),
    sources[1] = *controller_manager_msgs__msg__HardwareInterface__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
controller_manager_msgs__srv__ListHardwareInterfaces_Event__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[6];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 6, 6};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *controller_manager_msgs__srv__ListHardwareInterfaces_Event__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *controller_manager_msgs__msg__HardwareInterface__get_individual_type_description_source(NULL);
    sources[3] = *controller_manager_msgs__srv__ListHardwareInterfaces_Request__get_individual_type_description_source(NULL);
    sources[4] = *controller_manager_msgs__srv__ListHardwareInterfaces_Response__get_individual_type_description_source(NULL);
    sources[5] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
