from setuptools import find_packages
from setuptools import setup

setup(
    name='ur_moveit_config',
    version='0.0.0',
    packages=find_packages(
        include=('ur_moveit_config', 'ur_moveit_config.*')),
)
