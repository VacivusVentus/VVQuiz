cmake_minimum_required(VERSION 3.2)

project(LodePNG)

file(GLOB SRC_PNG *.cpp *.h)
add_library(${PROJECT_NAME} STATIC ${SRC_PNG})
add_library(sub::png_lib ALIAS ${PROJECT_NAME})



