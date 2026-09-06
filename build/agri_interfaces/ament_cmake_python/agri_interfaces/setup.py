from setuptools import find_packages
from setuptools import setup

setup(
  name='agri_interfaces',
  version='0.0.0',
  packages=find_packages(
      include=('agri_interfaces', 'agri_interfaces.*')),
)
