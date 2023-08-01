# generated from rosidl_generator_py/resource/_idl.py.em
# with input from kobuki_ros_interfaces:msg/WheelDropEvent.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_WheelDropEvent(type):
    """Metaclass of message 'WheelDropEvent'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'LEFT': 0,
        'RIGHT': 1,
        'RAISED': 0,
        'DROPPED': 1,
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
                'kobuki_ros_interfaces.msg.WheelDropEvent')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__wheel_drop_event
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__wheel_drop_event
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__wheel_drop_event
            cls._TYPE_SUPPORT = module.type_support_msg__msg__wheel_drop_event
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__wheel_drop_event

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'LEFT': cls.__constants['LEFT'],
            'RIGHT': cls.__constants['RIGHT'],
            'RAISED': cls.__constants['RAISED'],
            'DROPPED': cls.__constants['DROPPED'],
        }

    @property
    def LEFT(self):
        """Message constant 'LEFT'."""
        return Metaclass_WheelDropEvent.__constants['LEFT']

    @property
    def RIGHT(self):
        """Message constant 'RIGHT'."""
        return Metaclass_WheelDropEvent.__constants['RIGHT']

    @property
    def RAISED(self):
        """Message constant 'RAISED'."""
        return Metaclass_WheelDropEvent.__constants['RAISED']

    @property
    def DROPPED(self):
        """Message constant 'DROPPED'."""
        return Metaclass_WheelDropEvent.__constants['DROPPED']


class WheelDropEvent(metaclass=Metaclass_WheelDropEvent):
    """
    Message class 'WheelDropEvent'.

    Constants:
      LEFT
      RIGHT
      RAISED
      DROPPED
    """

    __slots__ = [
        '_wheel',
        '_state',
    ]

    _fields_and_field_types = {
        'wheel': 'uint8',
        'state': 'uint8',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.wheel = kwargs.get('wheel', int())
        self.state = kwargs.get('state', int())

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
        if self.wheel != other.wheel:
            return False
        if self.state != other.state:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def wheel(self):
        """Message field 'wheel'."""
        return self._wheel

    @wheel.setter
    def wheel(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'wheel' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'wheel' field must be an unsigned integer in [0, 255]"
        self._wheel = value

    @builtins.property
    def state(self):
        """Message field 'state'."""
        return self._state

    @state.setter
    def state(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'state' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'state' field must be an unsigned integer in [0, 255]"
        self._state = value
