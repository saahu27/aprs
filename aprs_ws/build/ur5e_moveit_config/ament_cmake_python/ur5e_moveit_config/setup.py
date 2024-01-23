from setuptools import find_packages
from setuptools import setup

setup(
    name='ur5e_moveit_config',
    version='0.0.0',
    packages=find_packages(
        include=('ur5e_moveit_config', 'ur5e_moveit_config.*')),
)
