cmake_minimum_required(VERSION 3.7.2)

project (Biblos)

include_directories(include)

add_compile_options(-Wall -g)

set(CMAKE_CXX_FLAGS "-std=c++11") 

set(SOURCES Main.cpp src/Book.cpp )

add_executable(${PROJECT_NAME} ${SOURCES})