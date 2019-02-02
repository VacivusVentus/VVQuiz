cmake_minimum_required(VERSION 3.2)
project(VVQuiz)

include_directories("../glfw/include")

file(GLOB CPPS *.cpp *.h *.c *.hpp)

include_directories(${PNG_INCLUDE})
include_directories(${VVBASE_DIR})

add_executable(${PROJECT_NAME} ${CPPS})

target_link_libraries(${PROJECT_NAME} glfw ${GLFW_LIBRARIES})
target_link_libraries(${PROJECT_NAME} sub::png_lib)