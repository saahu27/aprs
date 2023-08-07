// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from ur_msgs:msg/IOStates.idl
// generated code does not contain a copyright notice

#include "ur_msgs/msg/detail/io_states__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_ur_msgs
const rosidl_type_hash_t *
ur_msgs__msg__IOStates__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x7a, 0x62, 0x60, 0x6d, 0x52, 0xc4, 0xb2, 0xaa,
      0xa3, 0xfd, 0x3c, 0x5b, 0xc5, 0x65, 0xcf, 0xda,
      0x9c, 0x6f, 0xe8, 0xc2, 0xd6, 0x9b, 0xbc, 0x7e,
      0x3e, 0xad, 0xcc, 0xde, 0x4c, 0xfc, 0x2a, 0x32,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "ur_msgs/msg/detail/digital__functions.h"
#include "ur_msgs/msg/detail/analog__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t ur_msgs__msg__Analog__EXPECTED_HASH = {1, {
    0xca, 0xe3, 0x5b, 0xd4, 0xfe, 0xde, 0xab, 0x37,
    0x46, 0xfa, 0x5b, 0xa4, 0x9f, 0xbb, 0xdc, 0x8d,
    0x7f, 0xa2, 0x5f, 0x84, 0xe9, 0x55, 0x26, 0xc5,
    0x40, 0x3d, 0x50, 0x7a, 0x26, 0xb2, 0xa0, 0x85,
  }};
static const rosidl_type_hash_t ur_msgs__msg__Digital__EXPECTED_HASH = {1, {
    0xa8, 0x35, 0x5a, 0x0e, 0x12, 0x0c, 0xf8, 0x08,
    0xea, 0x94, 0xb0, 0x0d, 0x12, 0xac, 0xd8, 0xc3,
    0x1f, 0x4e, 0x3b, 0x37, 0x7a, 0x85, 0x49, 0x37,
    0x2e, 0x14, 0x7b, 0x20, 0x65, 0x51, 0x8d, 0x85,
  }};
#endif

static char ur_msgs__msg__IOStates__TYPE_NAME[] = "ur_msgs/msg/IOStates";
static char ur_msgs__msg__Analog__TYPE_NAME[] = "ur_msgs/msg/Analog";
static char ur_msgs__msg__Digital__TYPE_NAME[] = "ur_msgs/msg/Digital";

// Define type names, field names, and default values
static char ur_msgs__msg__IOStates__FIELD_NAME__digital_in_states[] = "digital_in_states";
static char ur_msgs__msg__IOStates__FIELD_NAME__digital_out_states[] = "digital_out_states";
static char ur_msgs__msg__IOStates__FIELD_NAME__flag_states[] = "flag_states";
static char ur_msgs__msg__IOStates__FIELD_NAME__analog_in_states[] = "analog_in_states";
static char ur_msgs__msg__IOStates__FIELD_NAME__analog_out_states[] = "analog_out_states";

static rosidl_runtime_c__type_description__Field ur_msgs__msg__IOStates__FIELDS[] = {
  {
    {ur_msgs__msg__IOStates__FIELD_NAME__digital_in_states, 17, 17},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {ur_msgs__msg__Digital__TYPE_NAME, 19, 19},
    },
    {NULL, 0, 0},
  },
  {
    {ur_msgs__msg__IOStates__FIELD_NAME__digital_out_states, 18, 18},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {ur_msgs__msg__Digital__TYPE_NAME, 19, 19},
    },
    {NULL, 0, 0},
  },
  {
    {ur_msgs__msg__IOStates__FIELD_NAME__flag_states, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {ur_msgs__msg__Digital__TYPE_NAME, 19, 19},
    },
    {NULL, 0, 0},
  },
  {
    {ur_msgs__msg__IOStates__FIELD_NAME__analog_in_states, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {ur_msgs__msg__Analog__TYPE_NAME, 18, 18},
    },
    {NULL, 0, 0},
  },
  {
    {ur_msgs__msg__IOStates__FIELD_NAME__analog_out_states, 17, 17},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {ur_msgs__msg__Analog__TYPE_NAME, 18, 18},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription ur_msgs__msg__IOStates__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {ur_msgs__msg__Analog__TYPE_NAME, 18, 18},
    {NULL, 0, 0},
  },
  {
    {ur_msgs__msg__Digital__TYPE_NAME, 19, 19},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
ur_msgs__msg__IOStates__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {ur_msgs__msg__IOStates__TYPE_NAME, 20, 20},
      {ur_msgs__msg__IOStates__FIELDS, 5, 5},
    },
    {ur_msgs__msg__IOStates__REFERENCED_TYPE_DESCRIPTIONS, 2, 2},
  };
  if (!constructed) {
    assert(0 == memcmp(&ur_msgs__msg__Analog__EXPECTED_HASH, ur_msgs__msg__Analog__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = ur_msgs__msg__Analog__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&ur_msgs__msg__Digital__EXPECTED_HASH, ur_msgs__msg__Digital__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = ur_msgs__msg__Digital__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "Digital[] digital_in_states\n"
  "Digital[] digital_out_states\n"
  "Digital[] flag_states\n"
  "Analog[] analog_in_states\n"
  "Analog[] analog_out_states";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
ur_msgs__msg__IOStates__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {ur_msgs__msg__IOStates__TYPE_NAME, 20, 20},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 132, 132},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
ur_msgs__msg__IOStates__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[3];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 3, 3};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *ur_msgs__msg__IOStates__get_individual_type_description_source(NULL),
    sources[1] = *ur_msgs__msg__Analog__get_individual_type_description_source(NULL);
    sources[2] = *ur_msgs__msg__Digital__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
