// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from teleop_msgs:srv/EmergencyStop.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "teleop_msgs/srv/detail/emergency_stop__rosidl_typesupport_introspection_c.h"
#include "teleop_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "teleop_msgs/srv/detail/emergency_stop__functions.h"
#include "teleop_msgs/srv/detail/emergency_stop__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void EmergencyStop_Request__rosidl_typesupport_introspection_c__EmergencyStop_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  teleop_msgs__srv__EmergencyStop_Request__init(message_memory);
}

void EmergencyStop_Request__rosidl_typesupport_introspection_c__EmergencyStop_Request_fini_function(void * message_memory)
{
  teleop_msgs__srv__EmergencyStop_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember EmergencyStop_Request__rosidl_typesupport_introspection_c__EmergencyStop_Request_message_member_array[1] = {
  {
    "set_estop",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(teleop_msgs__srv__EmergencyStop_Request, set_estop),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers EmergencyStop_Request__rosidl_typesupport_introspection_c__EmergencyStop_Request_message_members = {
  "teleop_msgs__srv",  // message namespace
  "EmergencyStop_Request",  // message name
  1,  // number of fields
  sizeof(teleop_msgs__srv__EmergencyStop_Request),
  EmergencyStop_Request__rosidl_typesupport_introspection_c__EmergencyStop_Request_message_member_array,  // message members
  EmergencyStop_Request__rosidl_typesupport_introspection_c__EmergencyStop_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  EmergencyStop_Request__rosidl_typesupport_introspection_c__EmergencyStop_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t EmergencyStop_Request__rosidl_typesupport_introspection_c__EmergencyStop_Request_message_type_support_handle = {
  0,
  &EmergencyStop_Request__rosidl_typesupport_introspection_c__EmergencyStop_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_teleop_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, teleop_msgs, srv, EmergencyStop_Request)() {
  if (!EmergencyStop_Request__rosidl_typesupport_introspection_c__EmergencyStop_Request_message_type_support_handle.typesupport_identifier) {
    EmergencyStop_Request__rosidl_typesupport_introspection_c__EmergencyStop_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &EmergencyStop_Request__rosidl_typesupport_introspection_c__EmergencyStop_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "teleop_msgs/srv/detail/emergency_stop__rosidl_typesupport_introspection_c.h"
// already included above
// #include "teleop_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "teleop_msgs/srv/detail/emergency_stop__functions.h"
// already included above
// #include "teleop_msgs/srv/detail/emergency_stop__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void EmergencyStop_Response__rosidl_typesupport_introspection_c__EmergencyStop_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  teleop_msgs__srv__EmergencyStop_Response__init(message_memory);
}

void EmergencyStop_Response__rosidl_typesupport_introspection_c__EmergencyStop_Response_fini_function(void * message_memory)
{
  teleop_msgs__srv__EmergencyStop_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember EmergencyStop_Response__rosidl_typesupport_introspection_c__EmergencyStop_Response_message_member_array[1] = {
  {
    "estop_state",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(teleop_msgs__srv__EmergencyStop_Response, estop_state),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers EmergencyStop_Response__rosidl_typesupport_introspection_c__EmergencyStop_Response_message_members = {
  "teleop_msgs__srv",  // message namespace
  "EmergencyStop_Response",  // message name
  1,  // number of fields
  sizeof(teleop_msgs__srv__EmergencyStop_Response),
  EmergencyStop_Response__rosidl_typesupport_introspection_c__EmergencyStop_Response_message_member_array,  // message members
  EmergencyStop_Response__rosidl_typesupport_introspection_c__EmergencyStop_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  EmergencyStop_Response__rosidl_typesupport_introspection_c__EmergencyStop_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t EmergencyStop_Response__rosidl_typesupport_introspection_c__EmergencyStop_Response_message_type_support_handle = {
  0,
  &EmergencyStop_Response__rosidl_typesupport_introspection_c__EmergencyStop_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_teleop_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, teleop_msgs, srv, EmergencyStop_Response)() {
  if (!EmergencyStop_Response__rosidl_typesupport_introspection_c__EmergencyStop_Response_message_type_support_handle.typesupport_identifier) {
    EmergencyStop_Response__rosidl_typesupport_introspection_c__EmergencyStop_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &EmergencyStop_Response__rosidl_typesupport_introspection_c__EmergencyStop_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "teleop_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "teleop_msgs/srv/detail/emergency_stop__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers teleop_msgs__srv__detail__emergency_stop__rosidl_typesupport_introspection_c__EmergencyStop_service_members = {
  "teleop_msgs__srv",  // service namespace
  "EmergencyStop",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // teleop_msgs__srv__detail__emergency_stop__rosidl_typesupport_introspection_c__EmergencyStop_Request_message_type_support_handle,
  NULL  // response message
  // teleop_msgs__srv__detail__emergency_stop__rosidl_typesupport_introspection_c__EmergencyStop_Response_message_type_support_handle
};

static rosidl_service_type_support_t teleop_msgs__srv__detail__emergency_stop__rosidl_typesupport_introspection_c__EmergencyStop_service_type_support_handle = {
  0,
  &teleop_msgs__srv__detail__emergency_stop__rosidl_typesupport_introspection_c__EmergencyStop_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, teleop_msgs, srv, EmergencyStop_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, teleop_msgs, srv, EmergencyStop_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_teleop_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, teleop_msgs, srv, EmergencyStop)() {
  if (!teleop_msgs__srv__detail__emergency_stop__rosidl_typesupport_introspection_c__EmergencyStop_service_type_support_handle.typesupport_identifier) {
    teleop_msgs__srv__detail__emergency_stop__rosidl_typesupport_introspection_c__EmergencyStop_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)teleop_msgs__srv__detail__emergency_stop__rosidl_typesupport_introspection_c__EmergencyStop_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, teleop_msgs, srv, EmergencyStop_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, teleop_msgs, srv, EmergencyStop_Response)()->data;
  }

  return &teleop_msgs__srv__detail__emergency_stop__rosidl_typesupport_introspection_c__EmergencyStop_service_type_support_handle;
}
