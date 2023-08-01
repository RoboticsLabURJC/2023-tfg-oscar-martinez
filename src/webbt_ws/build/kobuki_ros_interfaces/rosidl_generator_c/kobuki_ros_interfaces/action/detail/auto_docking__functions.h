// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from kobuki_ros_interfaces:action/AutoDocking.idl
// generated code does not contain a copyright notice

#ifndef KOBUKI_ROS_INTERFACES__ACTION__DETAIL__AUTO_DOCKING__FUNCTIONS_H_
#define KOBUKI_ROS_INTERFACES__ACTION__DETAIL__AUTO_DOCKING__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "kobuki_ros_interfaces/msg/rosidl_generator_c__visibility_control.h"

#include "kobuki_ros_interfaces/action/detail/auto_docking__struct.h"

/// Initialize action/AutoDocking message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * kobuki_ros_interfaces__action__AutoDocking_Goal
 * )) before or use
 * kobuki_ros_interfaces__action__AutoDocking_Goal__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_kobuki_ros_interfaces
bool
kobuki_ros_interfaces__action__AutoDocking_Goal__init(kobuki_ros_interfaces__action__AutoDocking_Goal * msg);

/// Finalize action/AutoDocking message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_kobuki_ros_interfaces
void
kobuki_ros_interfaces__action__AutoDocking_Goal__fini(kobuki_ros_interfaces__action__AutoDocking_Goal * msg);

/// Create action/AutoDocking message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * kobuki_ros_interfaces__action__AutoDocking_Goal__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_kobuki_ros_interfaces
kobuki_ros_interfaces__action__AutoDocking_Goal *
kobuki_ros_interfaces__action__AutoDocking_Goal__create();

