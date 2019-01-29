cmake_minimum_required(VERSION 3.7)

project(GradeBook)

include_directories(include)

add_compile_options(-g -Wall)

add_executable(GradeBook main.cpp  src/Grade.cpp src/GradeBook.cpp)