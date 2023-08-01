// generated from rosidl_typesupport_c/resource/idl__type_support.cpp.em
// with input from kobuki_ros_interfaces:action/AutoDocking.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "kobuki_ros_interfaces/action/detail/auto_docking__struct.h"
#include "kobuki_ros_interfaces/action/detail/auto_docking__type_support.h"
#include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/message_type_support_dispatch.h"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_c/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace kobuki_ros_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _AutoDocking_Goal_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _AutoDocking_Goal_type_support_ids_t;

static const _AutoDocking_Goal_type_support_ids_t _AutoDocking_Goal_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _AutoDocking_Goal_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _AutoDocking_Goal_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _AutoDocking_Goal_type_support_symbol_names_t _AutoDocking_Goal_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, kobuki_ros_interfaces, action, AutoDocking_Goal)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, kobuki_ros_interfaces, action, AutoDocking_Goal)),
  }
};

typedef struct _AutoDocking_Goal_type_support_data_t
{
  void * data[2];
} _AutoDocking_Goal_type_support_data_t;

static _AutoDocking_Goal_type_support_data_t _AutoDocking_Goal_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _AutoDocking_Goal_message_typesupport_map = {
  2,
  "kobuki_ros_interfaces",
  &_AutoDocking_Goal_message_typesupport_ids.typesupport_identifier[0],
  &_AutoDocking_Goal_message_typesupport_symbol_names.symbol_name[0],
  &_AutoDocking_Goal_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t AutoDocking_Goal_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_AutoDocking_Goal_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace kobuki_ros_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, kobuki_ros_interfaces, action, AutoDocking_Goal)() {
  return &::kobuki_ros_interfaces::action::rosidl_typesupport_c::AutoDocking_Goal_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "kobuki_ros_interfaces/action/detail/auto_docking__struct.h"
// already included above
// #include "kobuki_ros_interfaces/action/detail/auto_docking__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace kobuki_ros_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _AutoDocking_Result_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _AutoDocking_Result_type_support_ids_t;

static const _AutoDocking_Result_type_support_ids_t _AutoDocking_Result_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _AutoDocking_Result_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _AutoDocking_Result_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _AutoDocking_Result_type_support_symbol_names_t _AutoDocking_Result_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, kobuki_ros_interfaces, action, AutoDocking_Result)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, kobuki_ros_interfaces, action, AutoDocking_Result)),
  }
};

typedef struct _AutoDocking_Result_type_support_data_t
{
  void * data[2];
} _AutoDocking_Result_type_support_data_t;

static _AutoDocking_Result_type_support_data_t _AutoDocking_Result_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _AutoDocking_Result_message_typesupport_map = {
  2,
  "kobuki_ros_interfaces",
  &_AutoDocking_Result_message_typesupport_ids.typesupport_identifier[0],
  &_AutoDocking_Result_message_typesupport_symbol_names.symbol_name[0],
  &_AutoDocking_Result_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t AutoDocking_Result_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_AutoDocking_Result_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace kobuki_ros_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, kobuki_ros_interfaces, action, AutoDocking_Result)() {
  return &::kobuki_ros_interfaces::action::rosidl_typesupport_c::AutoDocking_Result_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "kobuki_ros_interfaces/action/detail/auto_docking__struct.h"
// already included above
// #include "kobuki_ros_interfaces/action/detail/auto_docking__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace kobuki_ros_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _AutoDocking_Feedback_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _AutoDocking_Feedback_type_support_ids_t;

static const _AutoDocking_Feedback_type_support_ids_t _AutoDocking_Feedback_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _AutoDocking_Feedback_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _AutoDocking_Feedback_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _AutoDocking_Feedback_type_support_symbol_names_t _AutoDocking_Feedback_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, kobuki_ros_interfaces, action, AutoDocking_Feedback)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, kobuki_ros_interfaces, action, AutoDocking_Feedback)),
  }
};

typedef struct _AutoDocking_Feedback_type_support_data_t
{
  void * data[2];
} _AutoDocking_Feedback_type_support_data_t;

