from setuptools import find_packages
from setuptools import setup

setup(
    name='action_module',
    version='0.1.0',
    packages=find_packages(
        include=('action_module', 'action_module.*')),
)
