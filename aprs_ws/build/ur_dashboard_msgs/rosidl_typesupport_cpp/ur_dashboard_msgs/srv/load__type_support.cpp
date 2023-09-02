// generated from rosidl_typesupport_cpp/resource/idl__type_support.cpp.em
// with input from ur_dashboard_msgs:srv/Load.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "ur_dashboard_msgs/srv/detail/load__functions.h"
#include "ur_dashboard_msgs/srv/detail/load__struct.hpp"
#include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
#include "rosidl_typesupport_cpp/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace ur_dashboard_msgs
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _Load_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Load_Request_type_support_ids_t;

static const _Load_Request_type_support_ids_t _Load_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _Load_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Load_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Load_Request_type_support_symbol_names_t _Load_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, ur_dashboard_msgs, srv, Load_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, ur_dashboard_msgs, srv, Load_Request)),
  }
};

typedef struct _Load_Request_type_support_data_t
{
  void * data[2];
} _Load_Request_type_support_data_t;

static _Load_Request_type_support_data_t _Load_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Load_Request_message_typesupport_map = {
  2,
  "ur_dashboard_msgs",
  &_Load_Request_message_typesupport_ids.typesupport_identifier[0],
  &_Load_Request_message_typesupport_symbol_names.symbol_name[0],
  &_Load_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Load_Request_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Load_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &ur_dashboard_msgs__srv__Load_Request__get_type_hash,
  &ur_dashboard_msgs__srv__Load_Request__get_type_description,
  &ur_dashboard_msgs__srv__Load_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace ur_dashboard_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<ur_dashboard_msgs::srv::Load_Request>()
{
  return &::ur_dashboard_msgs::srv::rosidl_typesupport_cpp::Load_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, ur_dashboard_msgs, srv, Load_Request)() {
  return get_message_type_support_handle<ur_dashboard_msgs::srv::Load_Request>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "ur_dashboard_msgs/srv/detail/load__functions.h"
// already included above
// #include "ur_dashboard_msgs/srv/detail/load__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace ur_dashboard_msgs
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _Load_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Load_Response_type_support_ids_t;

static const _Load_Response_type_support_ids_t _Load_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _Load_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Load_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Load_Response_type_support_symbol_names_t _Load_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, ur_dashboard_msgs, srv, Load_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, ur_dashboard_msgs, srv, Load_Response)),
  }
};

typedef struct _Load_Response_type_support_data_t
{
  void * data[2];
} _Load_Response_type_support_data_t;

static _Load_Response_type_support_data_t _Load_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Load_Response_message_typesupport_map = {
  2,
  "ur_dashboard_msgs",
  &_Load_Response_message_typesupport_ids.typesupport_identifier[0],
  &_Load_Response_message_typesupport_symbol_names.symbol_name[0],
  &_Load_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Load_Response_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Load_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &ur_dashboard_msgs__srv__Load_Response__get_type_hash,
  &ur_dashboard_msgs__srv__Load_Response__get_type_description,
  &ur_dashboard_msgs__srv__Load_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace ur_dashboard_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<ur_dashboard_msgs::srv::Load_Response>()
{
  return &::ur_dashboard_msgs::srv::rosidl_typesupport_cpp::Load_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, ur_dashboard_msgs, srv, Load_Response)() {
  return get_message_type_support_handle<ur_dashboard_msgs::srv::Load_Response>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "ur_dashboard_msgs/srv/detail/load__functions.h"
// already included above
// #include "ur_dashboard_msgs/srv/detail/load__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace ur_dashboard_msgs
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _Load_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Load_Event_type_support_ids_t;

static const _Load_Event_type_support_ids_t _Load_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _Load_Event_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Load_Event_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Load_Event_type_support_symbol_names_t _Load_Event_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, ur_dashboard_msgs, srv, Load_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, ur_dashboard_msgs, srv, Load_Event)),
  }
};

typedef struct _Load_Event_type_support_data_t
{
  void * data[2];
} _Load_Event_type_support_data_t;

static _Load_Event_type_support_data_t _Load_Event_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Load_Event_message_typesupport_map = {
  2,
  "ur_dashboard_msgs",
  &_Load_Event_message_typesupport_ids.typesupport_identifier[0],
  &_Load_Event_message_typesupport_symbol_names.symbol_name[0],
  &_Load_Event_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Load_Event_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Load_Event_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &ur_dashboard_msgs__srv__Load_Event__get_type_hash,
  &ur_dashboard_msgs__srv__Load_Event__get_type_description,
  &ur_dashboard_msgs__srv__Load_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace ur_dashboard_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<ur_dashboard_msgs::srv::Load_Event>()
{
  return &::ur_dashboard_msgs::srv::rosidl_typesupport_cpp::Load_Event_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, ur_dashboard_msgs, srv, Load_Event)() {
  return get_message_type_support_handle<ur_dashboard_msgs::srv::Load_Event>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "ur_dashboard_msgs/srv/detail/load__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/service_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace ur_dashboard_msgs
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _Load_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Load_type_support_ids_t;

static const _Load_type_support_ids_t _Load_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _Load_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Load_type_support_symbol_names_t;
#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Load_type_support_symbol_names_t _Load_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, ur_dashboard_msgs, srv, Load)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, ur_dashboard_msgs, srv, Load)),
  }
};

typedef struct _Load_type_support_data_t
{
  void * data[2];
} _Load_type_support_data_t;

static _Load_type_support_data_t _Load_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Load_service_typesupport_map = {
  2,
  "ur_dashboard_msgs",
  &_Load_service_typesupport_ids.typesupport_identifier[0],
  &_Load_service_typesupport_symbol_names.symbol_name[0],
  &_Load_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t Load_service_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Load_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
  ::rosidl_typesupport_cpp::get_message_type_support_handle<ur_dashboard_msgs::srv::Load_Request>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<ur_dashboard_msgs::srv::Load_Response>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<ur_dashboard_msgs::srv::Load_Event>(),
  &::rosidl_typesupport_cpp::service_create_event_message<ur_dashboard_msgs::srv::Load>,
  &::rosidl_typesupport_cpp::service_destroy_event_message<ur_dashboard_msgs::srv::Load>,
  &ur_dashboard_msgs__srv__Load__get_type_hash,
  &ur_dashboard_msgs__srv__Load__get_type_description,
  &ur_dashboard_msgs__srv__Load__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace ur_dashboard_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<ur_dashboard_msgs::srv::Load>()
{
  return &::ur_dashboard_msgs::srv::rosidl_typesupport_cpp::Load_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_cpp, ur_dashboard_msgs, srv, Load)() {
  return ::rosidl_typesupport_cpp::get_service_type_support_handle<ur_dashboard_msgs::srv::Load>();
}

#ifdef __cplusplus
}
#endif
