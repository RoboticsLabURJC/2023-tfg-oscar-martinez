# generated from rosidl_generator_py/resource/_idl.py.em
# with input from kobuki_ros_interfaces:msg/ControllerInfo.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_ControllerInfo(type):
    """Metaclass of message 'ControllerInfo'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'DEFAULT': 0,
        'USER_CONFIGURED': 1,
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
                'kobuki_ros_interfaces.msg.ControllerInfo')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__controller_info
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__controller_info
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__controller_info
            cls._TYPE_SUPPORT = module.type_support_msg__msg__controller_info
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__controller_info

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'DEFAULT': cls.__constants['DEFAULT'],
            'USER_CONFIGURED': cls.__constants['USER_CONFIGURED'],
        }

    @property
    def DEFAULT(self):
        """Message constant 'DEFAULT'."""
        return Metaclass_ControllerInfo.__constants['DEFAULT']

    @property
    def USER_CONFIGURED(self):
        """Message constant 'USER_CONFIGURED'."""
        return Metaclass_ControllerInfo.__constants['USER_CONFIGURED']


class ControllerInfo(metaclass=Metaclass_ControllerInfo):
    """
    Message class 'ControllerInfo'.

    Constants:
      DEFAULT
      USER_CONFIGURED
    """

    __slots__ = [
        '_type',
        '_p_gain',
        '_i_gain',
        '_d_gain',
    ]

    _fields_and_field_types = {
        'type': 'uint8',
        'p_gain': 'double',
        'i_gain': 'double',
        'd_gain': 'double',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.type = kwargs.get('type', int())
        self.p_gain = kwargs.get('p_gain', float())
        self.i_gain = kwargs.get('i_gain', float())
        self.d_gain = kwargs.get('d_gain', float())

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
        if self.type != other.type:
            return False
        if self.p_gain != other.p_gain:
            return False
        if self.i_gain != other.i_gain:
            return False
        if self.d_gain != other.d_gain:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property  # noqa: A003
    def type(self):  # noqa: A003
        """Message field 'type'."""
        return self._type

    @type.setter  # noqa: A003
    def type(self, value):  # noqa: A003
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'type' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'type' field must be an unsigned integer in [0, 255]"
        self._type = value

    @builtins.property
    def p_gain(self):
        """Message field 'p_gain'."""
        return self._p_gain

    @p_gain.setter
    def p_gain(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'p_gain' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'p_gain' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._p_gain = value

    @builtins.property
    def i_gain(self):
        """Message field 'i_gain'."""
        return self._i_gain

    @i_gain.setter
    def i_gain(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'i_gain' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'i_gain' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._i_gain = value

    @builtins.property
    def d_gain(self):
        """Message field 'd_gain'."""
        return self._d_gain

    @d_gain.setter
    def d_gain(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'd_gain' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'd_gain' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._d_gain = value
