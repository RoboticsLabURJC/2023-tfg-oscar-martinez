// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from kobuki_ros_interfaces:msg/SensorState.idl
// generated code does not contain a copyright notice

#ifndef KOBUKI_ROS_INTERFACES__MSG__DETAIL__SENSOR_STATE__STRUCT_H_
#define KOBUKI_ROS_INTERFACES__MSG__DETAIL__SENSOR_STATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'BUMPER_RIGHT'.
/**
  * CONSTANTS ######
  * Bumper states (states are combined, when multiple bumpers are pressed)
 */
enum
{
  kobuki_ros_interfaces__msg__SensorState__BUMPER_RIGHT = 1
};

/// Constant 'BUMPER_CENTRE'.
enum
{
  kobuki_ros_interfaces__msg__SensorState__BUMPER_CENTRE = 2
};

/// Constant 'BUMPER_LEFT'.
enum
{
  kobuki_ros_interfaces__msg__SensorState__BUMPER_LEFT = 4
};

/// Constant 'WHEEL_DROP_RIGHT'.
/**
  * Wheel drop sensor states (states are combined, when both wheel drop sensors are triggered)
 */
enum
{
  kobuki_ros_interfaces__msg__SensorState__WHEEL_DROP_RIGHT = 1
};

/// Constant 'WHEEL_DROP_LEFT'.
enum
{
  kobuki_ros_interfaces__msg__SensorState__WHEEL_DROP_LEFT = 2
};

/// Constant 'CLIFF_RIGHT'.
/**
  * Cliff sensor states (states are combined, when multiple cliff sensors are triggered)
 */
enum
{
  kobuki_ros_interfaces__msg__SensorState__CLIFF_RIGHT = 1
};

/// Constant 'CLIFF_CENTRE'.
enum
{
  kobuki_ros_interfaces__msg__SensorState__CLIFF_CENTRE = 2
};

/// Constant 'CLIFF_LEFT'.
enum
{
  kobuki_ros_interfaces__msg__SensorState__CLIFF_LEFT = 4
};

/// Constant 'BUTTON0'.
/**
  * Button states (only one button can be triggered at a time)
 */
enum
{
  kobuki_ros_interfaces__msg__SensorState__BUTTON0 = 1
};

/// Constant 'BUTTON1'.
enum
{
  kobuki_ros_interfaces__msg__SensorState__BUTTON1 = 2
};

/// Constant 'BUTTON2'.
enum
{
  kobuki_ros_interfaces__msg__SensorState__BUTTON2 = 4
};

/// Constant 'DISCHARGING'.
/**
  * Charger state is a combination of charging device (adapter, docking station)
  * and state (charging, charged, discharging):
 */
enum
{
  kobuki_ros_interfaces__msg__SensorState__DISCHARGING = 0
};

/// Constant 'DOCKING_CHARGED'.
enum
{
  kobuki_ros_interfaces__msg__SensorState__DOCKING_CHARGED = 2
};

/// Constant 'DOCKING_CHARGING'.
enum
{
  kobuki_ros_interfaces__msg__SensorState__DOCKING_CHARGING = 6
};

/// Constant 'ADAPTER_CHARGED'.
enum
{
  kobuki_ros_interfaces__msg__SensorState__ADAPTER_CHARGED = 18
};

/// Constant 'ADAPTER_CHARGING'.
enum
{
  kobuki_ros_interfaces__msg__SensorState__ADAPTER_CHARGING = 22
};

/// Constant 'OVER_CURRENT_LEFT_WHEEL'.
/**
  * Over current states
 */
enum
{
  kobuki_ros_interfaces__msg__SensorState__OVER_CURRENT_LEFT_WHEEL = 1
};

/// Constant 'OVER_CURRENT_RIGHT_WHEEL'.
enum
{
  kobuki_ros_interfaces__msg__SensorState__OVER_CURRENT_RIGHT_WHEEL = 2
};

