cmake_minimum_required(VERSION 2.4.6)
include($ENV{ROS_ROOT}/core/rosbuild/rosbuild.cmake)

# Set the build type.  Options are:
#  Coverage       : w/ debug symbols, w/o optimization, w/ code-coverage
#  Debug          : w/ debug symbols, w/o optimization
#  Release        : w/o debug symbols, w/ optimization
#  RelWithDebInfo : w/ debug symbols, w/ optimization
#  MinSizeRel     : w/o debug symbols, w/ optimization, stripped binaries
#set(ROS_BUILD_TYPE RelWithDebInfoa)

rosbuild_init()

FIND_PACKAGE(Qt4 REQUIRED)
SET(image_depth_ui_SOURCES src/imagedepth.cpp src/main.cpp src/myqslider.cpp src/imagedepthprocessor.cpp src/bmvariables.cpp src/sgbmvariables.cpp src/varvariables.cpp)
SET(image_depth_ui_HEADERS src/imagedepth.h src/ui_imagedepth.h src/myqslider.h src/ui_myqslider.h src/imagedepthprocessor.h src/bmvariables.h src/sgbmvariables.h src/varvariables.h)
SET(image_depth_ui_FORMS src/imagedepth.ui src/myqslider.ui)
QT4_WRAP_UI(image_depth_ui_FORMS_HEADERS ${image_depth_ui_FORMS})
QT4_WRAP_CPP(image_depth_ui_HEADERS_MOC ${image_depth_ui_HEADERS})
INCLUDE(${QT_USE_FILE})
ADD_DEFINITIONS(${QT_DEFINITIONS})
INCLUDE_DIRECTORIES( ${PROJECT_SOURCE_DIR}/bin )

#set the default path for built executables to the "bin" directory
set(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin)
#set the default path for built libraries to the "lib" directory
set(LIBRARY_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/lib)

#uncomment if you have defined messages
#rosbuild_genmsg()
#uncomment if you have defined services
#rosbuild_gensrv()

#common commands for building c++ executables and libraries
#rosbuild_add_library(${PROJECT_NAME} src/example.cpp)
#target_link_libraries(${PROJECT_NAME} another_library)
#rosbuild_add_boost_directories()
#rosbuild_link_boost(${PROJECT_NAME} thread)

rosbuild_add_executable(image_depth_ui src/main.cpp ${image_depth_ui_FORMS_HEADERS} ${image_depth_ui_SOURCES} ${image_depth_ui_HEADERS_MOC} )

target_link_libraries(image_depth_ui ${QT_LIBRARIES})

#target_link_libraries(example ${PROJECT_NAME})



