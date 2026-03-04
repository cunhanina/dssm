cmake_minimum_required(VERSION 3.12)
project(dssm)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

include_directories(include)

# 1. Automatically find ALL .cpp files in the src folder
# CONFIGURE_DEPENDS tells CMake to watch the folder for new files
file(GLOB_RECURSE SOURCES CONFIGURE_DEPENDS "src/*.cpp")

# 2. Build the executable using every file it found
add_executable(${PROJECT_NAME} ${SOURCES})