# Overview
This is a simple but comprehensive task to prove that you have the ROS2 knowledge needed to move onward in Triton AI. Complete this and you will be qualified to work on projects

To skip this qualification task: petition to be approved by @FrostXue or @sisaha9 on a case-by-case basis, usually given to team members specialized in hardware or high-level algorithm, or have proven record of ROS2 work.

## What you will NOT do in this task:
* Write a complicated navigation algorithm to control your vehicle,
* Be forced to use physical vehicle to demonstrate run, or
* Train and deploy a neural network for perception / navigation.

## What you will DO in this task:
* Write a custom ROS2 node, message, and service for a simple but essential functionary,
* Use productive tools that brings you up to speed in ROS2,
* Advised to use C++, but free to use Python, and
* Have a chance of seeing your code becoming part of the Triton AI projects.

## Resources
### [ROS Galactic Documentation](https://docs.ros.org/en/galactic/index.html)
The official [ROS Galactic documentation](https://docs.ros.org/en/galactic/index.html) is your friend:

* Installation: get ROS Galactic on your machine,
* Tutorials: Entry-level ROS2 tutorials,
* Guides: Advanced guides.

### [ROS Wiki](http://wiki.ros.org/)
Having doubts on a specific package? Use [ROS Wiki](http://wiki.ros.org/) to find it out! Documentations usually have a link to the source repo.

### [ROS2 Tutorials by The Construct](https://youtube.com/playlist?list=PLK0b4e05LnzYNBzqXNm9vFD9YXWp6honJ)
Publicly available ROS2 tutorials on Youtube by Robot Ignite Academy.

Recommended only if you want to see a step-by-step commentary on what's already in [ROS Galactic documentation](https://docs.ros.org/en/galactic/index.html).

# Context of the Task
You are about to happily start to develop an autonomous driving stack in ROS2 for a simulator

Now before you dig into the finest navigation algorithms and perception pipelines, you would love to have a way of manually controlling the vehicle. So you unplug your joystick from your PS5/XBOX, and attempt to drive with it, as well as some other controlling tasks like emergency stop.

Luckily for you, the simulator supports ROS2, and there are ROS2 nodes out there that read joystick values, too. The issue is, the simulator's ROS2 node cannot take that directly. The [joystick message](http://docs.ros.org/en/api/sensor_msgs/html/msg/Joy.html) needs to be converted to another message for the bridge node to understand. So you need to write a node that does this job.

# Full Task

Write two ROS2 packages called `teleop_cpp`/`teleop_py` and `teleop_msgs`. The former contains the conversion node aforementioned, and the latter contains whatever custom message, service and action you deem useful in the task (Hint: you don't need to write custom action, but definitely custom message and service.)

## `teleop_cpp`/`teleop_py`
This package should contain the following components:
- the `teleop_cpp_node_exe`/`teleop_py_node_exe`
- a launch script
- a param file

### The Param File

We want our joystick mapping to be fully customizable, so the param file must include the indices for steering, throttle and braking axes,  and emergency stop button.

The param file must also include the proper configuration for the joystick node, if any. See [what's configurable](https://github.com/ros-drivers/joystick_drivers/tree/ros2/joy#parameters).

### The Launch Script

The launch scripts launches two nodes:
- `joy` from joystick package which will publish the raw joystick message
- `teleop_cpp_node_exe`/`teleop_py_node_exe` which converts the joystick message into a custom one defined by you

Both nodes need to take the param file mentioned above.

### The Node

The  `teleop_cpp_node_exe`/`teleop_py_node_exe` node subscribes to:
`/input_joy` topic which is a [`sensor_msgs/Joy`](http://docs.ros.org/en/api/sensor_msgs/html/msg/Joy.html).

The node publishes to:
`/output_teleop` topic which is a custom message (`VehicleControlData`) to be defined below in `teleop_msgs`

The node accepts the following service:
`/estop` which is a custom service (`EmergencyStop`) to be defined below in `teleop_msgs`.

The work logic of the node:

- Initialize: find the steering, throttle and braking axes, and estop button index from the param file;
- Receive a joystick message;
- Read the steering, throttle and braking axis, as well as estop button state;
- Send the appropriate values on the output topic;
- If the ESTOP button is pressed for once, overwrite all control signal and set the braking to max.
- Press ESTOP again to resume normal control.
- ESTOP can also be triggered by `/estop` service.

## `teleop_msgs`

This package should contain the custom service definition for triggering ESTOP, named `EmergencyStop` and the custom message definition for Control Data, named `VehicleControlData.msg`

The service request contains a boolean variable called `set_estop` which is true when the user wants to trigger ESTOP, or false when the user wants to resume normal operation. 

The service should return a variable called `estop_state` which is a boolean that is true if ESTOP is triggered after the service has been processed, or false if it is not.

The message should contain a `header`, 1 double field called `throttle`, 1 double field called `steering`, 1 double field called `brake` and 1 boolean field called `estop`

# Suggestions

1. When in doubt, google it out.
2. Use tools. Visual Studio Code has ROS, Python and C++ extension that would help you a lot.
3. [`sticky_buttons`](https://github.com/ros-drivers/joystick_drivers/tree/ros2/joy#parameters) is an interesting param for the joystick node that might be useful for implementing ESTOP button.

# Setting up Working Environment

1. It is advised to use an Ubuntu 20.04 system and directly install ROS2 Galactic on it. 
2. You can also use VM on your Windows or Mac machine. Expect a lost of performance.
3. Always source `/opt/ros/galactic/setup.bash` and `your_ros2_ws/install/setup.bash`.

# Step by Step

## The Basics
1. Set up your ROS2 workspace
2. Complete ROS2 tutorials
3. Take a look at ROS2 joystick messages
4. Plug in your joystick and execute `ros2 launch joy joy-launch.py` to launch the joystick node individually. Execute `ros2 topic echo /joy` to make sense of the joystick message.

## Complete the message Package
1. Properly configure `CMakeLists.txt` and `package.xml`.
2. Write your custom ESTOP service.
3. Write your custom VehicleControlData message
4. Build and use `ros2 interface show teleop_msgs/srv/EmergencyStop` and `ros2 interface show teleop_msgs/msg/VehicleControlData` to confirm.
Racer repository
## Complete the Node Package
1. Properly configure `CMakeLists.txt`/`setup.py` and `package.xml` with dependencies
2. Think about the publishers, subscribers and service needed.
3.  Write the node
4. Build. Execute `ros2 topic echo /output_teleop` to verify your node's output.

# Submission Instructions

1. Make a fork of this repository
2. Complete the assignment
3. Make a ros2 bag
4. Make a video recording show the following
   1. Actions
      1. Accelerating
      2. Braking
      3. Steering
      4. Using the joystick to turn on and turn off estop
      5. Calling the service to turn on and turn off estop
   2. The following terminals open
      1. Terminal launching your node
      2. Terminal echoing the raw joy topic
      3. Terminal echoing the output teleop topic
      4. Terminal calling the service
5. Submit a PR to our repo with the ROS2 bag link (from Google Drive), Video and any issues you faced that you think we can change in our repository
6. Have fun!