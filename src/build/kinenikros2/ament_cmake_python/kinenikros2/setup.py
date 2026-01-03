from setuptools import find_packages
from setuptools import setup

setup(
    name='kinenikros2',
    version='0.0.1',
    packages=find_packages(
        include=('kinenikros2', 'kinenikros2.*')),
)
