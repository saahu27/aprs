from setuptools import find_packages
from setuptools import setup

setup(
    name='gear_place',
    version='0.0.0',
    packages=find_packages(
        include=('gear_place', 'gear_place.*')),
)
