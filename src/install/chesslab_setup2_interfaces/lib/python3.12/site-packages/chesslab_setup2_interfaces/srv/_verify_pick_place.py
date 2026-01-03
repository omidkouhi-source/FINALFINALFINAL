# generated from rosidl_generator_py/resource/_idl.py.em
# with input from chesslab_setup2_interfaces:srv/VerifyPickPlace.idl
# generated code does not contain a copyright notice

# This is being done at the module level and not on the instance level to avoid looking
# for the same variable multiple times on each instance. This variable is not supposed to
# change during runtime so it makes sense to only look for it once.
from os import getenv

ros_python_check_fields = getenv('ROS_PYTHON_CHECK_FIELDS', default='')


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_VerifyPickPlace_Request(type):
    """Metaclass of message 'VerifyPickPlace_Request'."""

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
            module = import_type_support('chesslab_setup2_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'chesslab_setup2_interfaces.srv.VerifyPickPlace_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__verify_pick_place__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__verify_pick_place__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__verify_pick_place__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__verify_pick_place__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__verify_pick_place__request

            from geometry_msgs.msg import Point
            if Point.__class__._TYPE_SUPPORT is None:
                Point.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class VerifyPickPlace_Request(metaclass=Metaclass_VerifyPickPlace_Request):
    """Message class 'VerifyPickPlace_Request'."""

    __slots__ = [
        '_piece_aruco_id',
        '_target_position',
        '_tolerance',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'piece_aruco_id': 'int16',
        'target_position': 'geometry_msgs/Point',
        'tolerance': 'float',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int16'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Point'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        if 'check_fields' in kwargs:
            self._check_fields = kwargs['check_fields']
        else:
            self._check_fields = ros_python_check_fields == '1'
        if self._check_fields:
            assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
                'Invalid arguments passed to constructor: %s' % \
                ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.piece_aruco_id = kwargs.get('piece_aruco_id', int())
        from geometry_msgs.msg import Point
        self.target_position = kwargs.get('target_position', Point())
        self.tolerance = kwargs.get('tolerance', float())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.get_fields_and_field_types().keys(), self.SLOT_TYPES):
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
                    if self._check_fields:
                        assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.piece_aruco_id != other.piece_aruco_id:
            return False
        if self.target_position != other.target_position:
            return False
        if self.tolerance != other.tolerance:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def piece_aruco_id(self):
        """Message field 'piece_aruco_id'."""
        return self._piece_aruco_id

    @piece_aruco_id.setter
    def piece_aruco_id(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'piece_aruco_id' field must be of type 'int'"
            assert value >= -32768 and value < 32768, \
                "The 'piece_aruco_id' field must be an integer in [-32768, 32767]"
        self._piece_aruco_id = value

    @builtins.property
    def target_position(self):
        """Message field 'target_position'."""
        return self._target_position

    @target_position.setter
    def target_position(self, value):
        if self._check_fields:
            from geometry_msgs.msg import Point
            assert \
                isinstance(value, Point), \
                "The 'target_position' field must be a sub message of type 'Point'"
        self._target_position = value

    @builtins.property
    def tolerance(self):
        """Message field 'tolerance'."""
        return self._tolerance

    @tolerance.setter
    def tolerance(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'tolerance' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'tolerance' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._tolerance = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import math

# already imported above
# import rosidl_parser.definition


class Metaclass_VerifyPickPlace_Response(type):
    """Metaclass of message 'VerifyPickPlace_Response'."""

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
            module = import_type_support('chesslab_setup2_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'chesslab_setup2_interfaces.srv.VerifyPickPlace_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__verify_pick_place__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__verify_pick_place__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__verify_pick_place__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__verify_pick_place__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__verify_pick_place__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class VerifyPickPlace_Response(metaclass=Metaclass_VerifyPickPlace_Response):
    """Message class 'VerifyPickPlace_Response'."""

    __slots__ = [
        '_success',
        '_piece_at_target',
        '_distance_to_target',
        '_message',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'success': 'boolean',
        'piece_at_target': 'boolean',
        'distance_to_target': 'float',
        'message': 'string',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        if 'check_fields' in kwargs:
            self._check_fields = kwargs['check_fields']
        else:
            self._check_fields = ros_python_check_fields == '1'
        if self._check_fields:
            assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
                'Invalid arguments passed to constructor: %s' % \
                ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.success = kwargs.get('success', bool())
        self.piece_at_target = kwargs.get('piece_at_target', bool())
        self.distance_to_target = kwargs.get('distance_to_target', float())
        self.message = kwargs.get('message', str())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.get_fields_and_field_types().keys(), self.SLOT_TYPES):
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
                    if self._check_fields:
                        assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.success != other.success:
            return False
        if self.piece_at_target != other.piece_at_target:
            return False
        if self.distance_to_target != other.distance_to_target:
            return False
        if self.message != other.message:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def success(self):
        """Message field 'success'."""
        return self._success

    @success.setter
    def success(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'success' field must be of type 'bool'"
        self._success = value

    @builtins.property
    def piece_at_target(self):
        """Message field 'piece_at_target'."""
        return self._piece_at_target

    @piece_at_target.setter
    def piece_at_target(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'piece_at_target' field must be of type 'bool'"
        self._piece_at_target = value

    @builtins.property
    def distance_to_target(self):
        """Message field 'distance_to_target'."""
        return self._distance_to_target

    @distance_to_target.setter
    def distance_to_target(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'distance_to_target' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'distance_to_target' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._distance_to_target = value

    @builtins.property
    def message(self):
        """Message field 'message'."""
        return self._message

    @message.setter
    def message(self, value):
        if self._check_fields:
            assert \
                isinstance(value, str), \
                "The 'message' field must be of type 'str'"
        self._message = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_VerifyPickPlace_Event(type):
    """Metaclass of message 'VerifyPickPlace_Event'."""

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
            module = import_type_support('chesslab_setup2_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'chesslab_setup2_interfaces.srv.VerifyPickPlace_Event')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__verify_pick_place__event
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__verify_pick_place__event
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__verify_pick_place__event
            cls._TYPE_SUPPORT = module.type_support_msg__srv__verify_pick_place__event
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__verify_pick_place__event

            from service_msgs.msg import ServiceEventInfo
            if ServiceEventInfo.__class__._TYPE_SUPPORT is None:
                ServiceEventInfo.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class VerifyPickPlace_Event(metaclass=Metaclass_VerifyPickPlace_Event):
    """Message class 'VerifyPickPlace_Event'."""

    __slots__ = [
        '_info',
        '_request',
        '_response',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'info': 'service_msgs/ServiceEventInfo',
        'request': 'sequence<chesslab_setup2_interfaces/VerifyPickPlace_Request, 1>',
        'response': 'sequence<chesslab_setup2_interfaces/VerifyPickPlace_Response, 1>',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['service_msgs', 'msg'], 'ServiceEventInfo'),  # noqa: E501
        rosidl_parser.definition.BoundedSequence(rosidl_parser.definition.NamespacedType(['chesslab_setup2_interfaces', 'srv'], 'VerifyPickPlace_Request'), 1),  # noqa: E501
        rosidl_parser.definition.BoundedSequence(rosidl_parser.definition.NamespacedType(['chesslab_setup2_interfaces', 'srv'], 'VerifyPickPlace_Response'), 1),  # noqa: E501
    )

    def __init__(self, **kwargs):
        if 'check_fields' in kwargs:
            self._check_fields = kwargs['check_fields']
        else:
            self._check_fields = ros_python_check_fields == '1'
        if self._check_fields:
            assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
                'Invalid arguments passed to constructor: %s' % \
                ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from service_msgs.msg import ServiceEventInfo
        self.info = kwargs.get('info', ServiceEventInfo())
        self.request = kwargs.get('request', [])
        self.response = kwargs.get('response', [])

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.get_fields_and_field_types().keys(), self.SLOT_TYPES):
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
                    if self._check_fields:
                        assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.info != other.info:
            return False
        if self.request != other.request:
            return False
        if self.response != other.response:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def info(self):
        """Message field 'info'."""
        return self._info

    @info.setter
    def info(self, value):
        if self._check_fields:
            from service_msgs.msg import ServiceEventInfo
            assert \
                isinstance(value, ServiceEventInfo), \
                "The 'info' field must be a sub message of type 'ServiceEventInfo'"
        self._info = value

    @builtins.property
    def request(self):
        """Message field 'request'."""
        return self._request

    @request.setter
    def request(self, value):
        if self._check_fields:
            from chesslab_setup2_interfaces.srv import VerifyPickPlace_Request
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
                 len(value) <= 1 and
                 all(isinstance(v, VerifyPickPlace_Request) for v in value) and
                 True), \
                "The 'request' field must be a set or sequence with length <= 1 and each value of type 'VerifyPickPlace_Request'"
        self._request = value

    @builtins.property
    def response(self):
        """Message field 'response'."""
        return self._response

    @response.setter
    def response(self, value):
        if self._check_fields:
            from chesslab_setup2_interfaces.srv import VerifyPickPlace_Response
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
                 len(value) <= 1 and
                 all(isinstance(v, VerifyPickPlace_Response) for v in value) and
                 True), \
                "The 'response' field must be a set or sequence with length <= 1 and each value of type 'VerifyPickPlace_Response'"
        self._response = value


class Metaclass_VerifyPickPlace(type):
    """Metaclass of service 'VerifyPickPlace'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('chesslab_setup2_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'chesslab_setup2_interfaces.srv.VerifyPickPlace')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__verify_pick_place

            from chesslab_setup2_interfaces.srv import _verify_pick_place
            if _verify_pick_place.Metaclass_VerifyPickPlace_Request._TYPE_SUPPORT is None:
                _verify_pick_place.Metaclass_VerifyPickPlace_Request.__import_type_support__()
            if _verify_pick_place.Metaclass_VerifyPickPlace_Response._TYPE_SUPPORT is None:
                _verify_pick_place.Metaclass_VerifyPickPlace_Response.__import_type_support__()
            if _verify_pick_place.Metaclass_VerifyPickPlace_Event._TYPE_SUPPORT is None:
                _verify_pick_place.Metaclass_VerifyPickPlace_Event.__import_type_support__()


class VerifyPickPlace(metaclass=Metaclass_VerifyPickPlace):
    from chesslab_setup2_interfaces.srv._verify_pick_place import VerifyPickPlace_Request as Request
    from chesslab_setup2_interfaces.srv._verify_pick_place import VerifyPickPlace_Response as Response
    from chesslab_setup2_interfaces.srv._verify_pick_place import VerifyPickPlace_Event as Event

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
