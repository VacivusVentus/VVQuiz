cmake_minimum_required(VERSION 3.2)

project(SeparateSymbols)

find_package(OpenCl)


include_directories(${OpenCL_INCLUDE_DIR})
include_directories(${PNG_INCLUDE})
link_libraries(${OpenCL_LIBRARY})

file(GLOB TOOLSEPFONT *.cpp *.h)


add_executable(${PROJECT_NAME} ${TOOLSEPFONT})

target_link_libraries(${PROJECT_NAME} sub::png_lib)
