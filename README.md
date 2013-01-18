ros-stereo-vision-tuner
=======================

This package provides an interface for ROS users to test out any stereo correspondence algorithm on a pair of images and then tune its parameters to get the most optimum result. Its purpose is to find out the algorithm that will work best for the condition that is being tested. 

So far, it allows the user to test the algorithms that are available in OpenCV library. Future version will allow the user to add more algorithms(even custom algorithm) in this package.

*Recommended ROS version*: ROS Fuerte

The package requires *OpenCV2, rqt, image_transport* to be installed.
