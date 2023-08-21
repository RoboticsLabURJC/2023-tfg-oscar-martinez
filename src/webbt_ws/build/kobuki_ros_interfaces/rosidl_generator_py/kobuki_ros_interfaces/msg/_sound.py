# generated from rosidl_generator_py/resource/_idl.py.em
# with input from kobuki_ros_interfaces:msg/Sound.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Sound(type):
    """Metaclass of message 'Sound'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'ON': 0,
        'OFF': 1,
        'RECHARGE': 2,
        'BUTTON': 3,
        'ERROR': 4,
        'CLEANINGSTART': 5,
        'CLEANINGEND': 6,
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
                'kobuki_ros_interfaces.msg.Sound')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__sound
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__sound
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__sound
            cls._TYPE_SUPPORT = module.type_support_msg__msg__sound
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__sound

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'ON': cls.__constants['ON'],
            'OFF': cls.__constants['OFF'],
            'RECHARGE': cls.__constants['RECHARGE'],
            'BUTTON': cls.__constants['BUTTON'],
            'ERROR': cls.__constants['ERROR'],
            'CLEANINGSTART': cls.__constants['CLEANINGSTART'],
            'CLEANINGEND': cls.__constants['CLEANINGEND'],
        }

    @property
    def ON(self):
        """Message constant 'ON'."""
        return Metaclass_Sound.__constants['ON']

    @property
    def OFF(self):
        """Message constant 'OFF'."""
        return Metaclass_Sound.__constants['OFF']

    @property
    def RECHARGE(self):
        """Message constant 'RECHARGE'."""
        return Metaclass_Sound.__constants['RECHARGE']

    @property
    def BUTTON(self):
        """Message constant 'BUTTON'."""
        return Metaclass_Sound.__constants['BUTTON']

    @property
    def ERROR(self):
        """Message constant 'ERROR'."""
        return Metaclass_Sound.__constants['ERROR']

    @property
    def CLEANINGSTART(self):
        """Message constant 'CLEANINGSTART'."""
        return Metaclass_Sound.__constants['CLEANINGSTART']

    @property
    def CLEANINGEND(self):
        """Message constant 'CLEANINGEND'."""
        return Metaclass_Sound.__constants['CLEANINGEND']


class Sound(metaclass=Metaclass_Sound):
    """
    Message class 'Sound'.

    Constants:
      ON
      OFF
      RECHARGE
      BUTTON
      ERROR
      CLEANINGSTART
      CLEANINGEND
    """

    __slots__ = [
        '_value',
    ]

    _fields_and_field_types = {
        'value': 'uint8',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.value = kwargs.get('value', int())

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
        if self.value != other.value:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def value(self):
        """Message field 'value'."""
        return self._value

    @value.setter
    def value(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'value' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'value' field must be an unsigned integer in [0, 255]"
        self._value = value
