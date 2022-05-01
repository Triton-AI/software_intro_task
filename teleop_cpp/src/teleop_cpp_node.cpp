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

namespace triton_ai
{
namespace teleop_cpp
{

TeleopCppNode::TeleopCppNode(const rclcpp::NodeOptions & options)
:  Node("teleop_cpp", options),
  verbose(true)
{
  print_hello();
}

int32_t TeleopCppNode::print_hello() const
{
  return teleop_cpp::print_hello();
}

}  // namespace teleop_cpp
}  // namespace triton_ai

#include "rclcpp_components/register_node_macro.hpp"

// This acts as an entry point, allowing the component to be
// discoverable when its library is being loaded into a running process
RCLCPP_COMPONENTS_REGISTER_NODE(triton_ai::teleop_cpp::TeleopCppNode)