static _AutoDocking_Feedback_type_support_data_t _AutoDocking_Feedback_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _AutoDocking_Feedback_message_typesupport_map = {
  2,
  "kobuki_ros_interfaces",
  &_AutoDocking_Feedback_message_typesupport_ids.typesupport_identifier[0],
  &_AutoDocking_Feedback_message_typesupport_symbol_names.symbol_name[0],
  &_AutoDocking_Feedback_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t AutoDocking_Feedback_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_AutoDocking_Feedback_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace kobuki_ros_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, kobuki_ros_interfaces, action, AutoDocking_Feedback)() {
  return &::kobuki_ros_interfaces::action::rosidl_typesupport_c::AutoDocking_Feedback_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "kobuki_ros_interfaces/action/detail/auto_docking__struct.h"
// already included above
// #include "kobuki_ros_interfaces/action/detail/auto_docking__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace kobuki_ros_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _AutoDocking_SendGoal_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _AutoDocking_SendGoal_Request_type_support_ids_t;

static const _AutoDocking_SendGoal_Request_type_support_ids_t _AutoDocking_SendGoal_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _AutoDocking_SendGoal_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _AutoDocking_SendGoal_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _AutoDocking_SendGoal_Request_type_support_symbol_names_t _AutoDocking_SendGoal_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, kobuki_ros_interfaces, action, AutoDocking_SendGoal_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, kobuki_ros_interfaces, action, AutoDocking_SendGoal_Request)),
  }
};

typedef struct _AutoDocking_SendGoal_Request_type_support_data_t
{
  void * data[2];
} _AutoDocking_SendGoal_Request_type_support_data_t;

static _AutoDocking_SendGoal_Request_type_support_data_t _AutoDocking_SendGoal_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _AutoDocking_SendGoal_Request_message_typesupport_map = {
  2,
  "kobuki_ros_interfaces",
  &_AutoDocking_SendGoal_Request_message_typesupport_ids.typesupport_identifier[0],
  &_AutoDocking_SendGoal_Request_message_typesupport_symbol_names.symbol_name[0],
  &_AutoDocking_SendGoal_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t AutoDocking_SendGoal_Request_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_AutoDocking_SendGoal_Request_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace kobuki_ros_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, kobuki_ros_interfaces, action, AutoDocking_SendGoal_Request)() {
  return &::kobuki_ros_interfaces::action::rosidl_typesupport_c::AutoDocking_SendGoal_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "kobuki_ros_interfaces/action/detail/auto_docking__struct.h"
// already included above
// #include "kobuki_ros_interfaces/action/detail/auto_docking__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace kobuki_ros_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _AutoDocking_SendGoal_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _AutoDocking_SendGoal_Response_type_support_ids_t;

static const _AutoDocking_SendGoal_Response_type_support_ids_t _AutoDocking_SendGoal_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _AutoDocking_SendGoal_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _AutoDocking_SendGoal_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _AutoDocking_SendGoal_Response_type_support_symbol_names_t _AutoDocking_SendGoal_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, kobuki_ros_interfaces, action, AutoDocking_SendGoal_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, kobuki_ros_interfaces, action, AutoDocking_SendGoal_Response)),
  }
};

typedef struct _AutoDocking_SendGoal_Response_type_support_data_t
{
  void * data[2];
} _AutoDocking_SendGoal_Response_type_support_data_t;

static _AutoDocking_SendGoal_Response_type_support_data_t _AutoDocking_SendGoal_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _AutoDocking_SendGoal_Response_message_typesupport_map = {
  2,
  "kobuki_ros_interfaces",
  &_AutoDocking_SendGoal_Response_message_typesupport_ids.typesupport_identifier[0],
  &_AutoDocking_SendGoal_Response_message_typesupport_symbol_names.symbol_name[0],
  &_AutoDocking_SendGoal_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t AutoDocking_SendGoal_Response_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_AutoDocking_SendGoal_Response_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace kobuki_ros_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, kobuki_ros_interfaces, action, AutoDocking_SendGoal_Response)() {
  return &::kobuki_ros_interfaces::action::rosidl_typesupport_c::AutoDocking_SendGoal_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "kobuki_ros_interfaces/action/detail/auto_docking__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/service_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace kobuki_ros_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _AutoDocking_SendGoal_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _AutoDocking_SendGoal_type_support_ids_t;

static const _AutoDocking_SendGoal_type_support_ids_t _AutoDocking_SendGoal_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _AutoDocking_SendGoal_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _AutoDocking_SendGoal_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _AutoDocking_SendGoal_type_support_symbol_names_t _AutoDocking_SendGoal_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, kobuki_ros_interfaces, action, AutoDocking_SendGoal)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, kobuki_ros_interfaces, action, AutoDocking_SendGoal)),
  }
};

typedef struct _AutoDocking_SendGoal_type_support_data_t
{
  void * data[2];
} _AutoDocking_SendGoal_type_support_data_t;

