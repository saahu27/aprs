from setuptools import find_packages
from setuptools import setup

setup(
    name='conveyor_interfaces',
    version='0.0.0',
    packages=find_packages(
        include=('conveyor_interfaces', 'conveyor_interfaces.*')),
)
