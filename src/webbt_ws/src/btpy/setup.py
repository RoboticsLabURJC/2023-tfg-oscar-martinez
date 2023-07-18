from setuptools import setup
from setuptools import find_packages

package_name = 'btpy'

setup(
    name=package_name,
    version='0.0.1',
    packages=find_packages(exclude=['test']),
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
        ('share/' + package_name + '/launch', ['launch/demo.launch.py'])
    ],
    install_requires=['setuptools', 'py_trees', 'py_trees_ros'],
    zip_safe=True,
    author='Óscar Martínez',
    author_email='oscar.robotics@tutanota.com',
    maintainer='Your Name',
    maintainer_email='oscar.robotics@tutanota.com',
    keywords=['ROS2', 'py_trees'],
    classifiers=[
        'Intended Audience :: Developers',
        'License :: OSI Approved :: Apache Software License',
        'Programming Language :: Python',
        'Topic :: Software Development',
    ],
    description='A execution engine BT.cpp trees in python',
    license='BSD',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            'tree_batter_check = btpy.translator:tutorial_main',
        ],
    },
)