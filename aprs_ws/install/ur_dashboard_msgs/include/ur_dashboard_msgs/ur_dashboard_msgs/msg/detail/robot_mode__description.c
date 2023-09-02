// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from ur_dashboard_msgs:msg/RobotMode.idl
// generated code does not contain a copyright notice

#include "ur_dashboard_msgs/msg/detail/robot_mode__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_ur_dashboard_msgs
const rosidl_type_hash_t *
ur_dashboard_msgs__msg__RobotMode__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xba, 0x3c, 0x37, 0x9b, 0x3c, 0x99, 0x5f, 0x66,
      0x0b, 0x38, 0xd0, 0x3a, 0x19, 0x5d, 0xc2, 0x3e,
      0xd7, 0x57, 0x1a, 0x1b, 0xc0, 0x6c, 0xee, 0xd2,
      0xce, 0xc3, 0x8c, 0x75, 0xae, 0x9b, 0xd6, 0x34,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char ur_dashboard_msgs__msg__RobotMode__TYPE_NAME[] = "ur_dashboard_msgs/msg/RobotMode";

// Define type names, field names, and default values
static char ur_dashboard_msgs__msg__RobotMode__FIELD_NAME__mode[] = "mode";

static rosidl_runtime_c__type_description__Field ur_dashboard_msgs__msg__RobotMode__FIELDS[] = {
  {
    {ur_dashboard_msgs__msg__RobotMode__FIELD_NAME__mode, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
ur_dashboard_msgs__msg__RobotMode__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {ur_dashboard_msgs__msg__RobotMode__TYPE_NAME, 31, 31},
      {ur_dashboard_msgs__msg__RobotMode__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "int8 NO_CONTROLLER=-1\n"
  "int8 DISCONNECTED=0\n"
  "int8 CONFIRM_SAFETY=1\n"
  "int8 BOOTING=2\n"
  "int8 POWER_OFF=3\n"
  "int8 POWER_ON=4\n"
  "int8 IDLE=5\n"
  "int8 BACKDRIVE=6\n"
  "int8 RUNNING=7\n"
  "int8 UPDATING_FIRMWARE=8\n"
  "\n"
  "int8 mode";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
ur_dashboard_msgs__msg__RobotMode__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {ur_dashboard_msgs__msg__RobotMode__TYPE_NAME, 31, 31},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 192, 192},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
ur_dashboard_msgs__msg__RobotMode__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *ur_dashboard_msgs__msg__RobotMode__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
