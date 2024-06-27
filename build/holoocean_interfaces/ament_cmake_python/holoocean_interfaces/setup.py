from setuptools import find_packages
from setuptools import setup

setup(
    name='holoocean_interfaces',
    version='0.0.0',
    packages=find_packages(
        include=('holoocean_interfaces', 'holoocean_interfaces.*')),
)
