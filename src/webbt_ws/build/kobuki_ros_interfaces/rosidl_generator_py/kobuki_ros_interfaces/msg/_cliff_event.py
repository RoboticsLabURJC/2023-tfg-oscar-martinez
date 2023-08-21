# generated from rosidl_generator_py/resource/_idl.py.em
# with input from kobuki_ros_interfaces:msg/CliffEvent.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_CliffEvent(type):
    """Metaclass of message 'CliffEvent'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'LEFT': 0,
        'CENTER': 1,
        'RIGHT': 2,
        'FLOOR': 0,
        'CLIFF': 1,
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
                'kobuki_ros_interfaces.msg.CliffEvent')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__cliff_event
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__cliff_event
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__cliff_event
            cls._TYPE_SUPPORT = module.type_support_msg__msg__cliff_event
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__cliff_event

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'LEFT': cls.__constants['LEFT'],
            'CENTER': cls.__constants['CENTER'],
            'RIGHT': cls.__constants['RIGHT'],
            'FLOOR': cls.__constants['FLOOR'],
            'CLIFF': cls.__constants['CLIFF'],
        }

    @property
    def LEFT(self):
        """Message constant 'LEFT'."""
        return Metaclass_CliffEvent.__constants['LEFT']

    @property
    def CENTER(self):
        """Message constant 'CENTER'."""
        return Metaclass_CliffEvent.__constants['CENTER']

    @property
    def RIGHT(self):
        """Message constant 'RIGHT'."""
        return Metaclass_CliffEvent.__constants['RIGHT']

    @property
    def FLOOR(self):
        """Message constant 'FLOOR'."""
        return Metaclass_CliffEvent.__constants['FLOOR']

    @property
    def CLIFF(self):
        """Message constant 'CLIFF'."""
        return Metaclass_CliffEvent.__constants['CLIFF']


class CliffEvent(metaclass=Metaclass_CliffEvent):
    """
    Message class 'CliffEvent'.

    Constants:
      LEFT
      CENTER
      RIGHT
      FLOOR
      CLIFF
    """

    __slots__ = [
        '_sensor',
        '_state',
        '_bottom',
    ]

    _fields_and_field_types = {
        'sensor': 'uint8',
        'state': 'uint8',
        'bottom': 'uint16',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.sensor = kwargs.get('sensor', int())
        self.state = kwargs.get('state', int())
        self.bottom = kwargs.get('bottom', int())

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
        if self.sensor != other.sensor:
            return False
        if self.state != other.state:
            return False
        if self.bottom != other.bottom:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def sensor(self):
        """Message field 'sensor'."""
        return self._sensor

    @sensor.setter
    def sensor(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'sensor' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'sensor' field must be an unsigned integer in [0, 255]"
        self._sensor = value

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

    @builtins.property
    def bottom(self):
        """Message field 'bottom'."""
        return self._bottom

    @bottom.setter
    def bottom(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'bottom' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'bottom' field must be an unsigned integer in [0, 65535]"
        self._bottom = value
