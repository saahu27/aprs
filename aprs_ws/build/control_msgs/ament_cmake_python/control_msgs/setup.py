from setuptools import find_packages
from setuptools import setup

setup(
    name='control_msgs',
    version='5.0.0',
    packages=find_packages(
        include=('control_msgs', 'control_msgs.*')),
)
