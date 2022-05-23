// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from teleop_msgs:srv/EmergencyStop.idl
// generated code does not contain a copyright notice

#ifndef TELEOP_MSGS__SRV__DETAIL__EMERGENCY_STOP__BUILDER_HPP_
#define TELEOP_MSGS__SRV__DETAIL__EMERGENCY_STOP__BUILDER_HPP_

#include "teleop_msgs/srv/detail/emergency_stop__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace teleop_msgs
{

namespace srv
{

namespace builder
{

class Init_EmergencyStop_Request_set_estop
{
public:
  Init_EmergencyStop_Request_set_estop()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::teleop_msgs::srv::EmergencyStop_Request set_estop(::teleop_msgs::srv::EmergencyStop_Request::_set_estop_type arg)
  {
    msg_.set_estop = std::move(arg);
    return std::move(msg_);
  }

private:
  ::teleop_msgs::srv::EmergencyStop_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::teleop_msgs::srv::EmergencyStop_Request>()
{
  return teleop_msgs::srv::builder::Init_EmergencyStop_Request_set_estop();
}

}  // namespace teleop_msgs


namespace teleop_msgs
{

namespace srv
{

namespace builder
{

class Init_EmergencyStop_Response_estop_state
{
public:
  Init_EmergencyStop_Response_estop_state()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::teleop_msgs::srv::EmergencyStop_Response estop_state(::teleop_msgs::srv::EmergencyStop_Response::_estop_state_type arg)
  {
    msg_.estop_state = std::move(arg);
    return std::move(msg_);
  }

private:
  ::teleop_msgs::srv::EmergencyStop_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::teleop_msgs::srv::EmergencyStop_Response>()
{
  return teleop_msgs::srv::builder::Init_EmergencyStop_Response_estop_state();
}

}  // namespace teleop_msgs

#endif  // TELEOP_MSGS__SRV__DETAIL__EMERGENCY_STOP__BUILDER_HPP_
