include_directories(inc)
include_directories(../muon/include)

file(GLOB term_SOURCES
  "src/*.cpp"
  )

add_executable(term ${term_SOURCES})

target_link_libraries(term termbox muon)