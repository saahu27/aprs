// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from ur_dashboard_msgs:msg/ProgramState.idl
// generated code does not contain a copyright notice

#include "ur_dashboard_msgs/msg/detail/program_state__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_ur_dashboard_msgs
const rosidl_type_hash_t *
ur_dashboard_msgs__msg__ProgramState__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x20, 0xe0, 0x96, 0x06, 0xe4, 0xcb, 0xa2, 0x0c,
      0xbe, 0x31, 0x68, 0x09, 0x18, 0xf2, 0x5c, 0x77,
      0x0a, 0x2c, 0x46, 0xaf, 0xc4, 0x4c, 0xa9, 0x1f,
      0x0c, 0xb3, 0x30, 0x55, 0x93, 0x33, 0xed, 0x76,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char ur_dashboard_msgs__msg__ProgramState__TYPE_NAME[] = "ur_dashboard_msgs/msg/ProgramState";

// Define type names, field names, and default values
static char ur_dashboard_msgs__msg__ProgramState__FIELD_NAME__state[] = "state";

static rosidl_runtime_c__type_description__Field ur_dashboard_msgs__msg__ProgramState__FIELDS[] = {
  {
    {ur_dashboard_msgs__msg__ProgramState__FIELD_NAME__state, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
ur_dashboard_msgs__msg__ProgramState__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {ur_dashboard_msgs__msg__ProgramState__TYPE_NAME, 34, 34},
      {ur_dashboard_msgs__msg__ProgramState__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "string STOPPED=STOPPED\n"
  "string PLAYING=PLAYING\n"
  "string PAUSED=PAUSED\n"
  "\n"
  "string state";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
ur_dashboard_msgs__msg__ProgramState__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {ur_dashboard_msgs__msg__ProgramState__TYPE_NAME, 34, 34},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 81, 81},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
ur_dashboard_msgs__msg__ProgramState__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *ur_dashboard_msgs__msg__ProgramState__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
