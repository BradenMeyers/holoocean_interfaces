# generated from rosidl_generator_py/resource/_idl.py.em
# with input from holoocean_interfaces:msg/ImagingSonar.idl
# generated code does not contain a copyright notice


# Import statements for member types

# Member 'image_azimuth'
# Member 'image_range'
import array  # noqa: E402, I100

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_ImagingSonar(type):
    """Metaclass of message 'ImagingSonar'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('holoocean_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'holoocean_interfaces.msg.ImagingSonar')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__imaging_sonar
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__imaging_sonar
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__imaging_sonar
            cls._TYPE_SUPPORT = module.type_support_msg__msg__imaging_sonar
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__imaging_sonar

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class ImagingSonar(metaclass=Metaclass_ImagingSonar):
    """Message class 'ImagingSonar'."""

    __slots__ = [
        '_timestamp',
        '_bins_azimuth',
        '_bins_range',
        '_image_azimuth',
        '_image_range',
    ]

    _fields_and_field_types = {
        'timestamp': 'int64',
        'bins_azimuth': 'int32',
        'bins_range': 'int32',
        'image_azimuth': 'sequence<float>',
        'image_range': 'sequence<float>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('float')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('float')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.timestamp = kwargs.get('timestamp', int())
        self.bins_azimuth = kwargs.get('bins_azimuth', int())
        self.bins_range = kwargs.get('bins_range', int())
        self.image_azimuth = array.array('f', kwargs.get('image_azimuth', []))
        self.image_range = array.array('f', kwargs.get('image_range', []))

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
        if self.timestamp != other.timestamp:
            return False
        if self.bins_azimuth != other.bins_azimuth:
            return False
        if self.bins_range != other.bins_range:
            return False
        if self.image_azimuth != other.image_azimuth:
            return False
        if self.image_range != other.image_range:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def timestamp(self):
        """Message field 'timestamp'."""
        return self._timestamp

    @timestamp.setter
    def timestamp(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'timestamp' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'timestamp' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._timestamp = value

    @builtins.property
    def bins_azimuth(self):
        """Message field 'bins_azimuth'."""
        return self._bins_azimuth

    @bins_azimuth.setter
    def bins_azimuth(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'bins_azimuth' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'bins_azimuth' field must be an integer in [-2147483648, 2147483647]"
        self._bins_azimuth = value

    @builtins.property
    def bins_range(self):
        """Message field 'bins_range'."""
        return self._bins_range

    @bins_range.setter
    def bins_range(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'bins_range' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'bins_range' field must be an integer in [-2147483648, 2147483647]"
        self._bins_range = value

    @builtins.property
    def image_azimuth(self):
        """Message field 'image_azimuth'."""
        return self._image_azimuth

    @image_azimuth.setter
    def image_azimuth(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'f', \
                "The 'image_azimuth' array.array() must have the type code of 'f'"
            self._image_azimuth = value
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
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -3.402823466e+38 or val > 3.402823466e+38) or math.isinf(val) for val in value)), \
                "The 'image_azimuth' field must be a set or sequence and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"
        self._image_azimuth = array.array('f', value)

    @builtins.property
    def image_range(self):
        """Message field 'image_range'."""
        return self._image_range

    @image_range.setter
    def image_range(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'f', \
                "The 'image_range' array.array() must have the type code of 'f'"
            self._image_range = value
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
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -3.402823466e+38 or val > 3.402823466e+38) or math.isinf(val) for val in value)), \
                "The 'image_range' field must be a set or sequence and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"
        self._image_range = array.array('f', value)
