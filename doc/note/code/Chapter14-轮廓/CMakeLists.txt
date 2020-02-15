# project name
PROJECT(opencv_test)
# requirement of cmake version
cmake_minimum_required(VERSION 3.5)

# set the directory of executable files
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${opencv_test_SOURCE_DIR}/bin)

# find required opencv
find_package(OpenCV REQUIRED)
# directory of opencv headers
include_directories(${OpenCV_INCLUDE_DIRS})
# name of executable file and path of source file
add_executable(opencv_test0 src/example-14-1.cc)
# add_executable(opencv_test1 src/example-14-2.cc)
add_executable(opencv_test2 src/contour.cc)
# directory of opencv library
link_directories(${OpenCV_LIBRARY_DIRS})
# opencv libraries
target_link_libraries(opencv_test0 ${OpenCV_LIBS})
# target_link_libraries(opencv_test1 ${OpenCV_LIBS})
target_link_libraries(opencv_test2 ${OpenCV_LIBS})