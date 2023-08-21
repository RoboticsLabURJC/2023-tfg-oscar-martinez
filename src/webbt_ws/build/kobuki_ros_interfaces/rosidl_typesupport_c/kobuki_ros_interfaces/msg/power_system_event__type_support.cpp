// generated from rosidl_typesupport_c/resource/idl__type_support.cpp.em
// with input from kobuki_ros_interfaces:msg/PowerSystemEvent.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "kobuki_ros_interfaces/msg/detail/power_system_event__struct.h"
#include "kobuki_ros_interfaces/msg/detail/power_system_event__type_support.h"
#include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/message_type_support_dispatch.h"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_c/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace kobuki_ros_interfaces
{

namespace msg
{

namespace rosidl_typesupport_c
{

typedef struct _PowerSystemEvent_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _PowerSystemEvent_type_support_ids_t;

static const _PowerSystemEvent_type_support_ids_t _PowerSystemEvent_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _PowerSystemEvent_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _PowerSystemEvent_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _PowerSystemEvent_type_support_symbol_names_t _PowerSystemEvent_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, kobuki_ros_interfaces, msg, PowerSystemEvent)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, kobuki_ros_interfaces, msg, PowerSystemEvent)),
  }
};

typedef struct _PowerSystemEvent_type_support_data_t
{
  void * data[2];
} _PowerSystemEvent_type_support_data_t;

static _PowerSystemEvent_type_support_data_t _PowerSystemEvent_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _PowerSystemEvent_message_typesupport_map = {
  2,
  "kobuki_ros_interfaces",
  &_PowerSystemEvent_message_typesupport_ids.typesupport_identifier[0],
  &_PowerSystemEvent_message_typesupport_symbol_names.symbol_name[0],
  &_PowerSystemEvent_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t PowerSystemEvent_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_PowerSystemEvent_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace msg

}  // namespace kobuki_ros_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, kobuki_ros_interfaces, msg, PowerSystemEvent)() {
  return &::kobuki_ros_interfaces::msg::rosidl_typesupport_c::PowerSystemEvent_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
