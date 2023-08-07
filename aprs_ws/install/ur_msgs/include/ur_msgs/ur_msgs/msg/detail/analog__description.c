// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from ur_msgs:msg/Analog.idl
// generated code does not contain a copyright notice

#include "ur_msgs/msg/detail/analog__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_ur_msgs
const rosidl_type_hash_t *
ur_msgs__msg__Analog__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xca, 0xe3, 0x5b, 0xd4, 0xfe, 0xde, 0xab, 0x37,
      0x46, 0xfa, 0x5b, 0xa4, 0x9f, 0xbb, 0xdc, 0x8d,
      0x7f, 0xa2, 0x5f, 0x84, 0xe9, 0x55, 0x26, 0xc5,
      0x40, 0x3d, 0x50, 0x7a, 0x26, 0xb2, 0xa0, 0x85,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char ur_msgs__msg__Analog__TYPE_NAME[] = "ur_msgs/msg/Analog";

// Define type names, field names, and default values
static char ur_msgs__msg__Analog__FIELD_NAME__pin[] = "pin";
static char ur_msgs__msg__Analog__FIELD_NAME__domain[] = "domain";
static char ur_msgs__msg__Analog__FIELD_NAME__state[] = "state";

static rosidl_runtime_c__type_description__Field ur_msgs__msg__Analog__FIELDS[] = {
  {
    {ur_msgs__msg__Analog__FIELD_NAME__pin, 3, 3},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ur_msgs__msg__Analog__FIELD_NAME__domain, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ur_msgs__msg__Analog__FIELD_NAME__state, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
ur_msgs__msg__Analog__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {ur_msgs__msg__Analog__TYPE_NAME, 18, 18},
      {ur_msgs__msg__Analog__FIELDS, 3, 3},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "uint8 CURRENT=0\n"
  "uint8 VOLTAGE=1\n"
  "\n"
  "uint8 pin\n"
  "uint8 domain # can be VOLTAGE or CURRENT\n"
  "float32 state";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
ur_msgs__msg__Analog__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {ur_msgs__msg__Analog__TYPE_NAME, 18, 18},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 98, 98},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
ur_msgs__msg__Analog__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *ur_msgs__msg__Analog__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
