// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from controller_manager_msgs:msg/HardwareComponentState.idl
// generated code does not contain a copyright notice

#include "controller_manager_msgs/msg/detail/hardware_component_state__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_controller_manager_msgs
const rosidl_type_hash_t *
controller_manager_msgs__msg__HardwareComponentState__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x42, 0x13, 0x31, 0x1b, 0xad, 0x88, 0x01, 0x09,
      0xe5, 0xfa, 0x04, 0xe7, 0x87, 0x3b, 0xac, 0x5b,
      0x43, 0xbc, 0x28, 0x74, 0xbe, 0xbe, 0x1d, 0x18,
      0xa5, 0x1a, 0x86, 0x4b, 0x71, 0x46, 0xa5, 0x3c,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "lifecycle_msgs/msg/detail/state__functions.h"
#include "controller_manager_msgs/msg/detail/hardware_interface__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t controller_manager_msgs__msg__HardwareInterface__EXPECTED_HASH = {1, {
    0xc2, 0x4d, 0xdd, 0x03, 0x64, 0x68, 0x6a, 0x74,
    0xc1, 0xce, 0xdc, 0x2d, 0x01, 0x5b, 0x58, 0xa9,
    0xb7, 0xeb, 0x10, 0x7b, 0x86, 0x44, 0xc1, 0x4a,
    0x63, 0xcd, 0x5e, 0xd6, 0x78, 0x18, 0x14, 0x5f,
  }};
static const rosidl_type_hash_t lifecycle_msgs__msg__State__EXPECTED_HASH = {1, {
    0xdd, 0x2d, 0x02, 0xb8, 0x2f, 0x3e, 0xbc, 0x85,
    0x8e, 0x53, 0xc4, 0x31, 0xb1, 0xe6, 0xe9, 0x1f,
    0x3f, 0xfc, 0x71, 0x43, 0x6f, 0xc8, 0x1d, 0x07,
    0x15, 0x21, 0x4a, 0xc6, 0xee, 0x21, 0x07, 0xa0,
  }};
#endif

static char controller_manager_msgs__msg__HardwareComponentState__TYPE_NAME[] = "controller_manager_msgs/msg/HardwareComponentState";
static char controller_manager_msgs__msg__HardwareInterface__TYPE_NAME[] = "controller_manager_msgs/msg/HardwareInterface";
static char lifecycle_msgs__msg__State__TYPE_NAME[] = "lifecycle_msgs/msg/State";

// Define type names, field names, and default values
static char controller_manager_msgs__msg__HardwareComponentState__FIELD_NAME__name[] = "name";
static char controller_manager_msgs__msg__HardwareComponentState__FIELD_NAME__type[] = "type";
static char controller_manager_msgs__msg__HardwareComponentState__FIELD_NAME__class_type[] = "class_type";
static char controller_manager_msgs__msg__HardwareComponentState__FIELD_NAME__plugin_name[] = "plugin_name";
static char controller_manager_msgs__msg__HardwareComponentState__FIELD_NAME__state[] = "state";
static char controller_manager_msgs__msg__HardwareComponentState__FIELD_NAME__command_interfaces[] = "command_interfaces";
static char controller_manager_msgs__msg__HardwareComponentState__FIELD_NAME__state_interfaces[] = "state_interfaces";

static rosidl_runtime_c__type_description__Field controller_manager_msgs__msg__HardwareComponentState__FIELDS[] = {
  {
    {controller_manager_msgs__msg__HardwareComponentState__FIELD_NAME__name, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {controller_manager_msgs__msg__HardwareComponentState__FIELD_NAME__type, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {controller_manager_msgs__msg__HardwareComponentState__FIELD_NAME__class_type, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {controller_manager_msgs__msg__HardwareComponentState__FIELD_NAME__plugin_name, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {controller_manager_msgs__msg__HardwareComponentState__FIELD_NAME__state, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {lifecycle_msgs__msg__State__TYPE_NAME, 24, 24},
    },
    {NULL, 0, 0},
  },
  {
    {controller_manager_msgs__msg__HardwareComponentState__FIELD_NAME__command_interfaces, 18, 18},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {controller_manager_msgs__msg__HardwareInterface__TYPE_NAME, 45, 45},
    },
    {NULL, 0, 0},
  },
  {
    {controller_manager_msgs__msg__HardwareComponentState__FIELD_NAME__state_interfaces, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {controller_manager_msgs__msg__HardwareInterface__TYPE_NAME, 45, 45},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription controller_manager_msgs__msg__HardwareComponentState__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {controller_manager_msgs__msg__HardwareInterface__TYPE_NAME, 45, 45},
    {NULL, 0, 0},
  },
  {
    {lifecycle_msgs__msg__State__TYPE_NAME, 24, 24},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
controller_manager_msgs__msg__HardwareComponentState__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {controller_manager_msgs__msg__HardwareComponentState__TYPE_NAME, 50, 50},
      {controller_manager_msgs__msg__HardwareComponentState__FIELDS, 7, 7},
    },
    {controller_manager_msgs__msg__HardwareComponentState__REFERENCED_TYPE_DESCRIPTIONS, 2, 2},
  };
  if (!constructed) {
    assert(0 == memcmp(&controller_manager_msgs__msg__HardwareInterface__EXPECTED_HASH, controller_manager_msgs__msg__HardwareInterface__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = controller_manager_msgs__msg__HardwareInterface__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&lifecycle_msgs__msg__State__EXPECTED_HASH, lifecycle_msgs__msg__State__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = lifecycle_msgs__msg__State__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "string name\n"
  "string type\n"
  "string class_type  # DEPRECATED\n"
  "string plugin_name\n"
  "lifecycle_msgs/State state\n"
  "HardwareInterface[] command_interfaces\n"
  "HardwareInterface[] state_interfaces";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
controller_manager_msgs__msg__HardwareComponentState__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {controller_manager_msgs__msg__HardwareComponentState__TYPE_NAME, 50, 50},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 178, 178},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
controller_manager_msgs__msg__HardwareComponentState__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[3];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 3, 3};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *controller_manager_msgs__msg__HardwareComponentState__get_individual_type_description_source(NULL),
    sources[1] = *controller_manager_msgs__msg__HardwareInterface__get_individual_type_description_source(NULL);
    sources[2] = *lifecycle_msgs__msg__State__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
