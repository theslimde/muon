cmake_minimum_required(VERSION 3.2)

project(muon)

set(muon_VERSION_MASTER 0)
set(muon_VERSION_MINOR 1)

option(FRONTEND_TERMBOX "Build the termbox frontend" ON)

configure_file(
  "muon/inc/config.hpp.in"
  "${PROJECT_BINARY_DIR}/config.hpp"
  )

include_directories("${PROJECT_BINARY_DIR}")

add_subdirectory("muon")
add_subdirectory("terminal")
add_subdirectory("test")
