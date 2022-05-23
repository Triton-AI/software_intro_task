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

#ifndef TELEOP_CPP__VISIBILITY_CONTROL_HPP_
#define TELEOP_CPP__VISIBILITY_CONTROL_HPP_

////////////////////////////////////////////////////////////////////////////////
#if defined(__WIN32)
  #if defined(TELEOP_CPP_BUILDING_DLL) || defined(TELEOP_CPP_EXPORTS)
    #define TELEOP_CPP_PUBLIC __declspec(dllexport)
    #define TELEOP_CPP_LOCAL
  #else  // defined(TELEOP_CPP_BUILDING_DLL) || defined(TELEOP_CPP_EXPORTS)
    #define TELEOP_CPP_PUBLIC __declspec(dllimport)
    #define TELEOP_CPP_LOCAL
  #endif  // defined(TELEOP_CPP_BUILDING_DLL) || defined(TELEOP_CPP_EXPORTS)
#elif defined(__linux__)
  #define TELEOP_CPP_PUBLIC __attribute__((visibility("default")))
  #define TELEOP_CPP_LOCAL __attribute__((visibility("hidden")))
#elif defined(__APPLE__)
  #define TELEOP_CPP_PUBLIC __attribute__((visibility("default")))
  #define TELEOP_CPP_LOCAL __attribute__((visibility("hidden")))
#else
  #error "Unsupported Build Configuration"
#endif

#endif  // TELEOP_CPP__VISIBILITY_CONTROL_HPP_
