// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from ur_msgs:msg/Digital.idl
// generated code does not contain a copyright notice

#include "ur_msgs/msg/detail/digital__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_ur_msgs
const rosidl_type_hash_t *
ur_msgs__msg__Digital__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xa8, 0x35, 0x5a, 0x0e, 0x12, 0x0c, 0xf8, 0x08,
      0xea, 0x94, 0xb0, 0x0d, 0x12, 0xac, 0xd8, 0xc3,
      0x1f, 0x4e, 0x3b, 0x37, 0x7a, 0x85, 0x49, 0x37,
      0x2e, 0x14, 0x7b, 0x20, 0x65, 0x51, 0x8d, 0x85,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char ur_msgs__msg__Digital__TYPE_NAME[] = "ur_msgs/msg/Digital";

// Define type names, field names, and default values
static char ur_msgs__msg__Digital__FIELD_NAME__pin[] = "pin";
static char ur_msgs__msg__Digital__FIELD_NAME__state[] = "state";

static rosidl_runtime_c__type_description__Field ur_msgs__msg__Digital__FIELDS[] = {
  {
    {ur_msgs__msg__Digital__FIELD_NAME__pin, 3, 3},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ur_msgs__msg__Digital__FIELD_NAME__state, 5, 5},
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
ur_msgs__msg__Digital__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {ur_msgs__msg__Digital__TYPE_NAME, 19, 19},
      {ur_msgs__msg__Digital__FIELDS, 2, 2},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "uint8 pin\n"
  "bool state";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
ur_msgs__msg__Digital__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {ur_msgs__msg__Digital__TYPE_NAME, 19, 19},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 21, 21},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
ur_msgs__msg__Digital__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *ur_msgs__msg__Digital__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
