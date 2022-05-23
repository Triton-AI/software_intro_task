// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__rosidl_typesupport_fastrtps_cpp.hpp.em
// with input from teleop_msgs:msg/VehicleControlData.idl
// generated code does not contain a copyright notice

#ifndef TELEOP_MSGS__MSG__DETAIL__VEHICLE_CONTROL_DATA__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
#define TELEOP_MSGS__MSG__DETAIL__VEHICLE_CONTROL_DATA__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_

#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "teleop_msgs/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
#include "teleop_msgs/msg/detail/vehicle_control_data__struct.hpp"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

#include "fastcdr/Cdr.h"

namespace teleop_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_teleop_msgs
cdr_serialize(
  const teleop_msgs::msg::VehicleControlData & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_teleop_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  teleop_msgs::msg::VehicleControlData & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_teleop_msgs
get_serialized_size(
  const teleop_msgs::msg::VehicleControlData & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_teleop_msgs
max_serialized_size_VehicleControlData(
  bool & full_bounded,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace teleop_msgs

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_teleop_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, teleop_msgs, msg, VehicleControlData)();

#ifdef __cplusplus
}
#endif

#endif  // TELEOP_MSGS__MSG__DETAIL__VEHICLE_CONTROL_DATA__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
