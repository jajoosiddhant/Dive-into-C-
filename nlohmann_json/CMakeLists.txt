cmake_minimum_required (VERSION 3.5)

project (nlohmann_json)

set (CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -Werror -std=c++14")
set (source_dir "${PROJECT_SOURCE_DIR}")

set(JSON_BuildTests OFF CACHE INTERNAL "")
add_subdirectory(nlohmann_json)

file (GLOB source_files "${source_dir}/*.cpp")

add_executable (nlohmann_json_test ${source_files})

target_link_libraries(nlohmann_json_test nlohmann_json::nlohmann_json)