/// Constant 'OVER_CURRENT_BOTH_WHEELS'.
enum
{
  kobuki_ros_interfaces__msg__SensorState__OVER_CURRENT_BOTH_WHEELS = 3
};

/// Constant 'DIGITAL_INPUT0'.
/**
  * Digital input states (states are combined, when multiple inputs are set at the same time)
  * When connecting Yujin's test board, it acts as pull-up what inverts the behaviour:
  * No input: 79, all inputs set (e.g. buttons pressed): 64
 */
enum
{
  kobuki_ros_interfaces__msg__SensorState__DIGITAL_INPUT0 = 1
};

/// Constant 'DIGITAL_INPUT1'.
enum
{
  kobuki_ros_interfaces__msg__SensorState__DIGITAL_INPUT1 = 2
};

/// Constant 'DIGITAL_INPUT2'.
enum
{
  kobuki_ros_interfaces__msg__SensorState__DIGITAL_INPUT2 = 4
};

/// Constant 'DIGITAL_INPUT3'.
enum
{
  kobuki_ros_interfaces__msg__SensorState__DIGITAL_INPUT3 = 8
};

/// Constant 'DB25_TEST_BOARD_CONNECTED'.
enum
{
  kobuki_ros_interfaces__msg__SensorState__DB25_TEST_BOARD_CONNECTED = 64
};

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'bottom'
// Member 'current'
// Member 'analog_input'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/SensorState in the package kobuki_ros_interfaces.
/**
  * Kobuki Sensor Data Messages
  *
  * For more direct simple interactions (buttons, leds, gyro, motor velocity
  * etc) use the other topics. This provides detailed information about the
  * entire state package that is transmitted at 50Hz from the robot.
 */
typedef struct kobuki_ros_interfaces__msg__SensorState
{
  /// MESSAGE ######
  std_msgs__msg__Header header;
  /// Core Packet
  ///
  /// milliseconds starting when turning on Kobuki (max. 65536, then starts from 0 again)
  uint16_t time_stamp;
  /// see bumper states
  uint8_t bumper;
  /// see wheel drop sensor states
  uint8_t wheel_drop;
  /// see cliff sensor states
  uint8_t cliff;
  /// accumulated ticks left wheel starting with turning on Kobuki (max. 65535)
  uint16_t left_encoder;
  /// accumulated ticks right wheel starting with turning on Kobuki (max. 65535)
  uint16_t right_encoder;
  /// % of applied maximum voltage left wheel: -100 (max. voltage backward) to +100 (max. voltage forward)
  int8_t left_pwm;
  /// % of applied maximum voltage right wheel: -100 (max. voltage backward) to +100 (max. voltage forward)
  int8_t right_pwm;
  /// see button states
  uint8_t buttons;
  /// see charger states
  uint8_t charger;
  /// battery voltage in 0.1V (ex. 16.1V -> 161)
  uint8_t battery;
  /// Cliff Packet
  ///
  /// ADC output of the right, centre, left cliff PSD sensor (0 - 4095, distance measure is non-linear)
  rosidl_runtime_c__uint16__Sequence bottom;
  /// Current Packet
  ///
  /// motor current for the left and right motor in 10mA (ex. 12 -> 120mA)
  rosidl_runtime_c__uint8__Sequence current;
  /// see over current states
  uint8_t over_current;
  /// Input Packet
  ///
  /// see digital input states; will show garbage when nothing is connected
  uint16_t digital_input;
  /// ADC values for the 4 analog inputs; 0 - 4095: 0.0 - 3.3V; will show garbage when nothing is connected
  rosidl_runtime_c__uint16__Sequence analog_input;
} kobuki_ros_interfaces__msg__SensorState;

// Struct for a sequence of kobuki_ros_interfaces__msg__SensorState.
typedef struct kobuki_ros_interfaces__msg__SensorState__Sequence
{
  kobuki_ros_interfaces__msg__SensorState * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} kobuki_ros_interfaces__msg__SensorState__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // KOBUKI_ROS_INTERFACES__MSG__DETAIL__SENSOR_STATE__STRUCT_H_
