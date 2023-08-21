// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from kobuki_ros_interfaces:msg/SensorState.idl
// generated code does not contain a copyright notice
#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
#include <Python.h>
#include <stdbool.h>
#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-function"
#endif
#include "numpy/ndarrayobject.h"
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif
#include "rosidl_runtime_c/visibility_control.h"
#include "kobuki_ros_interfaces/msg/detail/sensor_state__struct.h"
#include "kobuki_ros_interfaces/msg/detail/sensor_state__functions.h"

#include "rosidl_runtime_c/primitives_sequence.h"
#include "rosidl_runtime_c/primitives_sequence_functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__header__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__header__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool kobuki_ros_interfaces__msg__sensor_state__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[52];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp("kobuki_ros_interfaces.msg._sensor_state.SensorState", full_classname_dest, 51) == 0);
  }
  kobuki_ros_interfaces__msg__SensorState * ros_message = _ros_message;
  {  // header
    PyObject * field = PyObject_GetAttrString(_pymsg, "header");
    if (!field) {
      return false;
    }
    if (!std_msgs__msg__header__convert_from_py(field, &ros_message->header)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // time_stamp
    PyObject * field = PyObject_GetAttrString(_pymsg, "time_stamp");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->time_stamp = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // bumper
    PyObject * field = PyObject_GetAttrString(_pymsg, "bumper");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->bumper = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // wheel_drop
    PyObject * field = PyObject_GetAttrString(_pymsg, "wheel_drop");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->wheel_drop = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // cliff
    PyObject * field = PyObject_GetAttrString(_pymsg, "cliff");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->cliff = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // left_encoder
    PyObject * field = PyObject_GetAttrString(_pymsg, "left_encoder");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->left_encoder = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // right_encoder
    PyObject * field = PyObject_GetAttrString(_pymsg, "right_encoder");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->right_encoder = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // left_pwm
    PyObject * field = PyObject_GetAttrString(_pymsg, "left_pwm");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->left_pwm = (int8_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // right_pwm
    PyObject * field = PyObject_GetAttrString(_pymsg, "right_pwm");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->right_pwm = (int8_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // buttons
    PyObject * field = PyObject_GetAttrString(_pymsg, "buttons");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->buttons = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // charger
    PyObject * field = PyObject_GetAttrString(_pymsg, "charger");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->charger = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // battery
    PyObject * field = PyObject_GetAttrString(_pymsg, "battery");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->battery = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // bottom
    PyObject * field = PyObject_GetAttrString(_pymsg, "bottom");
    if (!field) {
      return false;
    }
    if (PyObject_CheckBuffer(field)) {
      // Optimization for converting arrays of primitives
      Py_buffer view;
      int rc = PyObject_GetBuffer(field, &view, PyBUF_SIMPLE);
      if (rc < 0) {
        Py_DECREF(field);
        return false;
      }
      Py_ssize_t size = view.len / sizeof(uint16_t);
      if (!rosidl_runtime_c__uint16__Sequence__init(&(ros_message->bottom), size)) {
        PyErr_SetString(PyExc_RuntimeError, "unable to create uint16__Sequence ros_message");
        PyBuffer_Release(&view);
        Py_DECREF(field);
        return false;
      }
      uint16_t * dest = ros_message->bottom.data;
      rc = PyBuffer_ToContiguous(dest, &view, view.len, 'C');
      if (rc < 0) {
        PyBuffer_Release(&view);
        Py_DECREF(field);
        return false;
      }
      PyBuffer_Release(&view);
    } else {
      PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'bottom'");
      if (!seq_field) {
        Py_DECREF(field);
        return false;
      }
      Py_ssize_t size = PySequence_Size(field);
      if (-1 == size) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
      if (!rosidl_runtime_c__uint16__Sequence__init(&(ros_message->bottom), size)) {
        PyErr_SetString(PyExc_RuntimeError, "unable to create uint16__Sequence ros_message");
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
      uint16_t * dest = ros_message->bottom.data;
      for (Py_ssize_t i = 0; i < size; ++i) {
        PyObject * item = PySequence_Fast_GET_ITEM(seq_field, i);
        if (!item) {
          Py_DECREF(seq_field);
          Py_DECREF(field);
          return false;
        }
        assert(PyLong_Check(item));
        uint16_t tmp = (uint16_t)PyLong_AsUnsignedLong(item);

        memcpy(&dest[i], &tmp, sizeof(uint16_t));
      }
      Py_DECREF(seq_field);
    }
    Py_DECREF(field);
  }
  {  // current
    PyObject * field = PyObject_GetAttrString(_pymsg, "current");
    if (!field) {
      return false;
    }
    if (PyObject_CheckBuffer(field)) {
      // Optimization for converting arrays of primitives
      Py_buffer view;
      int rc = PyObject_GetBuffer(field, &view, PyBUF_SIMPLE);
      if (rc < 0) {
        Py_DECREF(field);
        return false;
      }
      Py_ssize_t size = view.len / sizeof(uint8_t);
      if (!rosidl_runtime_c__uint8__Sequence__init(&(ros_message->current), size)) {
        PyErr_SetString(PyExc_RuntimeError, "unable to create uint8__Sequence ros_message");
        PyBuffer_Release(&view);
        Py_DECREF(field);
        return false;
      }
      uint8_t * dest = ros_message->current.data;
      rc = PyBuffer_ToContiguous(dest, &view, view.len, 'C');
      if (rc < 0) {
        PyBuffer_Release(&view);
        Py_DECREF(field);
        return false;
      }
      PyBuffer_Release(&view);
    } else {
      PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'current'");
      if (!seq_field) {
        Py_DECREF(field);
        return false;
      }
      Py_ssize_t size = PySequence_Size(field);
      if (-1 == size) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
      if (!rosidl_runtime_c__uint8__Sequence__init(&(ros_message->current), size)) {
        PyErr_SetString(PyExc_RuntimeError, "unable to create uint8__Sequence ros_message");
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
      uint8_t * dest = ros_message->current.data;
      for (Py_ssize_t i = 0; i < size; ++i) {
        PyObject * item = PySequence_Fast_GET_ITEM(seq_field, i);
        if (!item) {
          Py_DECREF(seq_field);
          Py_DECREF(field);
          return false;
        }
        assert(PyLong_Check(item));
        uint8_t tmp = (uint8_t)PyLong_AsUnsignedLong(item);

        memcpy(&dest[i], &tmp, sizeof(uint8_t));
      }
      Py_DECREF(seq_field);
    }
    Py_DECREF(field);
  }
  {  // over_current
    PyObject * field = PyObject_GetAttrString(_pymsg, "over_current");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->over_current = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // digital_input
    PyObject * field = PyObject_GetAttrString(_pymsg, "digital_input");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->digital_input = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // analog_input
    PyObject * field = PyObject_GetAttrString(_pymsg, "analog_input");
    if (!field) {
      return false;
    }
    if (PyObject_CheckBuffer(field)) {
      // Optimization for converting arrays of primitives
      Py_buffer view;
      int rc = PyObject_GetBuffer(field, &view, PyBUF_SIMPLE);
      if (rc < 0) {
        Py_DECREF(field);
        return false;
      }
      Py_ssize_t size = view.len / sizeof(uint16_t);
      if (!rosidl_runtime_c__uint16__Sequence__init(&(ros_message->analog_input), size)) {
        PyErr_SetString(PyExc_RuntimeError, "unable to create uint16__Sequence ros_message");
        PyBuffer_Release(&view);
        Py_DECREF(field);
        return false;
      }
      uint16_t * dest = ros_message->analog_input.data;
      rc = PyBuffer_ToContiguous(dest, &view, view.len, 'C');
      if (rc < 0) {
        PyBuffer_Release(&view);
        Py_DECREF(field);
        return false;
      }
      PyBuffer_Release(&view);
    } else {
      PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'analog_input'");
      if (!seq_field) {
        Py_DECREF(field);
        return false;
      }
      Py_ssize_t size = PySequence_Size(field);
      if (-1 == size) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
      if (!rosidl_runtime_c__uint16__Sequence__init(&(ros_message->analog_input), size)) {
        PyErr_SetString(PyExc_RuntimeError, "unable to create uint16__Sequence ros_message");
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
      uint16_t * dest = ros_message->analog_input.data;
      for (Py_ssize_t i = 0; i < size; ++i) {
        PyObject * item = PySequence_Fast_GET_ITEM(seq_field, i);
        if (!item) {
          Py_DECREF(seq_field);
          Py_DECREF(field);
          return false;
        }
        assert(PyLong_Check(item));
        uint16_t tmp = (uint16_t)PyLong_AsUnsignedLong(item);

        memcpy(&dest[i], &tmp, sizeof(uint16_t));
      }
      Py_DECREF(seq_field);
    }
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * kobuki_ros_interfaces__msg__sensor_state__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of SensorState */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("kobuki_ros_interfaces.msg._sensor_state");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "SensorState");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  kobuki_ros_interfaces__msg__SensorState * ros_message = (kobuki_ros_interfaces__msg__SensorState *)raw_ros_message;
  {  // header
    PyObject * field = NULL;
    field = std_msgs__msg__header__convert_to_py(&ros_message->header);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "header", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // time_stamp
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->time_stamp);
    {
      int rc = PyObject_SetAttrString(_pymessage, "time_stamp", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // bumper
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->bumper);
    {
      int rc = PyObject_SetAttrString(_pymessage, "bumper", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // wheel_drop
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->wheel_drop);
    {
      int rc = PyObject_SetAttrString(_pymessage, "wheel_drop", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // cliff
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->cliff);
    {
      int rc = PyObject_SetAttrString(_pymessage, "cliff", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // left_encoder
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->left_encoder);
    {
      int rc = PyObject_SetAttrString(_pymessage, "left_encoder", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // right_encoder
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->right_encoder);
    {
      int rc = PyObject_SetAttrString(_pymessage, "right_encoder", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // left_pwm
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->left_pwm);
    {
      int rc = PyObject_SetAttrString(_pymessage, "left_pwm", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // right_pwm
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->right_pwm);
    {
      int rc = PyObject_SetAttrString(_pymessage, "right_pwm", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // buttons
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->buttons);
    {
      int rc = PyObject_SetAttrString(_pymessage, "buttons", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // charger
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->charger);
    {
      int rc = PyObject_SetAttrString(_pymessage, "charger", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // battery
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->battery);
    {
      int rc = PyObject_SetAttrString(_pymessage, "battery", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // bottom
    PyObject * field = NULL;
    field = PyObject_GetAttrString(_pymessage, "bottom");
    if (!field) {
      return NULL;
    }
    assert(field->ob_type != NULL);
    assert(field->ob_type->tp_name != NULL);
    assert(strcmp(field->ob_type->tp_name, "array.array") == 0);
    // ensure that itemsize matches the sizeof of the ROS message field
    PyObject * itemsize_attr = PyObject_GetAttrString(field, "itemsize");
    assert(itemsize_attr != NULL);
    size_t itemsize = PyLong_AsSize_t(itemsize_attr);
    Py_DECREF(itemsize_attr);
    if (itemsize != sizeof(uint16_t)) {
      PyErr_SetString(PyExc_RuntimeError, "itemsize doesn't match expectation");
      Py_DECREF(field);
      return NULL;
    }
    // clear the array, poor approach to remove potential default values
    Py_ssize_t length = PyObject_Length(field);
    if (-1 == length) {
      Py_DECREF(field);
      return NULL;
    }
    if (length > 0) {
      PyObject * pop = PyObject_GetAttrString(field, "pop");
      assert(pop != NULL);
      for (Py_ssize_t i = 0; i < length; ++i) {
        PyObject * ret = PyObject_CallFunctionObjArgs(pop, NULL);
        if (!ret) {
          Py_DECREF(pop);
          Py_DECREF(field);
          return NULL;
        }
        Py_DECREF(ret);
      }
      Py_DECREF(pop);
    }
    if (ros_message->bottom.size > 0) {
      // populating the array.array using the frombytes method
      PyObject * frombytes = PyObject_GetAttrString(field, "frombytes");
      assert(frombytes != NULL);
      uint16_t * src = &(ros_message->bottom.data[0]);
      PyObject * data = PyBytes_FromStringAndSize((const char *)src, ros_message->bottom.size * sizeof(uint16_t));
      assert(data != NULL);
      PyObject * ret = PyObject_CallFunctionObjArgs(frombytes, data, NULL);
      Py_DECREF(data);
      Py_DECREF(frombytes);
      if (!ret) {
        Py_DECREF(field);
        return NULL;
      }
      Py_DECREF(ret);
    }
    Py_DECREF(field);
  }
  {  // current
    PyObject * field = NULL;
    field = PyObject_GetAttrString(_pymessage, "current");
    if (!field) {
      return NULL;
    }
    assert(field->ob_type != NULL);
    assert(field->ob_type->tp_name != NULL);
    assert(strcmp(field->ob_type->tp_name, "array.array") == 0);
    // ensure that itemsize matches the sizeof of the ROS message field
    PyObject * itemsize_attr = PyObject_GetAttrString(field, "itemsize");
    assert(itemsize_attr != NULL);
    size_t itemsize = PyLong_AsSize_t(itemsize_attr);
    Py_DECREF(itemsize_attr);
    if (itemsize != sizeof(uint8_t)) {
      PyErr_SetString(PyExc_RuntimeError, "itemsize doesn't match expectation");
      Py_DECREF(field);
      return NULL;
    }
    // clear the array, poor approach to remove potential default values
    Py_ssize_t length = PyObject_Length(field);
    if (-1 == length) {
      Py_DECREF(field);
      return NULL;
    }
    if (length > 0) {
      PyObject * pop = PyObject_GetAttrString(field, "pop");
      assert(pop != NULL);
      for (Py_ssize_t i = 0; i < length; ++i) {
        PyObject * ret = PyObject_CallFunctionObjArgs(pop, NULL);
        if (!ret) {
          Py_DECREF(pop);
          Py_DECREF(field);
          return NULL;
        }
        Py_DECREF(ret);
      }
      Py_DECREF(pop);
    }
    if (ros_message->current.size > 0) {
      // populating the array.array using the frombytes method
      PyObject * frombytes = PyObject_GetAttrString(field, "frombytes");
      assert(frombytes != NULL);
      uint8_t * src = &(ros_message->current.data[0]);
      PyObject * data = PyBytes_FromStringAndSize((const char *)src, ros_message->current.size * sizeof(uint8_t));
      assert(data != NULL);
      PyObject * ret = PyObject_CallFunctionObjArgs(frombytes, data, NULL);
      Py_DECREF(data);
      Py_DECREF(frombytes);
      if (!ret) {
        Py_DECREF(field);
        return NULL;
      }
      Py_DECREF(ret);
    }
    Py_DECREF(field);
  }
  {  // over_current
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->over_current);
    {
      int rc = PyObject_SetAttrString(_pymessage, "over_current", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // digital_input
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->digital_input);
    {
      int rc = PyObject_SetAttrString(_pymessage, "digital_input", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // analog_input
    PyObject * field = NULL;
    field = PyObject_GetAttrString(_pymessage, "analog_input");
    if (!field) {
      return NULL;
    }
    assert(field->ob_type != NULL);
    assert(field->ob_type->tp_name != NULL);
    assert(strcmp(field->ob_type->tp_name, "array.array") == 0);
    // ensure that itemsize matches the sizeof of the ROS message field
    PyObject * itemsize_attr = PyObject_GetAttrString(field, "itemsize");
    assert(itemsize_attr != NULL);
    size_t itemsize = PyLong_AsSize_t(itemsize_attr);
    Py_DECREF(itemsize_attr);
    if (itemsize != sizeof(uint16_t)) {
      PyErr_SetString(PyExc_RuntimeError, "itemsize doesn't match expectation");
      Py_DECREF(field);
      return NULL;
    }
    // clear the array, poor approach to remove potential default values
    Py_ssize_t length = PyObject_Length(field);
    if (-1 == length) {
      Py_DECREF(field);
      return NULL;
    }
    if (length > 0) {
      PyObject * pop = PyObject_GetAttrString(field, "pop");
      assert(pop != NULL);
      for (Py_ssize_t i = 0; i < length; ++i) {
        PyObject * ret = PyObject_CallFunctionObjArgs(pop, NULL);
        if (!ret) {
          Py_DECREF(pop);
          Py_DECREF(field);
          return NULL;
        }
        Py_DECREF(ret);
      }
      Py_DECREF(pop);
    }
    if (ros_message->analog_input.size > 0) {
      // populating the array.array using the frombytes method
      PyObject * frombytes = PyObject_GetAttrString(field, "frombytes");
      assert(frombytes != NULL);
      uint16_t * src = &(ros_message->analog_input.data[0]);
      PyObject * data = PyBytes_FromStringAndSize((const char *)src, ros_message->analog_input.size * sizeof(uint16_t));
      assert(data != NULL);
      PyObject * ret = PyObject_CallFunctionObjArgs(frombytes, data, NULL);
      Py_DECREF(data);
      Py_DECREF(frombytes);
      if (!ret) {
        Py_DECREF(field);
        return NULL;
      }
      Py_DECREF(ret);
    }
    Py_DECREF(field);
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
