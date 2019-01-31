cmake_minimum_required(VERSION 3.2)

project(LodePNG)

file(GLOB SRC_PNG *.cpp *.h)
add_library(${PROJECT_NAME}_lib STATIC ${SRC_PNG})
add_library(sub::png_lib ALIAS ${PROJECT_NAME}_lib)

SET(PNG_DIR "${PROJECT_BINARY_DIR}/${PROJECT_NAME}_lib" PARENT_SCOPE)


