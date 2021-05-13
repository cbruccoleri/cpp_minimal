# Minimalistic CMakeLists.txt for simple applications with no frills.
#
# Author: Christian Bruccoleri
cmake_minimum_required(VERSION 3.11...3.20)

# [TODO: Change project name here]
project (myproject VERSION 1.0
        DESCRIPTION "A Template CMakeLists.txt for simple C++ console applications"
        LANGUAGES CXX)

# Note: it is assumed that you want to build a target having the same name as 
# the project. Replace ${PROJECT_NAME} with the name you want if needed.
set(TARGET_NAME ${PROJECT_NAME})

# Set C++ Standard compliance options. As is, it sets C++ 17 as the standard: change it as needed.
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

# Change the target name and files below as needed.
# [TODO: change source files here]
add_executable(${TARGET_NAME} MyProject.cpp MyProject.h)

# Example: Find the libraries on your system, if needed.
# find_library(BOOST)

# The following are often needed even for smaller projects.
# If you have custom header files, they could be in a `include` folder.
# target_include_directories(MyProject include)

# Additional libraries needed to link your executable/library.
# target_link_libraries(${TARGET_NAME} Boost m)

# Other often needed directives:
# [Compile Options](https://cmake.org/cmake/help/latest/command/target_compile_options.html)
# target_compile_options(${TARGET_NAME} PRIVATE options)

# [Link Libraries](https://cmake.org/cmake/help/latest/command/target_link_libraries.html)
# target_link_libraries(${TARGET_NAME} PUBLIC libraries)

# This is only ouseful on some MSVC versions and if filesystem library is needed. 
# No longer needed for latest MSVC.
#set_property(TARGET MyProject PUBLIC _SILENCE_EXPERIMENTAL_FILESYSTEM_DEPRECATION_WARNING)

# Here you can customize a few things. Consider having all warnings on by default.
if(MSVC) # Visual Studio on Windows
    target_compile_options(${TARGET_NAME} PRIVATE /W4 /WX)
else() # most other platforms
    # Consider adding also: -Werror
    target_compile_options(${TARGET_NAME} PRIVATE -Wall -Wextra -pedantic)
endif()

# Other things you may want to setup are:
# 	- Conan, to download other libraries and dependencies
# 	- CTest, fuzzer
# 	- Static checkers
