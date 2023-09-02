// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from realsense2_camera_msgs:msg/Extrinsics.idl
// generated code does not contain a copyright notice

#include "realsense2_camera_msgs/msg/detail/extrinsics__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_realsense2_camera_msgs
const rosidl_type_hash_t *
realsense2_camera_msgs__msg__Extrinsics__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x5b, 0x65, 0x1f, 0x22, 0x1f, 0xc7, 0x0f, 0xae,
      0x90, 0x9d, 0xda, 0x72, 0xe6, 0xc0, 0x47, 0x08,
      0x05, 0xa1, 0x86, 0x06, 0x16, 0xab, 0x82, 0x9d,
      0x88, 0x85, 0x84, 0x82, 0x34, 0x3d, 0xc6, 0x5a,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char realsense2_camera_msgs__msg__Extrinsics__TYPE_NAME[] = "realsense2_camera_msgs/msg/Extrinsics";

// Define type names, field names, and default values
static char realsense2_camera_msgs__msg__Extrinsics__FIELD_NAME__rotation[] = "rotation";
static char realsense2_camera_msgs__msg__Extrinsics__FIELD_NAME__translation[] = "translation";

static rosidl_runtime_c__type_description__Field realsense2_camera_msgs__msg__Extrinsics__FIELDS[] = {
  {
    {realsense2_camera_msgs__msg__Extrinsics__FIELD_NAME__rotation, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE_ARRAY,
      9,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {realsense2_camera_msgs__msg__Extrinsics__FIELD_NAME__translation, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE_ARRAY,
      3,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
realsense2_camera_msgs__msg__Extrinsics__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {realsense2_camera_msgs__msg__Extrinsics__TYPE_NAME, 37, 37},
      {realsense2_camera_msgs__msg__Extrinsics__FIELDS, 2, 2},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# Cross-stream extrinsics: encodes the topology describing how the different devices are oriented\n"
  "float64[9] rotation  # Column - major 3x3 rotation matrix\n"
  "float64[3] translation  # Three-element translation vector, in meters";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
realsense2_camera_msgs__msg__Extrinsics__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {realsense2_camera_msgs__msg__Extrinsics__TYPE_NAME, 37, 37},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 226, 226},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
realsense2_camera_msgs__msg__Extrinsics__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *realsense2_camera_msgs__msg__Extrinsics__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
