cmake_minimum_required(VERSION 3.12)
project(dssm)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

include_directories(include)

# Find all source files
file(GLOB_RECURSE SOURCES "src/*.cpp")

# Create a separate executable for every .cpp file found
foreach(source_file ${SOURCES})
    # Get the filename without the path or extension (e.g., "aula02_at1")
    get_filename_component(exe_name ${source_file} NAME_WE)
    
    # Create the executable
    add_executable(${exe_name} ${source_file})
endforeach()