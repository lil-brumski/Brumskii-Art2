cmake_minimum_required(VERSION 3.20.3)

project(Brumskii-Art2 VERSION 1.0.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

message(STATUS "==========Thanks for testing my work!==========")

message(STATUS "==========Made by David Tamaratare Oghenebrume==========")

if(ANDROID)
   message(STATUS "==========Building for Android platform==========")
elseif(WIN32)
   message(STATUS "=========Building for Windows platform==========")
elseif(UNIX)
   if(CMAKE_SYSTEM_NAME STREQUAL "Linux")
      message(STATUS "==========Building for Linux==========")
   elseif(CMAKE_SYSTEM_NAME STREQUAL "Darwin")
      message(STATUS "==========Building for MacOS==========")
   else()
      message(STATUS "==========Building for Unknown UNIX platform==========") 
    endif()
else()
     message(STATUS "==========Building for unknown platform==========")
endif()

if(CMAKE_CXX_COMPILER_ID STREQUAL "Clang")
    message(STATUS "==========Configuring for Clang==========")
elseif(CMAKE_CXX_COMPILER_ID STREQUAL "GNU")
    message(STATUS "==========Configuring for GNU==========")
else()
    message(STATUS "Configuring for unknown compiler.")
endif()

add_executable(Brumskii-Art2 src/main.cpp src/Brumskii-Art2.cpp)                            

target_include_directories(Brumskii-Art2 PRIVATE include)