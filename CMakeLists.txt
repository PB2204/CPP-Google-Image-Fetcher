cmake_minimum_required(VERSION 3.12)
project(my_image_fetcher_library)

# Set the path to the C++ compiler (g++)
set(CMAKE_CXX_COMPILER "C:/MinGW/bin/g++.exe")

# Set the path to the C compiler (gcc)
set(CMAKE_C_COMPILER "C:/MinGW/bin/c++.exe")

# Add subdirectories for library, tests, and examples
add_subdirectory(src)
add_subdirectory(test)
add_subdirectory(examples)

# Find the cURL library
find_package(CURL REQUIRED)
include_directories(${CURL_INCLUDE_DIRS})

# Specify include and library directories
target_link_libraries(my_image_fetcher_library ${CURL_LIBRARIES})