// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from kobuki_ros_interfaces:msg/VersionInfo.idl
// generated code does not contain a copyright notice

#ifndef KOBUKI_ROS_INTERFACES__MSG__DETAIL__VERSION_INFO__STRUCT_H_
#define KOBUKI_ROS_INTERFACES__MSG__DETAIL__VERSION_INFO__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'SMOOTH_MOVE_START'.
/**
  * The following represent the bit fields corresponding to bits in the features value
  * Provided firmware kobuki_firmware_1.1.1.hex
 */
enum
{
  kobuki_ros_interfaces__msg__VersionInfo__SMOOTH_MOVE_START = 1ull
};

/// Constant 'GYROSCOPE_3D_DATA'.
enum
{
  kobuki_ros_interfaces__msg__VersionInfo__GYROSCOPE_3D_DATA = 2ull
};

// Include directives for member types
// Member 'hardware'
// Member 'firmware'
// Member 'software'
#include "rosidl_runtime_c/string.h"
// Member 'udid'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/VersionInfo in the package kobuki_ros_interfaces.
/**
  * Contains unique device id, version info and available features for the kobuki platform.
  * Useful for compatibility checking and introspection
 */
typedef struct kobuki_ros_interfaces__msg__VersionInfo
{
  /// <major>.<minor>.<patch>
  rosidl_runtime_c__String hardware;
  /// <major>.<minor>.<patch>
  rosidl_runtime_c__String firmware;
  /// Still to decide how it will look
  rosidl_runtime_c__String software;
  rosidl_runtime_c__uint32__Sequence udid;
  /// Bitmask that specifies the available features in the firmware and/or driver
  uint64_t features;
} kobuki_ros_interfaces__msg__VersionInfo;

// Struct for a sequence of kobuki_ros_interfaces__msg__VersionInfo.
typedef struct kobuki_ros_interfaces__msg__VersionInfo__Sequence
{
  kobuki_ros_interfaces__msg__VersionInfo * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} kobuki_ros_interfaces__msg__VersionInfo__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // KOBUKI_ROS_INTERFACES__MSG__DETAIL__VERSION_INFO__STRUCT_H_
