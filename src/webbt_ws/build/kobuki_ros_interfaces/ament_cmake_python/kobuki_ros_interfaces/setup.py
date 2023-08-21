from setuptools import find_packages
from setuptools import setup

setup(
    name='kobuki_ros_interfaces',
    version='1.0.0',
    packages=find_packages(
        include=('kobuki_ros_interfaces', 'kobuki_ros_interfaces.*')),
)
