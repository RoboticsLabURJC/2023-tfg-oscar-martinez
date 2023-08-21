// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from kobuki_ros_interfaces:msg/VersionInfo.idl
// generated code does not contain a copyright notice
#include "kobuki_ros_interfaces/msg/detail/version_info__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `hardware`
// Member `firmware`
// Member `software`
#include "rosidl_runtime_c/string_functions.h"
// Member `udid`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
kobuki_ros_interfaces__msg__VersionInfo__init(kobuki_ros_interfaces__msg__VersionInfo * msg)
{
  if (!msg) {
    return false;
  }
  // hardware
  if (!rosidl_runtime_c__String__init(&msg->hardware)) {
    kobuki_ros_interfaces__msg__VersionInfo__fini(msg);
    return false;
  }
  // firmware
  if (!rosidl_runtime_c__String__init(&msg->firmware)) {
    kobuki_ros_interfaces__msg__VersionInfo__fini(msg);
    return false;
  }
  // software
  if (!rosidl_runtime_c__String__init(&msg->software)) {
    kobuki_ros_interfaces__msg__VersionInfo__fini(msg);
    return false;
  }
  // udid
  if (!rosidl_runtime_c__uint32__Sequence__init(&msg->udid, 0)) {
    kobuki_ros_interfaces__msg__VersionInfo__fini(msg);
    return false;
  }
  // features
  return true;
}

void
kobuki_ros_interfaces__msg__VersionInfo__fini(kobuki_ros_interfaces__msg__VersionInfo * msg)
{
  if (!msg) {
    return;
  }
  // hardware
  rosidl_runtime_c__String__fini(&msg->hardware);
  // firmware
  rosidl_runtime_c__String__fini(&msg->firmware);
  // software
  rosidl_runtime_c__String__fini(&msg->software);
  // udid
  rosidl_runtime_c__uint32__Sequence__fini(&msg->udid);
  // features
}

bool
kobuki_ros_interfaces__msg__VersionInfo__are_equal(const kobuki_ros_interfaces__msg__VersionInfo * lhs, const kobuki_ros_interfaces__msg__VersionInfo * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // hardware
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->hardware), &(rhs->hardware)))
  {
    return false;
  }
  // firmware
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->firmware), &(rhs->firmware)))
  {
    return false;
  }
  // software
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->software), &(rhs->software)))
  {
    return false;
  }
  // udid
  if (!rosidl_runtime_c__uint32__Sequence__are_equal(
      &(lhs->udid), &(rhs->udid)))
  {
    return false;
  }
  // features
  if (lhs->features != rhs->features) {
    return false;
  }
  return true;
}

bool
kobuki_ros_interfaces__msg__VersionInfo__copy(
  const kobuki_ros_interfaces__msg__VersionInfo * input,
  kobuki_ros_interfaces__msg__VersionInfo * output)
{
  if (!input || !output) {
    return false;
  }
  // hardware
  if (!rosidl_runtime_c__String__copy(
      &(input->hardware), &(output->hardware)))
  {
    return false;
  }
  // firmware
  if (!rosidl_runtime_c__String__copy(
      &(input->firmware), &(output->firmware)))
  {
    return false;
  }
  // software
  if (!rosidl_runtime_c__String__copy(
      &(input->software), &(output->software)))
  {
    return false;
  }
  // udid
  if (!rosidl_runtime_c__uint32__Sequence__copy(
      &(input->udid), &(output->udid)))
  {
    return false;
  }
  // features
  output->features = input->features;
  return true;
}

kobuki_ros_interfaces__msg__VersionInfo *
kobuki_ros_interfaces__msg__VersionInfo__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  kobuki_ros_interfaces__msg__VersionInfo * msg = (kobuki_ros_interfaces__msg__VersionInfo *)allocator.allocate(sizeof(kobuki_ros_interfaces__msg__VersionInfo), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(kobuki_ros_interfaces__msg__VersionInfo));
  bool success = kobuki_ros_interfaces__msg__VersionInfo__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
kobuki_ros_interfaces__msg__VersionInfo__destroy(kobuki_ros_interfaces__msg__VersionInfo * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    kobuki_ros_interfaces__msg__VersionInfo__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
kobuki_ros_interfaces__msg__VersionInfo__Sequence__init(kobuki_ros_interfaces__msg__VersionInfo__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  kobuki_ros_interfaces__msg__VersionInfo * data = NULL;

  if (size) {
    data = (kobuki_ros_interfaces__msg__VersionInfo *)allocator.zero_allocate(size, sizeof(kobuki_ros_interfaces__msg__VersionInfo), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = kobuki_ros_interfaces__msg__VersionInfo__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        kobuki_ros_interfaces__msg__VersionInfo__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
kobuki_ros_interfaces__msg__VersionInfo__Sequence__fini(kobuki_ros_interfaces__msg__VersionInfo__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      kobuki_ros_interfaces__msg__VersionInfo__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

kobuki_ros_interfaces__msg__VersionInfo__Sequence *
kobuki_ros_interfaces__msg__VersionInfo__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  kobuki_ros_interfaces__msg__VersionInfo__Sequence * array = (kobuki_ros_interfaces__msg__VersionInfo__Sequence *)allocator.allocate(sizeof(kobuki_ros_interfaces__msg__VersionInfo__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = kobuki_ros_interfaces__msg__VersionInfo__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
kobuki_ros_interfaces__msg__VersionInfo__Sequence__destroy(kobuki_ros_interfaces__msg__VersionInfo__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    kobuki_ros_interfaces__msg__VersionInfo__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
kobuki_ros_interfaces__msg__VersionInfo__Sequence__are_equal(const kobuki_ros_interfaces__msg__VersionInfo__Sequence * lhs, const kobuki_ros_interfaces__msg__VersionInfo__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!kobuki_ros_interfaces__msg__VersionInfo__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
kobuki_ros_interfaces__msg__VersionInfo__Sequence__copy(
  const kobuki_ros_interfaces__msg__VersionInfo__Sequence * input,
  kobuki_ros_interfaces__msg__VersionInfo__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(kobuki_ros_interfaces__msg__VersionInfo);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    kobuki_ros_interfaces__msg__VersionInfo * data =
      (kobuki_ros_interfaces__msg__VersionInfo *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!kobuki_ros_interfaces__msg__VersionInfo__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          kobuki_ros_interfaces__msg__VersionInfo__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!kobuki_ros_interfaces__msg__VersionInfo__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
