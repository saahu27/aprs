// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from controller_manager_msgs:srv/ListControllers.idl
// generated code does not contain a copyright notice

#include "controller_manager_msgs/srv/detail/list_controllers__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_controller_manager_msgs
const rosidl_type_hash_t *
controller_manager_msgs__srv__ListControllers__get_type_hash(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xb5, 0x1c, 0x7f, 0x13, 0xc7, 0xe9, 0x65, 0x2d,
      0xa7, 0xe5, 0xb7, 0xa6, 0x64, 0x85, 0xb6, 0x22,
      0x15, 0x83, 0x57, 0x23, 0x75, 0x4e, 0x6f, 0x8d,
      0xdf, 0xdb, 0x99, 0x14, 0x1c, 0x1c, 0x58, 0x6d,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_controller_manager_msgs
const rosidl_type_hash_t *
controller_manager_msgs__srv__ListControllers_Request__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xfb, 0x98, 0x5b, 0xc3, 0xdc, 0xc9, 0xb0, 0x7c,
      0x7d, 0x3a, 0xf4, 0xb4, 0x67, 0x87, 0xaf, 0xa5,
      0xa0, 0x9a, 0xc7, 0x9d, 0xa6, 0x46, 0x5e, 0xa4,
      0x2b, 0x56, 0x96, 0xf9, 0x35, 0x5c, 0x1f, 0x70,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_controller_manager_msgs
const rosidl_type_hash_t *
controller_manager_msgs__srv__ListControllers_Response__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x86, 0xd1, 0x1d, 0xb2, 0xd7, 0xea, 0x80, 0x31,
      0x50, 0x19, 0x50, 0x87, 0xe3, 0x64, 0x65, 0x70,
      0x9d, 0xdf, 0x0f, 0x2a, 0xda, 0xe2, 0x69, 0x6d,
      0x55, 0xa3, 0x34, 0x00, 0xbd, 0x5f, 0xfb, 0x87,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_controller_manager_msgs
const rosidl_type_hash_t *
controller_manager_msgs__srv__ListControllers_Event__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x4a, 0x97, 0xea, 0x3d, 0xc5, 0x17, 0xac, 0x56,
      0x14, 0x2d, 0x3e, 0x64, 0x5f, 0xd9, 0x21, 0xaa,
      0x17, 0xf4, 0x35, 0xaf, 0x45, 0x9d, 0xe9, 0x2b,
      0x81, 0xee, 0xbb, 0x54, 0x3e, 0xce, 0x18, 0x3e,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "controller_manager_msgs/msg/detail/controller_state__functions.h"
#include "service_msgs/msg/detail/service_event_info__functions.h"
#include "controller_manager_msgs/msg/detail/chain_connection__functions.h"
#include "builtin_interfaces/msg/detail/time__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t builtin_interfaces__msg__Time__EXPECTED_HASH = {1, {
    0xb1, 0x06, 0x23, 0x5e, 0x25, 0xa4, 0xc5, 0xed,
    0x35, 0x09, 0x8a, 0xa0, 0xa6, 0x1a, 0x3e, 0xe9,
    0xc9, 0xb1, 0x8d, 0x19, 0x7f, 0x39, 0x8b, 0x0e,
    0x42, 0x06, 0xce, 0xa9, 0xac, 0xf9, 0xc1, 0x97,
  }};
static const rosidl_type_hash_t controller_manager_msgs__msg__ChainConnection__EXPECTED_HASH = {1, {
    0x2d, 0xae, 0xcd, 0x1d, 0xa4, 0xb1, 0x71, 0xf4,
    0x8b, 0x29, 0x1c, 0x79, 0x74, 0x76, 0x57, 0xa6,
    0x51, 0xeb, 0x1a, 0xb8, 0x82, 0x1b, 0x68, 0xe3,
    0x8b, 0x1c, 0x88, 0xc7, 0x36, 0xbb, 0xa9, 0x1c,
  }};