/// Destroy action/AutoDocking message.
/**
 * It calls
 * kobuki_ros_interfaces__action__AutoDocking_Goal__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_kobuki_ros_interfaces
void
kobuki_ros_interfaces__action__AutoDocking_Goal__destroy(kobuki_ros_interfaces__action__AutoDocking_Goal * msg);

/// Check for action/AutoDocking message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_kobuki_ros_interfaces
bool
kobuki_ros_interfaces__action__AutoDocking_Goal__are_equal(const kobuki_ros_interfaces__action__AutoDocking_Goal * lhs, const kobuki_ros_interfaces__action__AutoDocking_Goal * rhs);

/// Copy a action/AutoDocking message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_kobuki_ros_interfaces
bool
kobuki_ros_interfaces__action__AutoDocking_Goal__copy(
  const kobuki_ros_interfaces__action__AutoDocking_Goal * input,
  kobuki_ros_interfaces__action__AutoDocking_Goal * output);

/// Initialize array of action/AutoDocking messages.
/**
 * It allocates the memory for the number of elements and calls
 * kobuki_ros_interfaces__action__AutoDocking_Goal__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_kobuki_ros_interfaces
bool
kobuki_ros_interfaces__action__AutoDocking_Goal__Sequence__init(kobuki_ros_interfaces__action__AutoDocking_Goal__Sequence * array, size_t size);

/// Finalize array of action/AutoDocking messages.
/**
 * It calls
 * kobuki_ros_interfaces__action__AutoDocking_Goal__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_kobuki_ros_interfaces
void
kobuki_ros_interfaces__action__AutoDocking_Goal__Sequence__fini(kobuki_ros_interfaces__action__AutoDocking_Goal__Sequence * array);

/// Create array of action/AutoDocking messages.
/**
 * It allocates the memory for the array and calls
 * kobuki_ros_interfaces__action__AutoDocking_Goal__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_kobuki_ros_interfaces
kobuki_ros_interfaces__action__AutoDocking_Goal__Sequence *
kobuki_ros_interfaces__action__AutoDocking_Goal__Sequence__create(size_t size);

/// Destroy array of action/AutoDocking messages.
/**
 * It calls
 * kobuki_ros_interfaces__action__AutoDocking_Goal__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_kobuki_ros_interfaces
void
kobuki_ros_interfaces__action__AutoDocking_Goal__Sequence__destroy(kobuki_ros_interfaces__action__AutoDocking_Goal__Sequence * array);

/// Check for action/AutoDocking message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_kobuki_ros_interfaces
bool
kobuki_ros_interfaces__action__AutoDocking_Goal__Sequence__are_equal(const kobuki_ros_interfaces__action__AutoDocking_Goal__Sequence * lhs, const kobuki_ros_interfaces__action__AutoDocking_Goal__Sequence * rhs);

/// Copy an array of action/AutoDocking messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_kobuki_ros_interfaces
bool
kobuki_ros_interfaces__action__AutoDocking_Goal__Sequence__copy(
  const kobuki_ros_interfaces__action__AutoDocking_Goal__Sequence * input,
  kobuki_ros_interfaces__action__AutoDocking_Goal__Sequence * output);

/// Initialize action/AutoDocking message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * kobuki_ros_interfaces__action__AutoDocking_Result
 * )) before or use
 * kobuki_ros_interfaces__action__AutoDocking_Result__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_kobuki_ros_interfaces
bool
kobuki_ros_interfaces__action__AutoDocking_Result__init(kobuki_ros_interfaces__action__AutoDocking_Result * msg);

/// Finalize action/AutoDocking message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_kobuki_ros_interfaces
void
kobuki_ros_interfaces__action__AutoDocking_Result__fini(kobuki_ros_interfaces__action__AutoDocking_Result * msg);

/// Create action/AutoDocking message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * kobuki_ros_interfaces__action__AutoDocking_Result__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_kobuki_ros_interfaces
kobuki_ros_interfaces__action__AutoDocking_Result *
kobuki_ros_interfaces__action__AutoDocking_Result__create();

/// Destroy action/AutoDocking message.
/**
 * It calls
 * kobuki_ros_interfaces__action__AutoDocking_Result__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_kobuki_ros_interfaces
void
kobuki_ros_interfaces__action__AutoDocking_Result__destroy(kobuki_ros_interfaces__action__AutoDocking_Result * msg);

/// Check for action/AutoDocking message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_kobuki_ros_interfaces
bool
kobuki_ros_interfaces__action__AutoDocking_Result__are_equal(const kobuki_ros_interfaces__action__AutoDocking_Result * lhs, const kobuki_ros_interfaces__action__AutoDocking_Result * rhs);

/// Copy a action/AutoDocking message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_kobuki_ros_interfaces
bool
kobuki_ros_interfaces__action__AutoDocking_Result__copy(
  const kobuki_ros_interfaces__action__AutoDocking_Result * input,
  kobuki_ros_interfaces__action__AutoDocking_Result * output);

/// Initialize array of action/AutoDocking messages.
/**
 * It allocates the memory for the number of elements and calls
 * kobuki_ros_interfaces__action__AutoDocking_Result__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_kobuki_ros_interfaces
bool
kobuki_ros_interfaces__action__AutoDocking_Result__Sequence__init(kobuki_ros_interfaces__action__AutoDocking_Result__Sequence * array, size_t size);

/// Finalize array of action/AutoDocking messages.
/**
 * It calls
 * kobuki_ros_interfaces__action__AutoDocking_Result__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_kobuki_ros_interfaces
void
kobuki_ros_interfaces__action__AutoDocking_Result__Sequence__fini(kobuki_ros_interfaces__action__AutoDocking_Result__Sequence * array);

/// Create array of action/AutoDocking messages.
/**
 * It allocates the memory for the array and calls
 * kobuki_ros_interfaces__action__AutoDocking_Result__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_kobuki_ros_interfaces
kobuki_ros_interfaces__action__AutoDocking_Result__Sequence *
kobuki_ros_interfaces__action__AutoDocking_Result__Sequence__create(size_t size);

/// Destroy array of action/AutoDocking messages.
/**
 * It calls
 * kobuki_ros_interfaces__action__AutoDocking_Result__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_kobuki_ros_interfaces
void
kobuki_ros_interfaces__action__AutoDocking_Result__Sequence__destroy(kobuki_ros_interfaces__action__AutoDocking_Result__Sequence * array);

/// Check for action/AutoDocking message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_kobuki_ros_interfaces
bool
kobuki_ros_interfaces__action__AutoDocking_Result__Sequence__are_equal(const kobuki_ros_interfaces__action__AutoDocking_Result__Sequence * lhs, const kobuki_ros_interfaces__action__AutoDocking_Result__Sequence * rhs);

/// Copy an array of action/AutoDocking messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_kobuki_ros_interfaces
bool
kobuki_ros_interfaces__action__AutoDocking_Result__Sequence__copy(
  const kobuki_ros_interfaces__action__AutoDocking_Result__Sequence * input,
  kobuki_ros_interfaces__action__AutoDocking_Result__Sequence * output);

/// Initialize action/AutoDocking message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * kobuki_ros_interfaces__action__AutoDocking_Feedback
 * )) before or use
 * kobuki_ros_interfaces__action__AutoDocking_Feedback__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_kobuki_ros_interfaces
bool
kobuki_ros_interfaces__action__AutoDocking_Feedback__init(kobuki_ros_interfaces__action__AutoDocking_Feedback * msg);

/// Finalize action/AutoDocking message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_kobuki_ros_interfaces
void
kobuki_ros_interfaces__action__AutoDocking_Feedback__fini(kobuki_ros_interfaces__action__AutoDocking_Feedback * msg);

/// Create action/AutoDocking message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * kobuki_ros_interfaces__action__AutoDocking_Feedback__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_kobuki_ros_interfaces
kobuki_ros_interfaces__action__AutoDocking_Feedback *
kobuki_ros_interfaces__action__AutoDocking_Feedback__create();

/// Destroy action/AutoDocking message.
/**
 * It calls
 * kobuki_ros_interfaces__action__AutoDocking_Feedback__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_kobuki_ros_interfaces
void
kobuki_ros_interfaces__action__AutoDocking_Feedback__destroy(kobuki_ros_interfaces__action__AutoDocking_Feedback * msg);

/// Check for action/AutoDocking message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_kobuki_ros_interfaces
bool
kobuki_ros_interfaces__action__AutoDocking_Feedback__are_equal(const kobuki_ros_interfaces__action__AutoDocking_Feedback * lhs, const kobuki_ros_interfaces__action__AutoDocking_Feedback * rhs);

/// Copy a action/AutoDocking message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_kobuki_ros_interfaces
bool
kobuki_ros_interfaces__action__AutoDocking_Feedback__copy(
  const kobuki_ros_interfaces__action__AutoDocking_Feedback * input,
  kobuki_ros_interfaces__action__AutoDocking_Feedback * output);

/// Initialize array of action/AutoDocking messages.
/**
 * It allocates the memory for the number of elements and calls
 * kobuki_ros_interfaces__action__AutoDocking_Feedback__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_kobuki_ros_interfaces
bool
kobuki_ros_interfaces__action__AutoDocking_Feedback__Sequence__init(kobuki_ros_interfaces__action__AutoDocking_Feedback__Sequence * array, size_t size);

/// Finalize array of action/AutoDocking messages.
/**
 * It calls
 * kobuki_ros_interfaces__action__AutoDocking_Feedback__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_kobuki_ros_interfaces
void
kobuki_ros_interfaces__action__AutoDocking_Feedback__Sequence__fini(kobuki_ros_interfaces__action__AutoDocking_Feedback__Sequence * array);

/// Create array of action/AutoDocking messages.
/**
 * It allocates the memory for the array and calls
 * kobuki_ros_interfaces__action__AutoDocking_Feedback__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_kobuki_ros_interfaces
kobuki_ros_interfaces__action__AutoDocking_Feedback__Sequence *
kobuki_ros_interfaces__action__AutoDocking_Feedback__Sequence__create(size_t size);

/// Destroy array of action/AutoDocking messages.
/**
 * It calls
 * kobuki_ros_interfaces__action__AutoDocking_Feedback__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_kobuki_ros_interfaces
void
kobuki_ros_interfaces__action__AutoDocking_Feedback__Sequence__destroy(kobuki_ros_interfaces__action__AutoDocking_Feedback__Sequence * array);

/// Check for action/AutoDocking message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_kobuki_ros_interfaces
bool
kobuki_ros_interfaces__action__AutoDocking_Feedback__Sequence__are_equal(const kobuki_ros_interfaces__action__AutoDocking_Feedback__Sequence * lhs, const kobuki_ros_interfaces__action__AutoDocking_Feedback__Sequence * rhs);

/// Copy an array of action/AutoDocking messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_kobuki_ros_interfaces
bool
kobuki_ros_interfaces__action__AutoDocking_Feedback__Sequence__copy(
  const kobuki_ros_interfaces__action__AutoDocking_Feedback__Sequence * input,
  kobuki_ros_interfaces__action__AutoDocking_Feedback__Sequence * output);

/// Initialize action/AutoDocking message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * kobuki_ros_interfaces__action__AutoDocking_SendGoal_Request
 * )) before or use
 * kobuki_ros_interfaces__action__AutoDocking_SendGoal_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_kobuki_ros_interfaces
bool
kobuki_ros_interfaces__action__AutoDocking_SendGoal_Request__init(kobuki_ros_interfaces__action__AutoDocking_SendGoal_Request * msg);

/// Finalize action/AutoDocking message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_kobuki_ros_interfaces
void
kobuki_ros_interfaces__action__AutoDocking_SendGoal_Request__fini(kobuki_ros_interfaces__action__AutoDocking_SendGoal_Request * msg);

/// Create action/AutoDocking message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * kobuki_ros_interfaces__action__AutoDocking_SendGoal_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_kobuki_ros_interfaces
kobuki_ros_interfaces__action__AutoDocking_SendGoal_Request *
kobuki_ros_interfaces__action__AutoDocking_SendGoal_Request__create();

/// Destroy action/AutoDocking message.
/**
 * It calls
 * kobuki_ros_interfaces__action__AutoDocking_SendGoal_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_kobuki_ros_interfaces
void
kobuki_ros_interfaces__action__AutoDocking_SendGoal_Request__destroy(kobuki_ros_interfaces__action__AutoDocking_SendGoal_Request * msg);

/// Check for action/AutoDocking message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_kobuki_ros_interfaces
bool
kobuki_ros_interfaces__action__AutoDocking_SendGoal_Request__are_equal(const kobuki_ros_interfaces__action__AutoDocking_SendGoal_Request * lhs, const kobuki_ros_interfaces__action__AutoDocking_SendGoal_Request * rhs);

/// Copy a action/AutoDocking message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_kobuki_ros_interfaces
bool
kobuki_ros_interfaces__action__AutoDocking_SendGoal_Request__copy(
  const kobuki_ros_interfaces__action__AutoDocking_SendGoal_Request * input,
  kobuki_ros_interfaces__action__AutoDocking_SendGoal_Request * output);

/// Initialize array of action/AutoDocking messages.
/**
 * It allocates the memory for the number of elements and calls
 * kobuki_ros_interfaces__action__AutoDocking_SendGoal_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_kobuki_ros_interfaces
bool
kobuki_ros_interfaces__action__AutoDocking_SendGoal_Request__Sequence__init(kobuki_ros_interfaces__action__AutoDocking_SendGoal_Request__Sequence * array, size_t size);

/// Finalize array of action/AutoDocking messages.
/**
 * It calls
 * kobuki_ros_interfaces__action__AutoDocking_SendGoal_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_kobuki_ros_interfaces
void
kobuki_ros_interfaces__action__AutoDocking_SendGoal_Request__Sequence__fini(kobuki_ros_interfaces__action__AutoDocking_SendGoal_Request__Sequence * array);

/// Create array of action/AutoDocking messages.
/**
 * It allocates the memory for the array and calls
 * kobuki_ros_interfaces__action__AutoDocking_SendGoal_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_kobuki_ros_interfaces
kobuki_ros_interfaces__action__AutoDocking_SendGoal_Request__Sequence *
kobuki_ros_interfaces__action__AutoDocking_SendGoal_Request__Sequence__create(size_t size);

/// Destroy array of action/AutoDocking messages.
/**
 * It calls
 * kobuki_ros_interfaces__action__AutoDocking_SendGoal_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_kobuki_ros_interfaces
void
kobuki_ros_interfaces__action__AutoDocking_SendGoal_Request__Sequence__destroy(kobuki_ros_interfaces__action__AutoDocking_SendGoal_Request__Sequence * array);

/// Check for action/AutoDocking message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_kobuki_ros_interfaces
bool
kobuki_ros_interfaces__action__AutoDocking_SendGoal_Request__Sequence__are_equal(const kobuki_ros_interfaces__action__AutoDocking_SendGoal_Request__Sequence * lhs, const kobuki_ros_interfaces__action__AutoDocking_SendGoal_Request__Sequence * rhs);

/// Copy an array of action/AutoDocking messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_kobuki_ros_interfaces
bool
kobuki_ros_interfaces__action__AutoDocking_SendGoal_Request__Sequence__copy(
  const kobuki_ros_interfaces__action__AutoDocking_SendGoal_Request__Sequence * input,
  kobuki_ros_interfaces__action__AutoDocking_SendGoal_Request__Sequence * output);

/// Initialize action/AutoDocking message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * kobuki_ros_interfaces__action__AutoDocking_SendGoal_Response
 * )) before or use
 * kobuki_ros_interfaces__action__AutoDocking_SendGoal_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_kobuki_ros_interfaces
bool
kobuki_ros_interfaces__action__AutoDocking_SendGoal_Response__init(kobuki_ros_interfaces__action__AutoDocking_SendGoal_Response * msg);

/// Finalize action/AutoDocking message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_kobuki_ros_interfaces
void
kobuki_ros_interfaces__action__AutoDocking_SendGoal_Response__fini(kobuki_ros_interfaces__action__AutoDocking_SendGoal_Response * msg);

/// Create action/AutoDocking message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * kobuki_ros_interfaces__action__AutoDocking_SendGoal_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_kobuki_ros_interfaces
kobuki_ros_interfaces__action__AutoDocking_SendGoal_Response *
kobuki_ros_interfaces__action__AutoDocking_SendGoal_Response__create();

/// Destroy action/AutoDocking message.
/**
 * It calls
 * kobuki_ros_interfaces__action__AutoDocking_SendGoal_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_kobuki_ros_interfaces
void
kobuki_ros_interfaces__action__AutoDocking_SendGoal_Response__destroy(kobuki_ros_interfaces__action__AutoDocking_SendGoal_Response * msg);

/// Check for action/AutoDocking message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_kobuki_ros_interfaces
bool
kobuki_ros_interfaces__action__AutoDocking_SendGoal_Response__are_equal(const kobuki_ros_interfaces__action__AutoDocking_SendGoal_Response * lhs, const kobuki_ros_interfaces__action__AutoDocking_SendGoal_Response * rhs);

/// Copy a action/AutoDocking message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_kobuki_ros_interfaces
bool
kobuki_ros_interfaces__action__AutoDocking_SendGoal_Response__copy(
  const kobuki_ros_interfaces__action__AutoDocking_SendGoal_Response * input,
  kobuki_ros_interfaces__action__AutoDocking_SendGoal_Response * output);

/// Initialize array of action/AutoDocking messages.
/**
 * It allocates the memory for the number of elements and calls
 * kobuki_ros_interfaces__action__AutoDocking_SendGoal_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_kobuki_ros_interfaces
bool
kobuki_ros_interfaces__action__AutoDocking_SendGoal_Response__Sequence__init(kobuki_ros_interfaces__action__AutoDocking_SendGoal_Response__Sequence * array, size_t size);

/// Finalize array of action/AutoDocking messages.
/**
 * It calls
 * kobuki_ros_interfaces__action__AutoDocking_SendGoal_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_kobuki_ros_interfaces
void
kobuki_ros_interfaces__action__AutoDocking_SendGoal_Response__Sequence__fini(kobuki_ros_interfaces__action__AutoDocking_SendGoal_Response__Sequence * array);

/// Create array of action/AutoDocking messages.
/**
 * It allocates the memory for the array and calls
 * kobuki_ros_interfaces__action__AutoDocking_SendGoal_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_kobuki_ros_interfaces
kobuki_ros_interfaces__action__AutoDocking_SendGoal_Response__Sequence *
kobuki_ros_interfaces__action__AutoDocking_SendGoal_Response__Sequence__create(size_t size);

/// Destroy array of action/AutoDocking messages.
/**
 * It calls
 * kobuki_ros_interfaces__action__AutoDocking_SendGoal_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_kobuki_ros_interfaces
void
kobuki_ros_interfaces__action__AutoDocking_SendGoal_Response__Sequence__destroy(kobuki_ros_interfaces__action__AutoDocking_SendGoal_Response__Sequence * array);

/// Check for action/AutoDocking message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_kobuki_ros_interfaces
bool
kobuki_ros_interfaces__action__AutoDocking_SendGoal_Response__Sequence__are_equal(const kobuki_ros_interfaces__action__AutoDocking_SendGoal_Response__Sequence * lhs, const kobuki_ros_interfaces__action__AutoDocking_SendGoal_Response__Sequence * rhs);

/// Copy an array of action/AutoDocking messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_kobuki_ros_interfaces
bool
kobuki_ros_interfaces__action__AutoDocking_SendGoal_Response__Sequence__copy(
  const kobuki_ros_interfaces__action__AutoDocking_SendGoal_Response__Sequence * input,
  kobuki_ros_interfaces__action__AutoDocking_SendGoal_Response__Sequence * output);

/// Initialize action/AutoDocking message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * kobuki_ros_interfaces__action__AutoDocking_GetResult_Request
 * )) before or use
 * kobuki_ros_interfaces__action__AutoDocking_GetResult_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_kobuki_ros_interfaces
bool
kobuki_ros_interfaces__action__AutoDocking_GetResult_Request__init(kobuki_ros_interfaces__action__AutoDocking_GetResult_Request * msg);

/// Finalize action/AutoDocking message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_kobuki_ros_interfaces
void
kobuki_ros_interfaces__action__AutoDocking_GetResult_Request__fini(kobuki_ros_interfaces__action__AutoDocking_GetResult_Request * msg);

/// Create action/AutoDocking message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * kobuki_ros_interfaces__action__AutoDocking_GetResult_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_kobuki_ros_interfaces
kobuki_ros_interfaces__action__AutoDocking_GetResult_Request *
kobuki_ros_interfaces__action__AutoDocking_GetResult_Request__create();

/// Destroy action/AutoDocking message.
/**
 * It calls
 * kobuki_ros_interfaces__action__AutoDocking_GetResult_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_kobuki_ros_interfaces
void
kobuki_ros_interfaces__action__AutoDocking_GetResult_Request__destroy(kobuki_ros_interfaces__action__AutoDocking_GetResult_Request * msg);

/// Check for action/AutoDocking message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_kobuki_ros_interfaces
bool
kobuki_ros_interfaces__action__AutoDocking_GetResult_Request__are_equal(const kobuki_ros_interfaces__action__AutoDocking_GetResult_Request * lhs, const kobuki_ros_interfaces__action__AutoDocking_GetResult_Request * rhs);

/// Copy a action/AutoDocking message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_kobuki_ros_interfaces
bool
kobuki_ros_interfaces__action__AutoDocking_GetResult_Request__copy(
  const kobuki_ros_interfaces__action__AutoDocking_GetResult_Request * input,
  kobuki_ros_interfaces__action__AutoDocking_GetResult_Request * output);

/// Initialize array of action/AutoDocking messages.
/**
 * It allocates the memory for the number of elements and calls
 * kobuki_ros_interfaces__action__AutoDocking_GetResult_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_kobuki_ros_interfaces
bool
kobuki_ros_interfaces__action__AutoDocking_GetResult_Request__Sequence__init(kobuki_ros_interfaces__action__AutoDocking_GetResult_Request__Sequence * array, size_t size);

/// Finalize array of action/AutoDocking messages.
/**
 * It calls
 * kobuki_ros_interfaces__action__AutoDocking_GetResult_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_kobuki_ros_interfaces
void
kobuki_ros_interfaces__action__AutoDocking_GetResult_Request__Sequence__fini(kobuki_ros_interfaces__action__AutoDocking_GetResult_Request__Sequence * array);

/// Create array of action/AutoDocking messages.
/**
 * It allocates the memory for the array and calls
 * kobuki_ros_interfaces__action__AutoDocking_GetResult_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_kobuki_ros_interfaces
kobuki_ros_interfaces__action__AutoDocking_GetResult_Request__Sequence *
kobuki_ros_interfaces__action__AutoDocking_GetResult_Request__Sequence__create(size_t size);

/// Destroy array of action/AutoDocking messages.
/**
 * It calls
 * kobuki_ros_interfaces__action__AutoDocking_GetResult_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_kobuki_ros_interfaces
void
kobuki_ros_interfaces__action__AutoDocking_GetResult_Request__Sequence__destroy(kobuki_ros_interfaces__action__AutoDocking_GetResult_Request__Sequence * array);

/// Check for action/AutoDocking message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_kobuki_ros_interfaces
bool
kobuki_ros_interfaces__action__AutoDocking_GetResult_Request__Sequence__are_equal(const kobuki_ros_interfaces__action__AutoDocking_GetResult_Request__Sequence * lhs, const kobuki_ros_interfaces__action__AutoDocking_GetResult_Request__Sequence * rhs);

/// Copy an array of action/AutoDocking messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_kobuki_ros_interfaces
bool
kobuki_ros_interfaces__action__AutoDocking_GetResult_Request__Sequence__copy(
  const kobuki_ros_interfaces__action__AutoDocking_GetResult_Request__Sequence * input,
  kobuki_ros_interfaces__action__AutoDocking_GetResult_Request__Sequence * output);

/// Initialize action/AutoDocking message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * kobuki_ros_interfaces__action__AutoDocking_GetResult_Response
 * )) before or use
 * kobuki_ros_interfaces__action__AutoDocking_GetResult_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_kobuki_ros_interfaces
bool
kobuki_ros_interfaces__action__AutoDocking_GetResult_Response__init(kobuki_ros_interfaces__action__AutoDocking_GetResult_Response * msg);

/// Finalize action/AutoDocking message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_kobuki_ros_interfaces
void
kobuki_ros_interfaces__action__AutoDocking_GetResult_Response__fini(kobuki_ros_interfaces__action__AutoDocking_GetResult_Response * msg);

/// Create action/AutoDocking message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * kobuki_ros_interfaces__action__AutoDocking_GetResult_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_kobuki_ros_interfaces
kobuki_ros_interfaces__action__AutoDocking_GetResult_Response *
kobuki_ros_interfaces__action__AutoDocking_GetResult_Response__create();

/// Destroy action/AutoDocking message.
/**
 * It calls
 * kobuki_ros_interfaces__action__AutoDocking_GetResult_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_kobuki_ros_interfaces
void
kobuki_ros_interfaces__action__AutoDocking_GetResult_Response__destroy(kobuki_ros_interfaces__action__AutoDocking_GetResult_Response * msg);

/// Check for action/AutoDocking message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_kobuki_ros_interfaces
bool
kobuki_ros_interfaces__action__AutoDocking_GetResult_Response__are_equal(const kobuki_ros_interfaces__action__AutoDocking_GetResult_Response * lhs, const kobuki_ros_interfaces__action__AutoDocking_GetResult_Response * rhs);

/// Copy a action/AutoDocking message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_kobuki_ros_interfaces
bool
kobuki_ros_interfaces__action__AutoDocking_GetResult_Response__copy(
  const kobuki_ros_interfaces__action__AutoDocking_GetResult_Response * input,
  kobuki_ros_interfaces__action__AutoDocking_GetResult_Response * output);

/// Initialize array of action/AutoDocking messages.
/**
 * It allocates the memory for the number of elements and calls
 * kobuki_ros_interfaces__action__AutoDocking_GetResult_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_kobuki_ros_interfaces
bool
kobuki_ros_interfaces__action__AutoDocking_GetResult_Response__Sequence__init(kobuki_ros_interfaces__action__AutoDocking_GetResult_Response__Sequence * array, size_t size);

/// Finalize array of action/AutoDocking messages.
/**
 * It calls
 * kobuki_ros_interfaces__action__AutoDocking_GetResult_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_kobuki_ros_interfaces
void
kobuki_ros_interfaces__action__AutoDocking_GetResult_Response__Sequence__fini(kobuki_ros_interfaces__action__AutoDocking_GetResult_Response__Sequence * array);

/// Create array of action/AutoDocking messages.
/**
 * It allocates the memory for the array and calls
 * kobuki_ros_interfaces__action__AutoDocking_GetResult_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_kobuki_ros_interfaces
kobuki_ros_interfaces__action__AutoDocking_GetResult_Response__Sequence *
kobuki_ros_interfaces__action__AutoDocking_GetResult_Response__Sequence__create(size_t size);

/// Destroy array of action/AutoDocking messages.
/**
 * It calls
 * kobuki_ros_interfaces__action__AutoDocking_GetResult_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_kobuki_ros_interfaces
void
kobuki_ros_interfaces__action__AutoDocking_GetResult_Response__Sequence__destroy(kobuki_ros_interfaces__action__AutoDocking_GetResult_Response__Sequence * array);

/// Check for action/AutoDocking message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_kobuki_ros_interfaces
bool
kobuki_ros_interfaces__action__AutoDocking_GetResult_Response__Sequence__are_equal(const kobuki_ros_interfaces__action__AutoDocking_GetResult_Response__Sequence * lhs, const kobuki_ros_interfaces__action__AutoDocking_GetResult_Response__Sequence * rhs);

/// Copy an array of action/AutoDocking messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_kobuki_ros_interfaces
bool
kobuki_ros_interfaces__action__AutoDocking_GetResult_Response__Sequence__copy(
  const kobuki_ros_interfaces__action__AutoDocking_GetResult_Response__Sequence * input,
  kobuki_ros_interfaces__action__AutoDocking_GetResult_Response__Sequence * output);

/// Initialize action/AutoDocking message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * kobuki_ros_interfaces__action__AutoDocking_FeedbackMessage
 * )) before or use
 * kobuki_ros_interfaces__action__AutoDocking_FeedbackMessage__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_kobuki_ros_interfaces
bool
kobuki_ros_interfaces__action__AutoDocking_FeedbackMessage__init(kobuki_ros_interfaces__action__AutoDocking_FeedbackMessage * msg);

/// Finalize action/AutoDocking message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_kobuki_ros_interfaces
void
kobuki_ros_interfaces__action__AutoDocking_FeedbackMessage__fini(kobuki_ros_interfaces__action__AutoDocking_FeedbackMessage * msg);

/// Create action/AutoDocking message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * kobuki_ros_interfaces__action__AutoDocking_FeedbackMessage__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_kobuki_ros_interfaces
kobuki_ros_interfaces__action__AutoDocking_FeedbackMessage *
kobuki_ros_interfaces__action__AutoDocking_FeedbackMessage__create();

/// Destroy action/AutoDocking message.
/**
 * It calls
 * kobuki_ros_interfaces__action__AutoDocking_FeedbackMessage__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_kobuki_ros_interfaces
void
kobuki_ros_interfaces__action__AutoDocking_FeedbackMessage__destroy(kobuki_ros_interfaces__action__AutoDocking_FeedbackMessage * msg);

/// Check for action/AutoDocking message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_kobuki_ros_interfaces
bool
kobuki_ros_interfaces__action__AutoDocking_FeedbackMessage__are_equal(const kobuki_ros_interfaces__action__AutoDocking_FeedbackMessage * lhs, const kobuki_ros_interfaces__action__AutoDocking_FeedbackMessage * rhs);

/// Copy a action/AutoDocking message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_kobuki_ros_interfaces
bool
kobuki_ros_interfaces__action__AutoDocking_FeedbackMessage__copy(
  const kobuki_ros_interfaces__action__AutoDocking_FeedbackMessage * input,
  kobuki_ros_interfaces__action__AutoDocking_FeedbackMessage * output);

/// Initialize array of action/AutoDocking messages.
/**
 * It allocates the memory for the number of elements and calls
 * kobuki_ros_interfaces__action__AutoDocking_FeedbackMessage__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_kobuki_ros_interfaces
bool
kobuki_ros_interfaces__action__AutoDocking_FeedbackMessage__Sequence__init(kobuki_ros_interfaces__action__AutoDocking_FeedbackMessage__Sequence * array, size_t size);

/// Finalize array of action/AutoDocking messages.
/**
 * It calls
 * kobuki_ros_interfaces__action__AutoDocking_FeedbackMessage__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_kobuki_ros_interfaces
void
kobuki_ros_interfaces__action__AutoDocking_FeedbackMessage__Sequence__fini(kobuki_ros_interfaces__action__AutoDocking_FeedbackMessage__Sequence * array);

/// Create array of action/AutoDocking messages.
/**
 * It allocates the memory for the array and calls
 * kobuki_ros_interfaces__action__AutoDocking_FeedbackMessage__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_kobuki_ros_interfaces
kobuki_ros_interfaces__action__AutoDocking_FeedbackMessage__Sequence *
kobuki_ros_interfaces__action__AutoDocking_FeedbackMessage__Sequence__create(size_t size);

/// Destroy array of action/AutoDocking messages.
/**
 * It calls
 * kobuki_ros_interfaces__action__AutoDocking_FeedbackMessage__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_kobuki_ros_interfaces
void
kobuki_ros_interfaces__action__AutoDocking_FeedbackMessage__Sequence__destroy(kobuki_ros_interfaces__action__AutoDocking_FeedbackMessage__Sequence * array);

/// Check for action/AutoDocking message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_kobuki_ros_interfaces
bool
kobuki_ros_interfaces__action__AutoDocking_FeedbackMessage__Sequence__are_equal(const kobuki_ros_interfaces__action__AutoDocking_FeedbackMessage__Sequence * lhs, const kobuki_ros_interfaces__action__AutoDocking_FeedbackMessage__Sequence * rhs);

/// Copy an array of action/AutoDocking messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_kobuki_ros_interfaces
bool
kobuki_ros_interfaces__action__AutoDocking_FeedbackMessage__Sequence__copy(
  const kobuki_ros_interfaces__action__AutoDocking_FeedbackMessage__Sequence * input,
  kobuki_ros_interfaces__action__AutoDocking_FeedbackMessage__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // KOBUKI_ROS_INTERFACES__ACTION__DETAIL__AUTO_DOCKING__FUNCTIONS_H_
