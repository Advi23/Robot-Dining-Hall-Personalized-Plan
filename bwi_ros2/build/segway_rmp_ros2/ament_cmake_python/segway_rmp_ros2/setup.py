from setuptools import find_packages
from setuptools import setup

setup(
    name='segway_rmp_ros2',
    version='0.0.0',
    packages=find_packages(
        include=('segway_rmp_ros2', 'segway_rmp_ros2.*')),
)