static const rosidl_type_hash_t controller_manager_msgs__msg__ControllerState__EXPECTED_HASH = {1, {
    0x38, 0xfe, 0x2e, 0x79, 0x19, 0x00, 0xd2, 0xbb,
    0x9e, 0x35, 0xbe, 0x49, 0x86, 0x1e, 0x88, 0x94,
    0x3f, 0x11, 0xde, 0x93, 0xe2, 0xec, 0x52, 0xeb,
    0x16, 0xaf, 0x7b, 0x03, 0x71, 0x16, 0xdc, 0xd8,
  }};
static const rosidl_type_hash_t service_msgs__msg__ServiceEventInfo__EXPECTED_HASH = {1, {
    0x41, 0xbc, 0xbb, 0xe0, 0x7a, 0x75, 0xc9, 0xb5,
    0x2b, 0xc9, 0x6b, 0xfd, 0x5c, 0x24, 0xd7, 0xf0,
    0xfc, 0x0a, 0x08, 0xc0, 0xcb, 0x79, 0x21, 0xb3,
    0x37, 0x3c, 0x57, 0x32, 0x34, 0x5a, 0x6f, 0x45,
  }};
#endif

static char controller_manager_msgs__srv__ListControllers__TYPE_NAME[] = "controller_manager_msgs/srv/ListControllers";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char controller_manager_msgs__msg__ChainConnection__TYPE_NAME[] = "controller_manager_msgs/msg/ChainConnection";
static char controller_manager_msgs__msg__ControllerState__TYPE_NAME[] = "controller_manager_msgs/msg/ControllerState";
static char controller_manager_msgs__srv__ListControllers_Event__TYPE_NAME[] = "controller_manager_msgs/srv/ListControllers_Event";
static char controller_manager_msgs__srv__ListControllers_Request__TYPE_NAME[] = "controller_manager_msgs/srv/ListControllers_Request";
static char controller_manager_msgs__srv__ListControllers_Response__TYPE_NAME[] = "controller_manager_msgs/srv/ListControllers_Response";
static char service_msgs__msg__ServiceEventInfo__TYPE_NAME[] = "service_msgs/msg/ServiceEventInfo";

// Define type names, field names, and default values
static char controller_manager_msgs__srv__ListControllers__FIELD_NAME__request_message[] = "request_message";
static char controller_manager_msgs__srv__ListControllers__FIELD_NAME__response_message[] = "response_message";
static char controller_manager_msgs__srv__ListControllers__FIELD_NAME__event_message[] = "event_message";

