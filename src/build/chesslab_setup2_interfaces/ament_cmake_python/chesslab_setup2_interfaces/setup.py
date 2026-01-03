from setuptools import find_packages
from setuptools import setup

setup(
    name='chesslab_setup2_interfaces',
    version='0.0.0',
    packages=find_packages(
        include=('chesslab_setup2_interfaces', 'chesslab_setup2_interfaces.*')),
)
