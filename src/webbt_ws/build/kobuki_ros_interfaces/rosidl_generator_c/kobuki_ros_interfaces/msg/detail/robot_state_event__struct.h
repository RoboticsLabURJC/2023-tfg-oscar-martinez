// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from kobuki_ros_interfaces:msg/RobotStateEvent.idl
// generated code does not contain a copyright notice

#ifndef KOBUKI_ROS_INTERFACES__MSG__DETAIL__ROBOT_STATE_EVENT__STRUCT_H_
#define KOBUKI_ROS_INTERFACES__MSG__DETAIL__ROBOT_STATE_EVENT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'ONLINE'.
enum
{
  kobuki_ros_interfaces__msg__RobotStateEvent__ONLINE = 1
};

/// Constant 'OFFLINE'.
enum
{
  kobuki_ros_interfaces__msg__RobotStateEvent__OFFLINE = 0
};

/// Struct defined in msg/RobotStateEvent in the package kobuki_ros_interfaces.
/**
  * Provides a robot state event
  * This message is generated whenever the robot gets online/offline
 */
typedef struct kobuki_ros_interfaces__msg__RobotStateEvent
{
  uint8_t state;
} kobuki_ros_interfaces__msg__RobotStateEvent;

// Struct for a sequence of kobuki_ros_interfaces__msg__RobotStateEvent.
typedef struct kobuki_ros_interfaces__msg__RobotStateEvent__Sequence
{
  kobuki_ros_interfaces__msg__RobotStateEvent * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} kobuki_ros_interfaces__msg__RobotStateEvent__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // KOBUKI_ROS_INTERFACES__MSG__DETAIL__ROBOT_STATE_EVENT__STRUCT_H_
