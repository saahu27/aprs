// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from ur_msgs:msg/RobotStateRTMsg.idl
// generated code does not contain a copyright notice

#include "ur_msgs/msg/detail/robot_state_rt_msg__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_ur_msgs
const rosidl_type_hash_t *
ur_msgs__msg__RobotStateRTMsg__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xd1, 0xc2, 0xcf, 0x9d, 0x2d, 0x74, 0x79, 0x27,
      0x00, 0x27, 0x35, 0xa7, 0xf8, 0xe4, 0xbb, 0x37,
      0xc7, 0x64, 0xca, 0xc7, 0x06, 0xc2, 0x48, 0xf7,
      0x6c, 0xed, 0xae, 0x88, 0x4a, 0xa7, 0xad, 0x5d,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char ur_msgs__msg__RobotStateRTMsg__TYPE_NAME[] = "ur_msgs/msg/RobotStateRTMsg";

// Define type names, field names, and default values
static char ur_msgs__msg__RobotStateRTMsg__FIELD_NAME__time[] = "time";
static char ur_msgs__msg__RobotStateRTMsg__FIELD_NAME__q_target[] = "q_target";
static char ur_msgs__msg__RobotStateRTMsg__FIELD_NAME__qd_target[] = "qd_target";
static char ur_msgs__msg__RobotStateRTMsg__FIELD_NAME__qdd_target[] = "qdd_target";
static char ur_msgs__msg__RobotStateRTMsg__FIELD_NAME__i_target[] = "i_target";
static char ur_msgs__msg__RobotStateRTMsg__FIELD_NAME__m_target[] = "m_target";
static char ur_msgs__msg__RobotStateRTMsg__FIELD_NAME__q_actual[] = "q_actual";
static char ur_msgs__msg__RobotStateRTMsg__FIELD_NAME__qd_actual[] = "qd_actual";
static char ur_msgs__msg__RobotStateRTMsg__FIELD_NAME__i_actual[] = "i_actual";
static char ur_msgs__msg__RobotStateRTMsg__FIELD_NAME__tool_acc_values[] = "tool_acc_values";
static char ur_msgs__msg__RobotStateRTMsg__FIELD_NAME__tcp_force[] = "tcp_force";
static char ur_msgs__msg__RobotStateRTMsg__FIELD_NAME__tool_vector[] = "tool_vector";
static char ur_msgs__msg__RobotStateRTMsg__FIELD_NAME__tcp_speed[] = "tcp_speed";
static char ur_msgs__msg__RobotStateRTMsg__FIELD_NAME__digital_input_bits[] = "digital_input_bits";
static char ur_msgs__msg__RobotStateRTMsg__FIELD_NAME__motor_temperatures[] = "motor_temperatures";
static char ur_msgs__msg__RobotStateRTMsg__FIELD_NAME__controller_timer[] = "controller_timer";
static char ur_msgs__msg__RobotStateRTMsg__FIELD_NAME__test_value[] = "test_value";
static char ur_msgs__msg__RobotStateRTMsg__FIELD_NAME__robot_mode[] = "robot_mode";
static char ur_msgs__msg__RobotStateRTMsg__FIELD_NAME__joint_modes[] = "joint_modes";

static rosidl_runtime_c__type_description__Field ur_msgs__msg__RobotStateRTMsg__FIELDS[] = {
  {
    {ur_msgs__msg__RobotStateRTMsg__FIELD_NAME__time, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ur_msgs__msg__RobotStateRTMsg__FIELD_NAME__q_target, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ur_msgs__msg__RobotStateRTMsg__FIELD_NAME__qd_target, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ur_msgs__msg__RobotStateRTMsg__FIELD_NAME__qdd_target, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ur_msgs__msg__RobotStateRTMsg__FIELD_NAME__i_target, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ur_msgs__msg__RobotStateRTMsg__FIELD_NAME__m_target, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ur_msgs__msg__RobotStateRTMsg__FIELD_NAME__q_actual, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ur_msgs__msg__RobotStateRTMsg__FIELD_NAME__qd_actual, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ur_msgs__msg__RobotStateRTMsg__FIELD_NAME__i_actual, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ur_msgs__msg__RobotStateRTMsg__FIELD_NAME__tool_acc_values, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ur_msgs__msg__RobotStateRTMsg__FIELD_NAME__tcp_force, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ur_msgs__msg__RobotStateRTMsg__FIELD_NAME__tool_vector, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ur_msgs__msg__RobotStateRTMsg__FIELD_NAME__tcp_speed, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ur_msgs__msg__RobotStateRTMsg__FIELD_NAME__digital_input_bits, 18, 18},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ur_msgs__msg__RobotStateRTMsg__FIELD_NAME__motor_temperatures, 18, 18},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ur_msgs__msg__RobotStateRTMsg__FIELD_NAME__controller_timer, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ur_msgs__msg__RobotStateRTMsg__FIELD_NAME__test_value, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ur_msgs__msg__RobotStateRTMsg__FIELD_NAME__robot_mode, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ur_msgs__msg__RobotStateRTMsg__FIELD_NAME__joint_modes, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
ur_msgs__msg__RobotStateRTMsg__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {ur_msgs__msg__RobotStateRTMsg__TYPE_NAME, 27, 27},
      {ur_msgs__msg__RobotStateRTMsg__FIELDS, 19, 19},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# Data structure for the realtime communications interface (aka Matlab interface)\n"
  "# used by the Universal Robots controller\n"
  "# \n"
  "# This data structure is send at 125 Hz on TCP port 30003\n"
  "# \n"
  "# Dokumentation can be found on the Universal Robots Support Wiki\n"
  "# (http://wiki03.lynero.net/Technical/RealTimeClientInterface?rev=9)\n"
  "\n"
  "float64 time\n"
  "float64[] q_target\n"
  "float64[] qd_target\n"
  "float64[] qdd_target\n"
  "float64[] i_target\n"
  "float64[] m_target\n"
  "float64[] q_actual\n"
  "float64[] qd_actual\n"
  "float64[] i_actual\n"
  "float64[] tool_acc_values\n"
  "float64[] tcp_force\n"
  "float64[] tool_vector\n"
  "float64[] tcp_speed\n"
  "float64 digital_input_bits\n"
  "float64[] motor_temperatures\n"
  "float64 controller_timer\n"
  "float64 test_value\n"
  "float64 robot_mode\n"
  "float64[] joint_modes";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
ur_msgs__msg__RobotStateRTMsg__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {ur_msgs__msg__RobotStateRTMsg__TYPE_NAME, 27, 27},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 722, 722},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
ur_msgs__msg__RobotStateRTMsg__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *ur_msgs__msg__RobotStateRTMsg__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
