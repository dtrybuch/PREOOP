cmake_minimum_required(VERSION 3.7.2)

project (Magiel)
include_directories(include)
add_compile_options(-Wall -g)
set(CMAKE_CXX_FLAGS "-std=c++11") 
set(SOURCES Main.cpp src/Zelazko.cpp  src/Ubranie.cpp src/Spodnie.cpp  src/Koszula.cpp )
add_executable(${PROJECT_NAME} ${SOURCES})