// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from ur_msgs:msg/ToolDataMsg.idl
// generated code does not contain a copyright notice

#include "ur_msgs/msg/detail/tool_data_msg__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_ur_msgs
const rosidl_type_hash_t *
ur_msgs__msg__ToolDataMsg__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xb9, 0xfa, 0xb3, 0xf6, 0x25, 0x7c, 0x54, 0x2e,
      0x53, 0x77, 0x98, 0x92, 0xad, 0x0e, 0x51, 0x12,
      0x48, 0xea, 0x49, 0x1a, 0xc6, 0x32, 0x7e, 0x8a,
      0x7f, 0x0a, 0x67, 0xca, 0xd0, 0x20, 0x90, 0xc4,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char ur_msgs__msg__ToolDataMsg__TYPE_NAME[] = "ur_msgs/msg/ToolDataMsg";

// Define type names, field names, and default values
static char ur_msgs__msg__ToolDataMsg__FIELD_NAME__analog_input_range2[] = "analog_input_range2";
static char ur_msgs__msg__ToolDataMsg__FIELD_NAME__analog_input_range3[] = "analog_input_range3";
static char ur_msgs__msg__ToolDataMsg__FIELD_NAME__analog_input2[] = "analog_input2";
static char ur_msgs__msg__ToolDataMsg__FIELD_NAME__analog_input3[] = "analog_input3";
static char ur_msgs__msg__ToolDataMsg__FIELD_NAME__tool_voltage_48v[] = "tool_voltage_48v";
static char ur_msgs__msg__ToolDataMsg__FIELD_NAME__tool_output_voltage[] = "tool_output_voltage";
static char ur_msgs__msg__ToolDataMsg__FIELD_NAME__tool_current[] = "tool_current";
static char ur_msgs__msg__ToolDataMsg__FIELD_NAME__tool_temperature[] = "tool_temperature";
static char ur_msgs__msg__ToolDataMsg__FIELD_NAME__tool_mode[] = "tool_mode";

static rosidl_runtime_c__type_description__Field ur_msgs__msg__ToolDataMsg__FIELDS[] = {
  {
    {ur_msgs__msg__ToolDataMsg__FIELD_NAME__analog_input_range2, 19, 19},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ur_msgs__msg__ToolDataMsg__FIELD_NAME__analog_input_range3, 19, 19},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ur_msgs__msg__ToolDataMsg__FIELD_NAME__analog_input2, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ur_msgs__msg__ToolDataMsg__FIELD_NAME__analog_input3, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ur_msgs__msg__ToolDataMsg__FIELD_NAME__tool_voltage_48v, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ur_msgs__msg__ToolDataMsg__FIELD_NAME__tool_output_voltage, 19, 19},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ur_msgs__msg__ToolDataMsg__FIELD_NAME__tool_current, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ur_msgs__msg__ToolDataMsg__FIELD_NAME__tool_temperature, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ur_msgs__msg__ToolDataMsg__FIELD_NAME__tool_mode, 9, 9},
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
ur_msgs__msg__ToolDataMsg__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {ur_msgs__msg__ToolDataMsg__TYPE_NAME, 23, 23},
      {ur_msgs__msg__ToolDataMsg__FIELDS, 9, 9},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# This data structure contains the ToolData structure\n"
  "# used by the Universal Robots controller\n"
  "\n"
  "int8 ANALOG_INPUT_RANGE_CURRENT = 0\n"
  "int8 ANALOG_INPUT_RANGE_VOLTAGE = 1\n"
  "\n"
  "int8 analog_input_range2 # one of ANALOG_INPUT_RANGE_*\n"
  "int8 analog_input_range3 # one of ANALOG_INPUT_RANGE_*\n"
  "float64 analog_input2\n"
  "float64 analog_input3\n"
  "float32 tool_voltage_48v\n"
  "uint8 tool_output_voltage\n"
  "float32 tool_current\n"
  "float32 tool_temperature\n"
  "\n"
  "uint8 TOOL_BOOTLOADER_MODE = 249\n"
  "uint8 TOOL_RUNNING_MODE = 253\n"
  "uint8 TOOL_IDLE_MODE = 255\n"
  "\n"
  "uint8 tool_mode # one of TOOL_*";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
ur_msgs__msg__ToolDataMsg__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {ur_msgs__msg__ToolDataMsg__TYPE_NAME, 23, 23},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 545, 545},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
ur_msgs__msg__ToolDataMsg__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *ur_msgs__msg__ToolDataMsg__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