static rosidl_runtime_c__type_description__Field controller_manager_msgs__srv__ListControllers__FIELDS[] = {
  {
    {controller_manager_msgs__srv__ListControllers__FIELD_NAME__request_message, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {controller_manager_msgs__srv__ListControllers_Request__TYPE_NAME, 51, 51},
    },
    {NULL, 0, 0},
  },
  {
    {controller_manager_msgs__srv__ListControllers__FIELD_NAME__response_message, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {controller_manager_msgs__srv__ListControllers_Response__TYPE_NAME, 52, 52},
    },
    {NULL, 0, 0},
  },
  {
    {controller_manager_msgs__srv__ListControllers__FIELD_NAME__event_message, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {controller_manager_msgs__srv__ListControllers_Event__TYPE_NAME, 49, 49},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription controller_manager_msgs__srv__ListControllers__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {controller_manager_msgs__msg__ChainConnection__TYPE_NAME, 43, 43},
    {NULL, 0, 0},
  },
  {
    {controller_manager_msgs__msg__ControllerState__TYPE_NAME, 43, 43},
    {NULL, 0, 0},
  },
  {
    {controller_manager_msgs__srv__ListControllers_Event__TYPE_NAME, 49, 49},
    {NULL, 0, 0},
  },
  {
    {controller_manager_msgs__srv__ListControllers_Request__TYPE_NAME, 51, 51},
    {NULL, 0, 0},
  },
  {
    {controller_manager_msgs__srv__ListControllers_Response__TYPE_NAME, 52, 52},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
controller_manager_msgs__srv__ListControllers__get_type_description(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {controller_manager_msgs__srv__ListControllers__TYPE_NAME, 43, 43},
      {controller_manager_msgs__srv__ListControllers__FIELDS, 3, 3},
    },
    {controller_manager_msgs__srv__ListControllers__REFERENCED_TYPE_DESCRIPTIONS, 7, 7},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&controller_manager_msgs__msg__ChainConnection__EXPECTED_HASH, controller_manager_msgs__msg__ChainConnection__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = controller_manager_msgs__msg__ChainConnection__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&controller_manager_msgs__msg__ControllerState__EXPECTED_HASH, controller_manager_msgs__msg__ControllerState__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[2].fields = controller_manager_msgs__msg__ControllerState__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[3].fields = controller_manager_msgs__srv__ListControllers_Event__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[4].fields = controller_manager_msgs__srv__ListControllers_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[5].fields = controller_manager_msgs__srv__ListControllers_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[6].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char controller_manager_msgs__srv__ListControllers_Request__FIELD_NAME__structure_needs_at_least_one_member[] = "structure_needs_at_least_one_member";

static rosidl_runtime_c__type_description__Field controller_manager_msgs__srv__ListControllers_Request__FIELDS[] = {
  {
    {controller_manager_msgs__srv__ListControllers_Request__FIELD_NAME__structure_needs_at_least_one_member, 35, 35},
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
controller_manager_msgs__srv__ListControllers_Request__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {controller_manager_msgs__srv__ListControllers_Request__TYPE_NAME, 51, 51},
      {controller_manager_msgs__srv__ListControllers_Request__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char controller_manager_msgs__srv__ListControllers_Response__FIELD_NAME__controller[] = "controller";

static rosidl_runtime_c__type_description__Field controller_manager_msgs__srv__ListControllers_Response__FIELDS[] = {
  {
    {controller_manager_msgs__srv__ListControllers_Response__FIELD_NAME__controller, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {controller_manager_msgs__msg__ControllerState__TYPE_NAME, 43, 43},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription controller_manager_msgs__srv__ListControllers_Response__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {controller_manager_msgs__msg__ChainConnection__TYPE_NAME, 43, 43},
    {NULL, 0, 0},
  },
  {
    {controller_manager_msgs__msg__ControllerState__TYPE_NAME, 43, 43},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
controller_manager_msgs__srv__ListControllers_Response__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {controller_manager_msgs__srv__ListControllers_Response__TYPE_NAME, 52, 52},
      {controller_manager_msgs__srv__ListControllers_Response__FIELDS, 1, 1},
    },
    {controller_manager_msgs__srv__ListControllers_Response__REFERENCED_TYPE_DESCRIPTIONS, 2, 2},
  };
  if (!constructed) {
    assert(0 == memcmp(&controller_manager_msgs__msg__ChainConnection__EXPECTED_HASH, controller_manager_msgs__msg__ChainConnection__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = controller_manager_msgs__msg__ChainConnection__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&controller_manager_msgs__msg__ControllerState__EXPECTED_HASH, controller_manager_msgs__msg__ControllerState__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = controller_manager_msgs__msg__ControllerState__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char controller_manager_msgs__srv__ListControllers_Event__FIELD_NAME__info[] = "info";
static char controller_manager_msgs__srv__ListControllers_Event__FIELD_NAME__request[] = "request";
static char controller_manager_msgs__srv__ListControllers_Event__FIELD_NAME__response[] = "response";

static rosidl_runtime_c__type_description__Field controller_manager_msgs__srv__ListControllers_Event__FIELDS[] = {
  {
    {controller_manager_msgs__srv__ListControllers_Event__FIELD_NAME__info, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
  {
    {controller_manager_msgs__srv__ListControllers_Event__FIELD_NAME__request, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {controller_manager_msgs__srv__ListControllers_Request__TYPE_NAME, 51, 51},
    },
    {NULL, 0, 0},
  },
  {
    {controller_manager_msgs__srv__ListControllers_Event__FIELD_NAME__response, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {controller_manager_msgs__srv__ListControllers_Response__TYPE_NAME, 52, 52},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription controller_manager_msgs__srv__ListControllers_Event__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {controller_manager_msgs__msg__ChainConnection__TYPE_NAME, 43, 43},
    {NULL, 0, 0},
  },
  {
    {controller_manager_msgs__msg__ControllerState__TYPE_NAME, 43, 43},
    {NULL, 0, 0},
  },
  {
    {controller_manager_msgs__srv__ListControllers_Request__TYPE_NAME, 51, 51},
    {NULL, 0, 0},
  },
  {
    {controller_manager_msgs__srv__ListControllers_Response__TYPE_NAME, 52, 52},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
controller_manager_msgs__srv__ListControllers_Event__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {controller_manager_msgs__srv__ListControllers_Event__TYPE_NAME, 49, 49},
      {controller_manager_msgs__srv__ListControllers_Event__FIELDS, 3, 3},
    },
    {controller_manager_msgs__srv__ListControllers_Event__REFERENCED_TYPE_DESCRIPTIONS, 6, 6},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&controller_manager_msgs__msg__ChainConnection__EXPECTED_HASH, controller_manager_msgs__msg__ChainConnection__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = controller_manager_msgs__msg__ChainConnection__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&controller_manager_msgs__msg__ControllerState__EXPECTED_HASH, controller_manager_msgs__msg__ControllerState__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[2].fields = controller_manager_msgs__msg__ControllerState__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[3].fields = controller_manager_msgs__srv__ListControllers_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[4].fields = controller_manager_msgs__srv__ListControllers_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[5].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# The ListControllers service returns a list of controller names/states/types of the\n"
  "# controllers that are loaded inside the controller_manager.\n"
  "\n"
  "---\n"
  "controller_manager_msgs/ControllerState[] controller";

static char srv_encoding[] = "srv";
static char implicit_encoding[] = "implicit";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
controller_manager_msgs__srv__ListControllers__get_individual_type_description_source(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {controller_manager_msgs__srv__ListControllers__TYPE_NAME, 43, 43},
    {srv_encoding, 3, 3},
    {toplevel_type_raw_source, 204, 204},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
controller_manager_msgs__srv__ListControllers_Request__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {controller_manager_msgs__srv__ListControllers_Request__TYPE_NAME, 51, 51},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
controller_manager_msgs__srv__ListControllers_Response__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {controller_manager_msgs__srv__ListControllers_Response__TYPE_NAME, 52, 52},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
controller_manager_msgs__srv__ListControllers_Event__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {controller_manager_msgs__srv__ListControllers_Event__TYPE_NAME, 49, 49},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
controller_manager_msgs__srv__ListControllers__get_type_description_sources(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[8];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 8, 8};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *controller_manager_msgs__srv__ListControllers__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *controller_manager_msgs__msg__ChainConnection__get_individual_type_description_source(NULL);
    sources[3] = *controller_manager_msgs__msg__ControllerState__get_individual_type_description_source(NULL);
    sources[4] = *controller_manager_msgs__srv__ListControllers_Event__get_individual_type_description_source(NULL);
    sources[5] = *controller_manager_msgs__srv__ListControllers_Request__get_individual_type_description_source(NULL);
    sources[6] = *controller_manager_msgs__srv__ListControllers_Response__get_individual_type_description_source(NULL);
    sources[7] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
controller_manager_msgs__srv__ListControllers_Request__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *controller_manager_msgs__srv__ListControllers_Request__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
controller_manager_msgs__srv__ListControllers_Response__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[3];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 3, 3};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *controller_manager_msgs__srv__ListControllers_Response__get_individual_type_description_source(NULL),
    sources[1] = *controller_manager_msgs__msg__ChainConnection__get_individual_type_description_source(NULL);
    sources[2] = *controller_manager_msgs__msg__ControllerState__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
controller_manager_msgs__srv__ListControllers_Event__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[7];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 7, 7};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *controller_manager_msgs__srv__ListControllers_Event__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *controller_manager_msgs__msg__ChainConnection__get_individual_type_description_source(NULL);
    sources[3] = *controller_manager_msgs__msg__ControllerState__get_individual_type_description_source(NULL);
    sources[4] = *controller_manager_msgs__srv__ListControllers_Request__get_individual_type_description_source(NULL);
    sources[5] = *controller_manager_msgs__srv__ListControllers_Response__get_individual_type_description_source(NULL);
    sources[6] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
