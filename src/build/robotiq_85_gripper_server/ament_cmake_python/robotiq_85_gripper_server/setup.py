from setuptools import find_packages
from setuptools import setup

setup(
    name='robotiq_85_gripper_server',
    version='0.0.0',
    packages=find_packages(
        include=('robotiq_85_gripper_server', 'robotiq_85_gripper_server.*')),
)
