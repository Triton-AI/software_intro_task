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
# limitations under the License

import teleop_py
import rclpy
from rclpy.node import Node
from sensor_msgs.msg import Joy
from teleop_msgs.msg import VehicleControlData
from teleop_msgs.srv import EmergencyStop
import sys

class TeleopPy(Node):
    def __init__(self):
        super().__init__("teleop_py_node")
        self.subscriber_ = self.create_subscription(
            Joy, 
            '/joy', 
            self.listener_callback,
            10)

        self.subscriber_ # prevent unused variable warning

        self.publisher_ = self.create_publisher(VehicleControlData, '/output_teleop', 10)
        timer_period = 0.5  # seconds
        self.timer = self.create_timer(timer_period, self.timer_callback)
        self.throttle = 0.0
        self.steering = 0.0
        self.brake = 0.0
        self.estop = False
        self.sec = 0
        self.nanosec = 0
        self.frame_id = ""

        self.srv = self.create_service(EmergencyStop, '/estop', self.emergencyStop)

        self.declare_parameter('throttle_index', 0)
        self.declare_parameter('steering_index', 0)
        self.declare_parameter('brake_index', 0)
        self.declare_parameter('estop_index', 0)
        self.declare_parameter('device_id', 0)
        self.declare_parameter('device_name', "")
        self.declare_parameter('deadzone', 0.0)
        self.declare_parameter('autorepeat_rate', 0.0)
        self.declare_parameter('sticky_buttons', False)
        self.declare_parameter('coalesce_interval_ms', 0)

        self.throttle_idx = self.get_parameter('throttle_index').get_parameter_value().integer_value
        self.steering_idx = self.get_parameter('steering_index').get_parameter_value().integer_value
        self.brake_idx = self.get_parameter('brake_index').get_parameter_value().integer_value
        self.estop_idx = self.get_parameter('estop_index').get_parameter_value().integer_value

        self.get_logger().info('Parameters set -> throttle_idx: %d, steering_idx: %d, brake_idx: %d, ESTOP_idx: %d' 
            % (self.throttle_idx, self.steering_idx, self.brake_idx, self.estop_idx))

    def listener_callback(self, msg):
        # self.get_logger().info('I got -> throttle: "%f", steering: %f, brake: %f, ESTOP: %s' 
            # % (msg.axes[5], msg.axes[0], msg.axes[5], msg.buttons[5]))

        if msg.buttons[self.estop_idx] == False and self.estop == False:
            self.estop = False
            self.throttle = msg.axes[self.throttle_idx]
            self.steering = msg.axes[self.steering_idx]
            self.brake = msg.axes[self.brake_idx]
        elif msg.buttons[self.estop_idx] == False and self.estop == True:
            self.estop = True
            self.throttle = 0.0
            self.steering = 0.0
            self.brake = sys.float_info.max
        elif msg.buttons[self.estop_idx] == True and self.estop == False:
            self.estop = True
            self.throttle = 0.0
            self.steering = 0.0
            self.brake = sys.float_info.max
        else: # msg.buttons[self.estop_idx] == True and self.estop == True:
            self.estop = False
            self.throttle = msg.axes[self.throttle_idx]
            self.steering = msg.axes[self.steering_idx]
            self.brake = msg.axes[self.brake_idx]

        self.sec = msg.header.stamp.sec
        self.nanosec = msg.header.stamp.nanosec
        self.frame_id = msg.header.frame_id
    
    def timer_callback(self):
        msg = VehicleControlData()
        msg.throttle = self.throttle
        msg.steering = self.steering
        msg.brake = self.brake
        msg.estop = self.estop
        msg.header.stamp.sec = self.sec
        msg.header.stamp.nanosec = self.nanosec
        msg.header.frame_id = self.frame_id

        self.publisher_.publish(msg)
        # self.get_logger().info('Publishing -> throttle: "%f", steering: %f, brake: %f, ESTOP: %d' 
        #     % (msg.throttle, msg.steering, msg.brake, msg.estop))

    def emergencyStop(self,request,response):
        self.get_logger().info('Incoming request -> set_estop: %r' % request.set_estop)

        if request.set_estop == False:
            response.estop_state = False
        else:
            response.estop_state = True

        return response


def main(args=None):
    rclpy.init(args=args)

    teleop_py = TeleopPy()

    rclpy.spin(teleop_py)

    teleop_py.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
    