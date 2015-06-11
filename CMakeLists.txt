cmake_minimum_required(VERSION 3.2)

project(muon)

set(muon_VERSION_MASTER 0)
set(muon_VERSION_MINOR 1)

configure_file(
  "inc/config.hpp.in"
  "${PROJECT_BINARY_DIR}/config.hpp"
  )

include_directories("${PROJECT_BINARY_DIR}")

add_executable(muon src/main.cpp)
