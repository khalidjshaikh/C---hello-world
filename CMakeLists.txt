cmake_minimum_required(VERSION 3.10)
project(MyApp VERSION 1.0.0)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(myapp main.cpp)

install(TARGETS myapp DESTINATION bin)
