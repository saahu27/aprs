from setuptools import find_packages
from setuptools import setup

setup(
    name='fanuc_moveit_config',
    version='0.0.0',
    packages=find_packages(
        include=('fanuc_moveit_config', 'fanuc_moveit_config.*')),
)
