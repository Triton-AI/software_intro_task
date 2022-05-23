// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from teleop_msgs:msg/VehicleControlData.idl
// generated code does not contain a copyright notice

#ifndef TELEOP_MSGS__MSG__DETAIL__VEHICLE_CONTROL_DATA__BUILDER_HPP_
#define TELEOP_MSGS__MSG__DETAIL__VEHICLE_CONTROL_DATA__BUILDER_HPP_

#include "teleop_msgs/msg/detail/vehicle_control_data__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace teleop_msgs
{

namespace msg
{

namespace builder
{

class Init_VehicleControlData_estop
{
public:
  explicit Init_VehicleControlData_estop(::teleop_msgs::msg::VehicleControlData & msg)
  : msg_(msg)
  {}
  ::teleop_msgs::msg::VehicleControlData estop(::teleop_msgs::msg::VehicleControlData::_estop_type arg)
  {
    msg_.estop = std::move(arg);
    return std::move(msg_);
  }

private:
  ::teleop_msgs::msg::VehicleControlData msg_;
};

class Init_VehicleControlData_brake
{
public:
  explicit Init_VehicleControlData_brake(::teleop_msgs::msg::VehicleControlData & msg)
  : msg_(msg)
  {}
  Init_VehicleControlData_estop brake(::teleop_msgs::msg::VehicleControlData::_brake_type arg)
  {
    msg_.brake = std::move(arg);
    return Init_VehicleControlData_estop(msg_);
  }

private:
  ::teleop_msgs::msg::VehicleControlData msg_;
};

class Init_VehicleControlData_steering
{
public:
  explicit Init_VehicleControlData_steering(::teleop_msgs::msg::VehicleControlData & msg)
  : msg_(msg)
  {}
  Init_VehicleControlData_brake steering(::teleop_msgs::msg::VehicleControlData::_steering_type arg)
  {
    msg_.steering = std::move(arg);
    return Init_VehicleControlData_brake(msg_);
  }

private:
  ::teleop_msgs::msg::VehicleControlData msg_;
};

class Init_VehicleControlData_throttle
{
public:
  Init_VehicleControlData_throttle()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_VehicleControlData_steering throttle(::teleop_msgs::msg::VehicleControlData::_throttle_type arg)
  {
    msg_.throttle = std::move(arg);
    return Init_VehicleControlData_steering(msg_);
  }

private:
  ::teleop_msgs::msg::VehicleControlData msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::teleop_msgs::msg::VehicleControlData>()
{
  return teleop_msgs::msg::builder::Init_VehicleControlData_throttle();
}

}  // namespace teleop_msgs

#endif  // TELEOP_MSGS__MSG__DETAIL__VEHICLE_CONTROL_DATA__BUILDER_HPP_
