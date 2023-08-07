// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from ur_msgs:msg/MasterboardDataMsg.idl
// generated code does not contain a copyright notice

#include "ur_msgs/msg/detail/masterboard_data_msg__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_ur_msgs
const rosidl_type_hash_t *
ur_msgs__msg__MasterboardDataMsg__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x05, 0xeb, 0xce, 0xc2, 0xfa, 0x6a, 0x0f, 0x7b,
      0xdf, 0xdb, 0x92, 0x00, 0x7a, 0x54, 0x5c, 0x3e,
      0x62, 0xcb, 0x90, 0x39, 0x61, 0x7e, 0x68, 0x57,
      0x70, 0x89, 0x2b, 0x92, 0x0b, 0x13, 0x44, 0xf9,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char ur_msgs__msg__MasterboardDataMsg__TYPE_NAME[] = "ur_msgs/msg/MasterboardDataMsg";

// Define type names, field names, and default values
static char ur_msgs__msg__MasterboardDataMsg__FIELD_NAME__digital_input_bits[] = "digital_input_bits";
static char ur_msgs__msg__MasterboardDataMsg__FIELD_NAME__digital_output_bits[] = "digital_output_bits";
static char ur_msgs__msg__MasterboardDataMsg__FIELD_NAME__analog_input_range0[] = "analog_input_range0";
static char ur_msgs__msg__MasterboardDataMsg__FIELD_NAME__analog_input_range1[] = "analog_input_range1";
static char ur_msgs__msg__MasterboardDataMsg__FIELD_NAME__analog_input0[] = "analog_input0";
static char ur_msgs__msg__MasterboardDataMsg__FIELD_NAME__analog_input1[] = "analog_input1";
static char ur_msgs__msg__MasterboardDataMsg__FIELD_NAME__analog_output_domain0[] = "analog_output_domain0";
static char ur_msgs__msg__MasterboardDataMsg__FIELD_NAME__analog_output_domain1[] = "analog_output_domain1";
static char ur_msgs__msg__MasterboardDataMsg__FIELD_NAME__analog_output0[] = "analog_output0";
static char ur_msgs__msg__MasterboardDataMsg__FIELD_NAME__analog_output1[] = "analog_output1";
static char ur_msgs__msg__MasterboardDataMsg__FIELD_NAME__masterboard_temperature[] = "masterboard_temperature";
static char ur_msgs__msg__MasterboardDataMsg__FIELD_NAME__robot_voltage_48v[] = "robot_voltage_48v";
static char ur_msgs__msg__MasterboardDataMsg__FIELD_NAME__robot_current[] = "robot_current";
static char ur_msgs__msg__MasterboardDataMsg__FIELD_NAME__master_io_current[] = "master_io_current";
static char ur_msgs__msg__MasterboardDataMsg__FIELD_NAME__master_safety_state[] = "master_safety_state";
static char ur_msgs__msg__MasterboardDataMsg__FIELD_NAME__master_onoff_state[] = "master_onoff_state";

static rosidl_runtime_c__type_description__Field ur_msgs__msg__MasterboardDataMsg__FIELDS[] = {
  {
    {ur_msgs__msg__MasterboardDataMsg__FIELD_NAME__digital_input_bits, 18, 18},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ur_msgs__msg__MasterboardDataMsg__FIELD_NAME__digital_output_bits, 19, 19},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ur_msgs__msg__MasterboardDataMsg__FIELD_NAME__analog_input_range0, 19, 19},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ur_msgs__msg__MasterboardDataMsg__FIELD_NAME__analog_input_range1, 19, 19},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ur_msgs__msg__MasterboardDataMsg__FIELD_NAME__analog_input0, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ur_msgs__msg__MasterboardDataMsg__FIELD_NAME__analog_input1, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ur_msgs__msg__MasterboardDataMsg__FIELD_NAME__analog_output_domain0, 21, 21},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ur_msgs__msg__MasterboardDataMsg__FIELD_NAME__analog_output_domain1, 21, 21},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ur_msgs__msg__MasterboardDataMsg__FIELD_NAME__analog_output0, 14, 14},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ur_msgs__msg__MasterboardDataMsg__FIELD_NAME__analog_output1, 14, 14},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ur_msgs__msg__MasterboardDataMsg__FIELD_NAME__masterboard_temperature, 23, 23},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ur_msgs__msg__MasterboardDataMsg__FIELD_NAME__robot_voltage_48v, 17, 17},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ur_msgs__msg__MasterboardDataMsg__FIELD_NAME__robot_current, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ur_msgs__msg__MasterboardDataMsg__FIELD_NAME__master_io_current, 17, 17},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ur_msgs__msg__MasterboardDataMsg__FIELD_NAME__master_safety_state, 19, 19},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ur_msgs__msg__MasterboardDataMsg__FIELD_NAME__master_onoff_state, 18, 18},
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
ur_msgs__msg__MasterboardDataMsg__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {ur_msgs__msg__MasterboardDataMsg__TYPE_NAME, 30, 30},
      {ur_msgs__msg__MasterboardDataMsg__FIELDS, 16, 16},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# This data structure contains the MasterboardData structure\n"
  "# used by the Universal Robots controller\n"
  "#\n"
  "# MasterboardData is part of the data structure being send on the \n"
  "# secondary client communications interface\n"
  "# \n"
  "# This data structure is send at 10 Hz on TCP port 30002\n"
  "# \n"
  "# Documentation can be found on the Universal Robots Support site, article\n"
  "# number 16496.\n"
  "\n"
  "uint32 digital_input_bits\n"
  "uint32 digital_output_bits\n"
  "int8 analog_input_range0\n"
  "int8 analog_input_range1\n"
  "float64 analog_input0\n"
  "float64 analog_input1\n"
  "int8 analog_output_domain0\n"
  "int8 analog_output_domain1\n"
  "float64 analog_output0\n"
  "float64 analog_output1\n"
  "float32 masterboard_temperature\n"
  "float32 robot_voltage_48v\n"
  "float32 robot_current\n"
  "float32 master_io_current\n"
  "uint8 master_safety_state\n"
  "uint8 master_onoff_state";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
ur_msgs__msg__MasterboardDataMsg__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {ur_msgs__msg__MasterboardDataMsg__TYPE_NAME, 30, 30},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 775, 775},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
ur_msgs__msg__MasterboardDataMsg__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *ur_msgs__msg__MasterboardDataMsg__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
