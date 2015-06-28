include_directories(inc)

file(GLOB term_SOURCES
  "src/*.cpp"
  )

add_executable(term ${term_SOURCES})

target_link_libraries(term termbox)