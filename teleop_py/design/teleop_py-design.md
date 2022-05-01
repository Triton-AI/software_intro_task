teleop_py {#teleop_py-package-design}
===========

This is the design document for the `teleop_py` package.


# Purpose / Use cases
The teleop_py package acts as a translater b/w the official ROS2 Joy message and Teleop Interface as well as provide Estop capability

# Design
`Joy` messages will be subscribed to and republished as `VehicleControlData` message at specified frequency with support for Estop via `EmergencyStop` service

## Assumptions / Known limits
- Not all fields of joystick message is used. Only the ones specified in the parameter file

## Inputs / Outputs / API
Input:
* "input_joy" (Topic)
* "estop" (Service)

Output:
* "output_teleop" (Topic)

Parameters:
* `throttle_axis`: Joystick axis to read for throttle
* `steering_axis`: Joystick axis to read for steering
* `braking_axis`: Joystick axis to read for braking
* `estop_button`: Joystick button that can be used by joystick user to trigger estop

## Inner-workings / Algorithms
- Initialize: Find the steering, throttle and braking axes and estop button index from the param file
- Receive a joystick message
- Read the steering, throttle and braking axis as well as estop button state
- Send the apprioriate values on the output topic
- If the ESTOP button is pressed once, overwrite all control signal and set braking to max
- Press ESTOP again to resume normal control
- ESTOP can also be triggered by `/estop` service