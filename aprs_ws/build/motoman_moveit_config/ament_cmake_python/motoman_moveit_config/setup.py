from setuptools import find_packages
from setuptools import setup

setup(
    name='motoman_moveit_config',
    version='0.0.0',
    packages=find_packages(
        include=('motoman_moveit_config', 'motoman_moveit_config.*')),
)