static _AutoDocking_SendGoal_type_support_data_t _AutoDocking_SendGoal_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _AutoDocking_SendGoal_service_typesupport_map = {
  2,
  "kobuki_ros_interfaces",
  &_AutoDocking_SendGoal_service_typesupport_ids.typesupport_identifier[0],
  &_AutoDocking_SendGoal_service_typesupport_symbol_names.symbol_name[0],
  &_AutoDocking_SendGoal_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t AutoDocking_SendGoal_service_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_AutoDocking_SendGoal_service_typesupport_map),
  rosidl_typesupport_c__get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace kobuki_ros_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, kobuki_ros_interfaces, action, AutoDocking_SendGoal)() {
  return &::kobuki_ros_interfaces::action::rosidl_typesupport_c::AutoDocking_SendGoal_service_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "kobuki_ros_interfaces/action/detail/auto_docking__struct.h"
// already included above
// #include "kobuki_ros_interfaces/action/detail/auto_docking__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace kobuki_ros_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _AutoDocking_GetResult_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _AutoDocking_GetResult_Request_type_support_ids_t;

static const _AutoDocking_GetResult_Request_type_support_ids_t _AutoDocking_GetResult_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _AutoDocking_GetResult_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _AutoDocking_GetResult_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _AutoDocking_GetResult_Request_type_support_symbol_names_t _AutoDocking_GetResult_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, kobuki_ros_interfaces, action, AutoDocking_GetResult_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, kobuki_ros_interfaces, action, AutoDocking_GetResult_Request)),
  }
};

typedef struct _AutoDocking_GetResult_Request_type_support_data_t
{
  void * data[2];
} _AutoDocking_GetResult_Request_type_support_data_t;

static _AutoDocking_GetResult_Request_type_support_data_t _AutoDocking_GetResult_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _AutoDocking_GetResult_Request_message_typesupport_map = {
  2,
  "kobuki_ros_interfaces",
  &_AutoDocking_GetResult_Request_message_typesupport_ids.typesupport_identifier[0],
  &_AutoDocking_GetResult_Request_message_typesupport_symbol_names.symbol_name[0],
  &_AutoDocking_GetResult_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t AutoDocking_GetResult_Request_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_AutoDocking_GetResult_Request_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace kobuki_ros_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, kobuki_ros_interfaces, action, AutoDocking_GetResult_Request)() {
  return &::kobuki_ros_interfaces::action::rosidl_typesupport_c::AutoDocking_GetResult_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "kobuki_ros_interfaces/action/detail/auto_docking__struct.h"
// already included above
// #include "kobuki_ros_interfaces/action/detail/auto_docking__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace kobuki_ros_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _AutoDocking_GetResult_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _AutoDocking_GetResult_Response_type_support_ids_t;

static const _AutoDocking_GetResult_Response_type_support_ids_t _AutoDocking_GetResult_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _AutoDocking_GetResult_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _AutoDocking_GetResult_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _AutoDocking_GetResult_Response_type_support_symbol_names_t _AutoDocking_GetResult_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, kobuki_ros_interfaces, action, AutoDocking_GetResult_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, kobuki_ros_interfaces, action, AutoDocking_GetResult_Response)),
  }
};

typedef struct _AutoDocking_GetResult_Response_type_support_data_t
{
  void * data[2];
} _AutoDocking_GetResult_Response_type_support_data_t;

static _AutoDocking_GetResult_Response_type_support_data_t _AutoDocking_GetResult_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _AutoDocking_GetResult_Response_message_typesupport_map = {
  2,
  "kobuki_ros_interfaces",
  &_AutoDocking_GetResult_Response_message_typesupport_ids.typesupport_identifier[0],
  &_AutoDocking_GetResult_Response_message_typesupport_symbol_names.symbol_name[0],
  &_AutoDocking_GetResult_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t AutoDocking_GetResult_Response_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_AutoDocking_GetResult_Response_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace kobuki_ros_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, kobuki_ros_interfaces, action, AutoDocking_GetResult_Response)() {
  return &::kobuki_ros_interfaces::action::rosidl_typesupport_c::AutoDocking_GetResult_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "kobuki_ros_interfaces/action/detail/auto_docking__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/service_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace kobuki_ros_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _AutoDocking_GetResult_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _AutoDocking_GetResult_type_support_ids_t;

static const _AutoDocking_GetResult_type_support_ids_t _AutoDocking_GetResult_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _AutoDocking_GetResult_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _AutoDocking_GetResult_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _AutoDocking_GetResult_type_support_symbol_names_t _AutoDocking_GetResult_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, kobuki_ros_interfaces, action, AutoDocking_GetResult)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, kobuki_ros_interfaces, action, AutoDocking_GetResult)),
  }
};

