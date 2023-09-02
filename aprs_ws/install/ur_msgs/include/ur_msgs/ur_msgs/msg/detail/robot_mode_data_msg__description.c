// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from ur_msgs:msg/RobotModeDataMsg.idl
// generated code does not contain a copyright notice

#include "ur_msgs/msg/detail/robot_mode_data_msg__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_ur_msgs
const rosidl_type_hash_t *
ur_msgs__msg__RobotModeDataMsg__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xe4, 0xb7, 0xb2, 0xde, 0x84, 0x07, 0x80, 0x29,
      0x23, 0xf3, 0x0b, 0x42, 0xab, 0x52, 0x89, 0xf9,
      0xd2, 0x76, 0x25, 0x42, 0x07, 0xce, 0x0a, 0xb7,
      0xc6, 0xe0, 0x6e, 0x1d, 0x26, 0x4a, 0xbb, 0xf6,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char ur_msgs__msg__RobotModeDataMsg__TYPE_NAME[] = "ur_msgs/msg/RobotModeDataMsg";

// Define type names, field names, and default values
static char ur_msgs__msg__RobotModeDataMsg__FIELD_NAME__timestamp[] = "timestamp";
static char ur_msgs__msg__RobotModeDataMsg__FIELD_NAME__is_robot_connected[] = "is_robot_connected";
static char ur_msgs__msg__RobotModeDataMsg__FIELD_NAME__is_real_robot_enabled[] = "is_real_robot_enabled";
static char ur_msgs__msg__RobotModeDataMsg__FIELD_NAME__is_power_on_robot[] = "is_power_on_robot";
static char ur_msgs__msg__RobotModeDataMsg__FIELD_NAME__is_emergency_stopped[] = "is_emergency_stopped";
static char ur_msgs__msg__RobotModeDataMsg__FIELD_NAME__is_protective_stopped[] = "is_protective_stopped";
static char ur_msgs__msg__RobotModeDataMsg__FIELD_NAME__is_program_running[] = "is_program_running";
static char ur_msgs__msg__RobotModeDataMsg__FIELD_NAME__is_program_paused[] = "is_program_paused";

static rosidl_runtime_c__type_description__Field ur_msgs__msg__RobotModeDataMsg__FIELDS[] = {
  {
    {ur_msgs__msg__RobotModeDataMsg__FIELD_NAME__timestamp, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ur_msgs__msg__RobotModeDataMsg__FIELD_NAME__is_robot_connected, 18, 18},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ur_msgs__msg__RobotModeDataMsg__FIELD_NAME__is_real_robot_enabled, 21, 21},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ur_msgs__msg__RobotModeDataMsg__FIELD_NAME__is_power_on_robot, 17, 17},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ur_msgs__msg__RobotModeDataMsg__FIELD_NAME__is_emergency_stopped, 20, 20},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ur_msgs__msg__RobotModeDataMsg__FIELD_NAME__is_protective_stopped, 21, 21},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ur_msgs__msg__RobotModeDataMsg__FIELD_NAME__is_program_running, 18, 18},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ur_msgs__msg__RobotModeDataMsg__FIELD_NAME__is_program_paused, 17, 17},
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
ur_msgs__msg__RobotModeDataMsg__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {ur_msgs__msg__RobotModeDataMsg__TYPE_NAME, 28, 28},
      {ur_msgs__msg__RobotModeDataMsg__FIELDS, 8, 8},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# This data structure contains the RobotModeData structure\n"
  "# used by the Universal Robots controller\n"
  "#\n"
  "# This data structure is send at 10 Hz on TCP port 30002\n"
  "#\n"
  "# Note: this message does not carry all fields from the RobotModeData structure as broadcast by the robot controller, but a subset.\n"
  "\n"
  "uint64 timestamp\n"
  "bool is_robot_connected\n"
  "bool is_real_robot_enabled\n"
  "bool is_power_on_robot\n"
  "bool is_emergency_stopped\n"
  "bool is_protective_stopped\n"
  "bool is_program_running\n"
  "bool is_program_paused";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
ur_msgs__msg__RobotModeDataMsg__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {ur_msgs__msg__RobotModeDataMsg__TYPE_NAME, 28, 28},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 486, 486},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
ur_msgs__msg__RobotModeDataMsg__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *ur_msgs__msg__RobotModeDataMsg__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
