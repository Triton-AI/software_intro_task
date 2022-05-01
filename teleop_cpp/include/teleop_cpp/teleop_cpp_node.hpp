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
// limitations under the License

/// \copyright Copyright 2022 Siddharth Saha
/// \file
/// \brief This file defines the teleop_cpp_node class.

#ifndef TELEOP_CPP__TELEOP_CPP_NODE_HPP_
#define TELEOP_CPP__TELEOP_CPP_NODE_HPP_

#include <teleop_cpp/teleop_cpp.hpp>

#include <rclcpp/rclcpp.hpp>

namespace triton_ai
{
namespace teleop_cpp
{

/// \class TeleopCppNode
/// \brief ROS 2 Node for hello world.
class TeleopCppNode : public rclcpp::Node
{
public:
  /// \brief default constructor, starts driver
  /// \throw runtime error if failed to start threads or configure driver
  explicit TeleopCppNode(const rclcpp::NodeOptions & options);

  /// \brief print hello
  /// return 0 if successful.
  int32_t print_hello() const;

private:
  bool verbose;  ///< whether to use verbose output or not.
};
}  // namespace teleop_cpp
}  // namespace triton_ai

#endif  // TELEOP_CPP__TELEOP_CPP_NODE_HPP_
