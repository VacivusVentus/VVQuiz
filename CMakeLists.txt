cmake_minimum_required(VERSION 3.2)

project(VVQuiz)

set(PNG_INCLUDE ${PROJECT_SOURCE_DIR}/lodepng)

subdirs(lodepng)
subdirs(VVDB)
subdirs(Tools)
subdirs(glfw)
subdirs(VVQuiz)
