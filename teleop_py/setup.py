from setuptools import setup
import os
from glob import glob

package_name = 'teleop_py'

setup(
    name=package_name,
    version='1.0.0',
    packages=[package_name],
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
        (os.path.join('share', package_name, "launch"), glob('launch/*.launch.py')),
        (os.path.join('share', package_name, "param"), glob('param/*.yaml'))
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='sisaha',
    maintainer_email='sisahawork@gmail.com',
    description='Python3 Package containing code to convert joystick messages and add ESTOP capability',
    license='Apache 2.0',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            'teleop_py_node_exe = teleop_py.teleop_py_node:main'
        ],
    },
)