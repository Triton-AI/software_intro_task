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

import rclpy
from rclpy.node import Node
from sensor_msgs.msg import Joy
from teleop_msgs.msg import VehicleControlData
from teleop_msgs.srv import EmergencyStop

class TeleopPy(Node):
    def __init__(self):
        super().__init__("teleop_py_node")
        self.declare_parameters(
            namespace = '',
            parameters=[
                ('steering', 0),
                ('throttle', 0),
                ('braking', 0),
                ('estop', 0)
            ]
        )
        self.publisher_ = self.create_publisher(VehicleControlData, "/output_teleop", 10)
#        self.print_hello()
        self.subscription = self.create_subscription(Joy, '/joy', self.listener_callback, 10)
#    def print_hello(self):
#        teleop_py.print_hello()
        self.srv = self.create_service(EmergencyStop, "/estop", self.emergency_stop_callback)
        self.estop_call = False

    def listener_callback(self, msg):
        throttle = msg.axes[self.get_parameter('throttle').value]
        steering = msg.axes[self.get_parameter('steering').value]
        brake = msg.axes[self.get_parameter('braking').value]
        estop = bool(msg.buttons[self.get_parameter('estop').value])
        vcd = VehicleControlData()
        if estop or self.estop_call:
            vcd.brake = -1.0
        else:
            vcd.brake = brake
            vcd.throttle = throttle
            vcd.steering = steering
        vcd.estop = estop or self.estop_call
        self.publisher_.publish(vcd)

    def emergency_stop_callback(self, request, response):
        response.estop_state = request.set_estop
        self.estop_call = request.set_estop
        return response

def main(args=None):
    rclpy.init(args=args)
    teleop_py = TeleopPy()
    rclpy.spin(teleop_py)
    teleop.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
    
