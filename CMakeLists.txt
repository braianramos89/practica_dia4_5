cmake_minimum_required(VERSION 3.22)
project(Templatecpp)

set(CMAKE_CXX_STANDARD 14)

add_executable(Templatecpp main.cpp Persona.cpp Persona.h Profesor.cpp Profesor.h Alumno.cpp Alumno.h)
