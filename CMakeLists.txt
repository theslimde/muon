cmake_minimum_required(VERSION 3.2)

project(muon)

set(muon_VERSION_MASTER 0)
set(muon_VERSION_MINOR 1)

set(CMAKE_CXX_FLAGS "-std=c++14 -Wall -Wextra")

option(FRONTEND_TERMBOX "Build the termbox frontend" ON)

configure_file(
  "muon/include/config.hpp.in"
  "${PROJECT_BINARY_DIR}/config.hpp"
  )

include_directories("${PROJECT_BINARY_DIR}")

add_subdirectory("muon")
add_subdirectory("terminal")
