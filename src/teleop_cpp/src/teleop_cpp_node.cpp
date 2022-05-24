// Copyright 2022 Siddharth Saha
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#include "teleop_cpp/teleop_cpp_node.hpp"



using std::placeholders::_1;

namespace triton_ai
{
namespace teleop_cpp
{

TeleopCppNode::TeleopCppNode(const rclcpp::NodeOptions & options)
:  Node("teleop_cpp", options),
  verbose(true)
{

  this->declare_parameter<std::int32_t>("throttle_axis",0);
  this->declare_parameter<std::int32_t>("steering_axis",0);
  this->declare_parameter<std::int32_t>("braking_axis",0);
  this->declare_parameter<std::int32_t>("estop_button",0);
  // Custom Cntroll Mapping

  
  throttle_ax = this->get_parameter("throttle_axis").as_int();
  steering_ax = this->get_parameter("steering_axis").as_int();
  braking_ax = this->get_parameter("braking_axis").as_int();
  estop_bt = this->get_parameter("estop_button").as_int();

  // Joy Stick control Setting 
  // I don't have to worry?

  subscription_ = this->create_subscription<sensor_msgs::msg::Joy>("/joy", 10, std::bind(&TeleopCppNode::topic_callback, this, _1));
  publisher_ = this->create_publisher<teleop_msgs::msg::VehicleControlData>("/output_teleop",10);
}


void TeleopCppNode::topic_callback(const sensor_msgs::msg::Joy::SharedPtr msg){
  auto message = teleop_msgs::msg::VehicleControlData();
  message.estop = msg->buttons[estop_bt];
  if (message.estop){
    message.brake = 2.0;   //override
    message.throttle = 0.0;
    message.steering= 0.0;
  }
  else{
    message.throttle = (msg->axes[throttle_ax])* -1 + 1; // throttle range from 0[1] to 2[-1]
    message.brake = (msg->axes[braking_ax]) * -1 + 1;  // break range from 0[1] to 2[-1]
    message.steering = msg->axes[steering_ax];
  }
  publisher_->publish(message);
}


// void emergency_stop(const std::shared_ptr<teleop_msgs::srv::EmergencyStop_Request> request,
// std::shared_ptr<teleop_msgs::srv::EmergencyStop_Response> response){
//   response->estop_state =  request->set_estop;
//   if (response->estop_state){
//     auto joy_pub = create_publisher<sensor_msgs::msg::Joy>("/input_joy",10);
//     auto message = sensor_msgs::msg::Joy();
//     message.buttons[estop_bt] = 1;
//     joy_pub->publish(message);
//   }
// }

int main(int argc, char* argv[]){
  rclcpp::init(argc, argv);
  rclcpp::NodeOptions options;
  auto node = std::make_shared<TeleopCppNode>(options);
  //rclcpp::Service<teleop_msgs::srv::EmergencyStop>::SharedPtr service = node->create_service<teleop_msgs::srv::EmergencyStop>("emergency_stop",&TeleopCppNode::emergency_stop);
  rclcpp::spin(node);
  rclcpp::shutdown();
  return 0;
}


}  // namespace teleop_cpp
}  // namespace triton_ai

#include "rclcpp_components/register_node_macro.hpp"

// This acts as an entry point, allowing the component to be
// discoverable when its library is being loaded into a running process
RCLCPP_COMPONENTS_REGISTER_NODE(triton_ai::teleop_cpp::TeleopCppNode)
