from setuptools import find_packages
from setuptools import setup

setup(
    name='point_cloud',
    version='0.0.0',
    packages=find_packages(
        include=('point_cloud', 'point_cloud.*')),
)
