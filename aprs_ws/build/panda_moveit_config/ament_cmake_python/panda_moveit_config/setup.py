from setuptools import find_packages
from setuptools import setup

setup(
    name='panda_moveit_config',
    version='3.0.0',
    packages=find_packages(
        include=('panda_moveit_config', 'panda_moveit_config.*')),
)