typedef struct _AutoDocking_GetResult_type_support_data_t
{
  void * data[2];
} _AutoDocking_GetResult_type_support_data_t;

static _AutoDocking_GetResult_type_support_data_t _AutoDocking_GetResult_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _AutoDocking_GetResult_service_typesupport_map = {
  2,
  "kobuki_ros_interfaces",
  &_AutoDocking_GetResult_service_typesupport_ids.typesupport_identifier[0],
  &_AutoDocking_GetResult_service_typesupport_symbol_names.symbol_name[0],
  &_AutoDocking_GetResult_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t AutoDocking_GetResult_service_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_AutoDocking_GetResult_service_typesupport_map),
  rosidl_typesupport_c__get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace kobuki_ros_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, kobuki_ros_interfaces, action, AutoDocking_GetResult)() {
  return &::kobuki_ros_interfaces::action::rosidl_typesupport_c::AutoDocking_GetResult_service_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "kobuki_ros_interfaces/action/detail/auto_docking__struct.h"
// already included above
// #include "kobuki_ros_interfaces/action/detail/auto_docking__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace kobuki_ros_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _AutoDocking_FeedbackMessage_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _AutoDocking_FeedbackMessage_type_support_ids_t;

static const _AutoDocking_FeedbackMessage_type_support_ids_t _AutoDocking_FeedbackMessage_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _AutoDocking_FeedbackMessage_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _AutoDocking_FeedbackMessage_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _AutoDocking_FeedbackMessage_type_support_symbol_names_t _AutoDocking_FeedbackMessage_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, kobuki_ros_interfaces, action, AutoDocking_FeedbackMessage)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, kobuki_ros_interfaces, action, AutoDocking_FeedbackMessage)),
  }
};

typedef struct _AutoDocking_FeedbackMessage_type_support_data_t
{
  void * data[2];
} _AutoDocking_FeedbackMessage_type_support_data_t;

static _AutoDocking_FeedbackMessage_type_support_data_t _AutoDocking_FeedbackMessage_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _AutoDocking_FeedbackMessage_message_typesupport_map = {
  2,
  "kobuki_ros_interfaces",
  &_AutoDocking_FeedbackMessage_message_typesupport_ids.typesupport_identifier[0],
  &_AutoDocking_FeedbackMessage_message_typesupport_symbol_names.symbol_name[0],
  &_AutoDocking_FeedbackMessage_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t AutoDocking_FeedbackMessage_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_AutoDocking_FeedbackMessage_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace kobuki_ros_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, kobuki_ros_interfaces, action, AutoDocking_FeedbackMessage)() {
  return &::kobuki_ros_interfaces::action::rosidl_typesupport_c::AutoDocking_FeedbackMessage_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

#include "action_msgs/msg/goal_status_array.h"
#include "action_msgs/srv/cancel_goal.h"
#include "kobuki_ros_interfaces/action/auto_docking.h"
// already included above
// #include "kobuki_ros_interfaces/action/detail/auto_docking__type_support.h"

static rosidl_action_type_support_t _kobuki_ros_interfaces__action__AutoDocking__typesupport_c;

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_action_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__ACTION_SYMBOL_NAME(
  rosidl_typesupport_c, kobuki_ros_interfaces, action, AutoDocking)()
{
  // Thread-safe by always writing the same values to the static struct
  _kobuki_ros_interfaces__action__AutoDocking__typesupport_c.goal_service_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(
    rosidl_typesupport_c, kobuki_ros_interfaces, action, AutoDocking_SendGoal)();
  _kobuki_ros_interfaces__action__AutoDocking__typesupport_c.result_service_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(
    rosidl_typesupport_c, kobuki_ros_interfaces, action, AutoDocking_GetResult)();
  _kobuki_ros_interfaces__action__AutoDocking__typesupport_c.cancel_service_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(
    rosidl_typesupport_c, action_msgs, srv, CancelGoal)();
  _kobuki_ros_interfaces__action__AutoDocking__typesupport_c.feedback_message_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c, kobuki_ros_interfaces, action, AutoDocking_FeedbackMessage)();
  _kobuki_ros_interfaces__action__AutoDocking__typesupport_c.status_message_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c, action_msgs, msg, GoalStatusArray)();

  return &_kobuki_ros_interfaces__action__AutoDocking__typesupport_c;
}

#ifdef __cplusplus
}
#endif
