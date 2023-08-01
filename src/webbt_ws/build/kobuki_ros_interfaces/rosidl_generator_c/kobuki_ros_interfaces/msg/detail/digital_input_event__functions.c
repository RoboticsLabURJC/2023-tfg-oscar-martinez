// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from kobuki_ros_interfaces:msg/DigitalInputEvent.idl
// generated code does not contain a copyright notice
#include "kobuki_ros_interfaces/msg/detail/digital_input_event__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
kobuki_ros_interfaces__msg__DigitalInputEvent__init(kobuki_ros_interfaces__msg__DigitalInputEvent * msg)
{
  if (!msg) {
    return false;
  }
  // values
  return true;
}

void
kobuki_ros_interfaces__msg__DigitalInputEvent__fini(kobuki_ros_interfaces__msg__DigitalInputEvent * msg)
{
  if (!msg) {
    return;
  }
  // values
}

bool
kobuki_ros_interfaces__msg__DigitalInputEvent__are_equal(const kobuki_ros_interfaces__msg__DigitalInputEvent * lhs, const kobuki_ros_interfaces__msg__DigitalInputEvent * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // values
  for (size_t i = 0; i < 4; ++i) {
    if (lhs->values[i] != rhs->values[i]) {
      return false;
    }
  }
  return true;
}

bool
kobuki_ros_interfaces__msg__DigitalInputEvent__copy(
  const kobuki_ros_interfaces__msg__DigitalInputEvent * input,
  kobuki_ros_interfaces__msg__DigitalInputEvent * output)
{
  if (!input || !output) {
    return false;
  }
  // values
  for (size_t i = 0; i < 4; ++i) {
    output->values[i] = input->values[i];
  }
  return true;
}

kobuki_ros_interfaces__msg__DigitalInputEvent *
kobuki_ros_interfaces__msg__DigitalInputEvent__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  kobuki_ros_interfaces__msg__DigitalInputEvent * msg = (kobuki_ros_interfaces__msg__DigitalInputEvent *)allocator.allocate(sizeof(kobuki_ros_interfaces__msg__DigitalInputEvent), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(kobuki_ros_interfaces__msg__DigitalInputEvent));
  bool success = kobuki_ros_interfaces__msg__DigitalInputEvent__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
kobuki_ros_interfaces__msg__DigitalInputEvent__destroy(kobuki_ros_interfaces__msg__DigitalInputEvent * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    kobuki_ros_interfaces__msg__DigitalInputEvent__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
kobuki_ros_interfaces__msg__DigitalInputEvent__Sequence__init(kobuki_ros_interfaces__msg__DigitalInputEvent__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  kobuki_ros_interfaces__msg__DigitalInputEvent * data = NULL;

  if (size) {
    data = (kobuki_ros_interfaces__msg__DigitalInputEvent *)allocator.zero_allocate(size, sizeof(kobuki_ros_interfaces__msg__DigitalInputEvent), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = kobuki_ros_interfaces__msg__DigitalInputEvent__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        kobuki_ros_interfaces__msg__DigitalInputEvent__fini(&data[i - 1]);
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
kobuki_ros_interfaces__msg__DigitalInputEvent__Sequence__fini(kobuki_ros_interfaces__msg__DigitalInputEvent__Sequence * array)
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
      kobuki_ros_interfaces__msg__DigitalInputEvent__fini(&array->data[i]);
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

kobuki_ros_interfaces__msg__DigitalInputEvent__Sequence *
kobuki_ros_interfaces__msg__DigitalInputEvent__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  kobuki_ros_interfaces__msg__DigitalInputEvent__Sequence * array = (kobuki_ros_interfaces__msg__DigitalInputEvent__Sequence *)allocator.allocate(sizeof(kobuki_ros_interfaces__msg__DigitalInputEvent__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = kobuki_ros_interfaces__msg__DigitalInputEvent__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
kobuki_ros_interfaces__msg__DigitalInputEvent__Sequence__destroy(kobuki_ros_interfaces__msg__DigitalInputEvent__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    kobuki_ros_interfaces__msg__DigitalInputEvent__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
kobuki_ros_interfaces__msg__DigitalInputEvent__Sequence__are_equal(const kobuki_ros_interfaces__msg__DigitalInputEvent__Sequence * lhs, const kobuki_ros_interfaces__msg__DigitalInputEvent__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!kobuki_ros_interfaces__msg__DigitalInputEvent__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
kobuki_ros_interfaces__msg__DigitalInputEvent__Sequence__copy(
  const kobuki_ros_interfaces__msg__DigitalInputEvent__Sequence * input,
  kobuki_ros_interfaces__msg__DigitalInputEvent__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(kobuki_ros_interfaces__msg__DigitalInputEvent);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    kobuki_ros_interfaces__msg__DigitalInputEvent * data =
      (kobuki_ros_interfaces__msg__DigitalInputEvent *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!kobuki_ros_interfaces__msg__DigitalInputEvent__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          kobuki_ros_interfaces__msg__DigitalInputEvent__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!kobuki_ros_interfaces__msg__DigitalInputEvent__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
