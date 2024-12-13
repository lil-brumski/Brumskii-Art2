cmake_minimum_required(VERSION 3.20.3)

project(Brumskii-Art2 VERSION 1.0.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)
set(CMAKE_CXX_EXTENSIONS OFF)
set(CMAKE_BUILD_TYPE Release)  
set(CMAKE_EXE_LINKER_FLAGS_RELEASE "-s")
set(CMAKE_SHARED_LINKER_FLAGS_RELEASE "-s")

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

option(KT "Building for Kotlin" OFF)
option(PY "Building for Python" OFF)
option(CPP "Building for C++" ON)

if(KT)
   message(STATUS "==========Building for Kotlin==========")
   find_package(JNI REQUIRED)
   add_library(Brumskii-Art2 SHARED src/kotlin/Brumskii-Art2-kt.cpp src/cpp/Brumskii-Art2.cpp)                            
   target_include_directories(Brumskii-Art2 PRIVATE include)
   target_link_libraries(Brumskii-Art2 ${JNI_LIBRARIES})

elseif(PY)
   message(STATUS "==========Building for Python==========")
   find_package(Python3 REQUIRED COMPONENTS Interpreter Development)
   add_subdirectory(pybind11)
   pybind11_add_module(BrumskiiArt2 src/python/Brumskii-Art2-py.cpp src/cpp/Brumskii-Art2.cpp)
   target_include_directories(BrumskiiArt2 PRIVATE include)
   target_link_libraries(BrumskiiArt2 PRIVATE Python3::Python)

elseif(CPP)
   message(STATUS "==========Building for C++==========")
   add_executable(Brumskii-Art2 src/cpp/main.cpp src/cpp/Brumskii-Art2.cpp)                            
   target_include_directories(Brumskii-Art2 PRIVATE include)

else()
   message(STATUS "==========Building for C++==========")
   add_executable(Brumskii-Art2 src/cpp/main.cpp src/cpp/Brumskii-Art2.cpp)                            
   target_include_directories(Brumskii-Art2 PRIVATE include)
   target_compile_options(Brumskii-Art2 PRIVATE -Wno-unused-variable)

endif()

   