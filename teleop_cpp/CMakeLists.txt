# Copyright 2022 Siddharth Saha
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#     http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.

cmake_minimum_required(VERSION 3.8)

project(teleop_cpp)

# Default to C99.
if(NOT CMAKE_C_STANDARD)
  set(CMAKE_C_STANDARD 99)
endif()

# Default to C++17.
if(NOT CMAKE_CXX_STANDARD)
  set(CMAKE_CXX_STANDARD 17)
endif()

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# require that dependencies from package.xml be available
find_package(ament_cmake_auto REQUIRED)
ament_auto_find_build_dependencies(REQUIRED
  ${${PROJECT_NAME}_BUILD_DEPENDS}
  ${${PROJECT_NAME}_BUILDTOOL_DEPENDS}
)

set(TELEOP_CPP_LIB_SRC
  src/teleop_cpp.cpp
)

set(TELEOP_CPP_LIB_HEADERS
  include/teleop_cpp/teleop_cpp.hpp
  include/teleop_cpp/visibility_control.hpp
)

# generate library
ament_auto_add_library(${PROJECT_NAME} SHARED
  ${TELEOP_CPP_LIB_SRC}
  ${TELEOP_CPP_LIB_HEADERS}
)

set(TELEOP_CPP_NODE_SRC
  src/teleop_cpp_node.cpp
)

set(TELEOP_CPP_NODE_HEADERS
  include/teleop_cpp/teleop_cpp_node.hpp
)

# generate component node library
ament_auto_add_library(${PROJECT_NAME}_node SHARED
  ${TELEOP_CPP_NODE_SRC}
  ${TELEOP_CPP_NODE_HEADERS}
)

rclcpp_components_register_node(${PROJECT_NAME}_node
  PLUGIN "triton_ai::teleop_cpp::TeleopCppNode"
  EXECUTABLE ${PROJECT_NAME}_node_exe
)

# ament package generation and installing
ament_auto_package(INSTALL_TO_SHARE
  param
  launch
)
