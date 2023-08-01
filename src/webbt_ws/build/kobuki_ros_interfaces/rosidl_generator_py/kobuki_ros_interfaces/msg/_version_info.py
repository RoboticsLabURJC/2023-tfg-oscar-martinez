# generated from rosidl_generator_py/resource/_idl.py.em
# with input from kobuki_ros_interfaces:msg/VersionInfo.idl
# generated code does not contain a copyright notice


# Import statements for member types

# Member 'udid'
import array  # noqa: E402, I100

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_VersionInfo(type):
    """Metaclass of message 'VersionInfo'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'SMOOTH_MOVE_START': 1,
        'GYROSCOPE_3D_DATA': 2,
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
                'kobuki_ros_interfaces.msg.VersionInfo')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__version_info
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__version_info
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__version_info
            cls._TYPE_SUPPORT = module.type_support_msg__msg__version_info
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__version_info

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'SMOOTH_MOVE_START': cls.__constants['SMOOTH_MOVE_START'],
            'GYROSCOPE_3D_DATA': cls.__constants['GYROSCOPE_3D_DATA'],
        }

    @property
    def SMOOTH_MOVE_START(self):
        """Message constant 'SMOOTH_MOVE_START'."""
        return Metaclass_VersionInfo.__constants['SMOOTH_MOVE_START']

    @property
    def GYROSCOPE_3D_DATA(self):
        """Message constant 'GYROSCOPE_3D_DATA'."""
        return Metaclass_VersionInfo.__constants['GYROSCOPE_3D_DATA']


class VersionInfo(metaclass=Metaclass_VersionInfo):
    """
    Message class 'VersionInfo'.

    Constants:
      SMOOTH_MOVE_START
      GYROSCOPE_3D_DATA
    """

    __slots__ = [
        '_hardware',
        '_firmware',
        '_software',
        '_udid',
        '_features',
    ]

    _fields_and_field_types = {
        'hardware': 'string',
        'firmware': 'string',
        'software': 'string',
        'udid': 'sequence<uint32>',
        'features': 'uint64',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('uint32')),  # noqa: E501
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.hardware = kwargs.get('hardware', str())
        self.firmware = kwargs.get('firmware', str())
        self.software = kwargs.get('software', str())
        self.udid = array.array('I', kwargs.get('udid', []))
        self.features = kwargs.get('features', int())

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
        if self.hardware != other.hardware:
            return False
        if self.firmware != other.firmware:
            return False
        if self.software != other.software:
            return False
        if self.udid != other.udid:
            return False
        if self.features != other.features:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def hardware(self):
        """Message field 'hardware'."""
        return self._hardware

    @hardware.setter
    def hardware(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'hardware' field must be of type 'str'"
        self._hardware = value

    @builtins.property
    def firmware(self):
        """Message field 'firmware'."""
        return self._firmware

    @firmware.setter
    def firmware(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'firmware' field must be of type 'str'"
        self._firmware = value

    @builtins.property
    def software(self):
        """Message field 'software'."""
        return self._software

    @software.setter
    def software(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'software' field must be of type 'str'"
        self._software = value

    @builtins.property
    def udid(self):
        """Message field 'udid'."""
        return self._udid

    @udid.setter
    def udid(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'I', \
                "The 'udid' array.array() must have the type code of 'I'"
            self._udid = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, int) for v in value) and
                 all(val >= 0 and val < 4294967296 for val in value)), \
                "The 'udid' field must be a set or sequence and each value of type 'int' and each unsigned integer in [0, 4294967295]"
        self._udid = array.array('I', value)

    @builtins.property
    def features(self):
        """Message field 'features'."""
        return self._features

    @features.setter
    def features(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'features' field must be of type 'int'"
            assert value >= 0 and value < 18446744073709551616, \
                "The 'features' field must be an unsigned integer in [0, 18446744073709551615]"
        self._features = value
