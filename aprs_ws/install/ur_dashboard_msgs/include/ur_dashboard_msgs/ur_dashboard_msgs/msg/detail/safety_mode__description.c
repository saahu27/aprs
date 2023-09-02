// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from ur_dashboard_msgs:msg/SafetyMode.idl
// generated code does not contain a copyright notice

#include "ur_dashboard_msgs/msg/detail/safety_mode__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_ur_dashboard_msgs
const rosidl_type_hash_t *
ur_dashboard_msgs__msg__SafetyMode__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x9e, 0xb2, 0x71, 0x6e, 0x69, 0x05, 0xf0, 0x6e,
      0x4e, 0xb6, 0x0a, 0xf2, 0x67, 0x12, 0x66, 0x04,
      0x86, 0xe9, 0x09, 0x02, 0x6a, 0xa8, 0x9c, 0x55,
      0x3d, 0xd6, 0x33, 0xf1, 0xfb, 0x22, 0xf5, 0x92,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char ur_dashboard_msgs__msg__SafetyMode__TYPE_NAME[] = "ur_dashboard_msgs/msg/SafetyMode";

// Define type names, field names, and default values
static char ur_dashboard_msgs__msg__SafetyMode__FIELD_NAME__mode[] = "mode";

static rosidl_runtime_c__type_description__Field ur_dashboard_msgs__msg__SafetyMode__FIELDS[] = {
  {
    {ur_dashboard_msgs__msg__SafetyMode__FIELD_NAME__mode, 4, 4},
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
ur_dashboard_msgs__msg__SafetyMode__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {ur_dashboard_msgs__msg__SafetyMode__TYPE_NAME, 32, 32},
      {ur_dashboard_msgs__msg__SafetyMode__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "uint8 NORMAL=1\n"
  "uint8 REDUCED=2\n"
  "uint8 PROTECTIVE_STOP=3\n"
  "uint8 RECOVERY=4\n"
  "uint8 SAFEGUARD_STOP=5\n"
  "uint8 SYSTEM_EMERGENCY_STOP=6\n"
  "uint8 ROBOT_EMERGENCY_STOP=7\n"
  "uint8 VIOLATION=8\n"
  "uint8 FAULT=9\n"
  "uint8 VALIDATE_JOINT_ID=10\n"
  "uint8 UNDEFINED_SAFETY_MODE=11\n"
  "uint8 AUTOMATIC_MODE_SAFEGUARD_STOP=12\n"
  "uint8 SYSTEM_THREE_POSITION_ENABLING_STOP=13\n"
  "\n"
  "uint8 mode";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
ur_dashboard_msgs__msg__SafetyMode__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {ur_dashboard_msgs__msg__SafetyMode__TYPE_NAME, 32, 32},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 340, 340},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
ur_dashboard_msgs__msg__SafetyMode__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *ur_dashboard_msgs__msg__SafetyMode__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
