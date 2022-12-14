cmake_minimum_required(VERSION 3.24)
project(class_object)

set(CMAKE_CXX_STANDARD 17)

add_executable(class_object main.cpp student_list.cpp student_list.h student.cpp student.h ui.cpp ui.h)
