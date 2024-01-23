from setuptools import find_packages
from setuptools import setup

setup(
    name='aprs_gazebo',
    version='0.0.0',
    packages=find_packages(
        include=('aprs_gazebo', 'aprs_gazebo.*')),
)
