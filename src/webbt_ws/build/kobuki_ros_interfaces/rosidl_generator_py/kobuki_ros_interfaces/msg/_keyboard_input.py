# generated from rosidl_generator_py/resource/_idl.py.em
# with input from kobuki_ros_interfaces:msg/KeyboardInput.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_KeyboardInput(type):
    """Metaclass of message 'KeyboardInput'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'KEYCODE_RIGHT': 67,
        'KEYCODE_LEFT': 68,
        'KEYCODE_UP': 65,
        'KEYCODE_DOWN': 66,
        'KEYCODE_SPACE': 32,
        'KEYCODE_ENABLE': 101,
        'KEYCODE_DISABLE': 100,
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('kobuki_ros_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'kobuki_ros_interfaces.msg.KeyboardInput')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__keyboard_input
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__keyboard_input
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__keyboard_input
            cls._TYPE_SUPPORT = module.type_support_msg__msg__keyboard_input
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__keyboard_input

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'KEYCODE_RIGHT': cls.__constants['KEYCODE_RIGHT'],
            'KEYCODE_LEFT': cls.__constants['KEYCODE_LEFT'],
            'KEYCODE_UP': cls.__constants['KEYCODE_UP'],
            'KEYCODE_DOWN': cls.__constants['KEYCODE_DOWN'],
            'KEYCODE_SPACE': cls.__constants['KEYCODE_SPACE'],
            'KEYCODE_ENABLE': cls.__constants['KEYCODE_ENABLE'],
            'KEYCODE_DISABLE': cls.__constants['KEYCODE_DISABLE'],
        }

    @property
    def KEYCODE_RIGHT(self):
        """Message constant 'KEYCODE_RIGHT'."""
        return Metaclass_KeyboardInput.__constants['KEYCODE_RIGHT']

    @property
    def KEYCODE_LEFT(self):
        """Message constant 'KEYCODE_LEFT'."""
        return Metaclass_KeyboardInput.__constants['KEYCODE_LEFT']

    @property
    def KEYCODE_UP(self):
        """Message constant 'KEYCODE_UP'."""
        return Metaclass_KeyboardInput.__constants['KEYCODE_UP']

    @property
    def KEYCODE_DOWN(self):
        """Message constant 'KEYCODE_DOWN'."""
        return Metaclass_KeyboardInput.__constants['KEYCODE_DOWN']

    @property
    def KEYCODE_SPACE(self):
        """Message constant 'KEYCODE_SPACE'."""
        return Metaclass_KeyboardInput.__constants['KEYCODE_SPACE']

    @property
    def KEYCODE_ENABLE(self):
        """Message constant 'KEYCODE_ENABLE'."""
        return Metaclass_KeyboardInput.__constants['KEYCODE_ENABLE']

    @property
    def KEYCODE_DISABLE(self):
        """Message constant 'KEYCODE_DISABLE'."""
        return Metaclass_KeyboardInput.__constants['KEYCODE_DISABLE']


class KeyboardInput(metaclass=Metaclass_KeyboardInput):
    """
    Message class 'KeyboardInput'.

    Constants:
      KEYCODE_RIGHT
      KEYCODE_LEFT
      KEYCODE_UP
      KEYCODE_DOWN
      KEYCODE_SPACE
      KEYCODE_ENABLE
      KEYCODE_DISABLE
    """

    __slots__ = [
        '_pressed_key',
    ]

    _fields_and_field_types = {
        'pressed_key': 'uint8',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.pressed_key = kwargs.get('pressed_key', int())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.pressed_key != other.pressed_key:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def pressed_key(self):
        """Message field 'pressed_key'."""
        return self._pressed_key

    @pressed_key.setter
    def pressed_key(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'pressed_key' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'pressed_key' field must be an unsigned integer in [0, 255]"
        self._pressed_key = value
