cmake_minimum_required(VERSION 3.16)
project(cherry_text)

find_package(Curses REQUIRED)
include_directories(${CURSES_INCLUDE_DIR})

add_executable(${PROJECT_NAME} main.c)

target_link_libraries(${PROJECT_NAME} ${CURSES_LIBRARIES})
