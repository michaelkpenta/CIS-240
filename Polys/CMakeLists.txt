cmake_minimum_required(VERSION 3.16)
project(Polys LANGUAGES CXX)
set(CMAKE_CXX_STANDARD 17)
add_executable(Polys main.cpp Term.cpp Polynomial.cpp)
