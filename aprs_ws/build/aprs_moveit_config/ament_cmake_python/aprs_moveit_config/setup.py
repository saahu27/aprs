from setuptools import find_packages
from setuptools import setup

setup(
    name='aprs_moveit_config',
    version='0.0.0',
    packages=find_packages(
        include=('aprs_moveit_config', 'aprs_moveit_config.*')),
)
