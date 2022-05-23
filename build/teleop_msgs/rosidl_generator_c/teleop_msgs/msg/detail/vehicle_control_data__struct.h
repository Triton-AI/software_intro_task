// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from teleop_msgs:msg/VehicleControlData.idl
// generated code does not contain a copyright notice

#ifndef TELEOP_MSGS__MSG__DETAIL__VEHICLE_CONTROL_DATA__STRUCT_H_
#define TELEOP_MSGS__MSG__DETAIL__VEHICLE_CONTROL_DATA__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in msg/VehicleControlData in the package teleop_msgs.
typedef struct teleop_msgs__msg__VehicleControlData
{
  double throttle;
  double steering;
  double brake;
  bool estop;
} teleop_msgs__msg__VehicleControlData;

// Struct for a sequence of teleop_msgs__msg__VehicleControlData.
typedef struct teleop_msgs__msg__VehicleControlData__Sequence
{
  teleop_msgs__msg__VehicleControlData * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} teleop_msgs__msg__VehicleControlData__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TELEOP_MSGS__MSG__DETAIL__VEHICLE_CONTROL_DATA__STRUCT_H_
