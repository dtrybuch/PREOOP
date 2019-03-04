cmake_minimum_required(VERSION 3.7.2)

project (SmartGeo)
include_directories(include)
add_compile_options(-Wall -g)
set(CMAKE_CXX_FLAGS "-std=c++11") 
set(SOURCES Sprytny.cpp src/Point2D.cpp src/Point2DAverage.cpp src/Point2DSmartPtr.cpp)
add_executable(${PROJECT_NAME} ${SOURCES})