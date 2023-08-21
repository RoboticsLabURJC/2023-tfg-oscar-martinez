from setuptools import setup
from setuptools import find_packages

package_name = 'py_gardener'

setup(
    name=package_name,
    version='0.0.1',
    packages=find_packages(exclude=['test']),
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
        ('share/' + package_name + '/launch', ['launch/demo.launch.py']),
        ('share/' + package_name + '/resource', [
            'resource/tree.xml',
        ]),
        ('share/' + package_name + '/py_gardener', [
            'py_gardener/parser.py',
            'py_gardener/translator.py',
        ]),
        ('share/' + package_name + '/actions', [
            'actions/Forward.py',
            'actions/Backward.py',
            'actions/Turn.py',
            'actions/CheckObstacle.py'
        ]),
    ],
    install_requires=['setuptools', 'py_trees', 'py_trees_ros', 'std_msgs', 'geometry_msgs', 'sensor_msgs'],
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
            'translator = py_gardener.translator:translator_main',
        ],
    },
)
