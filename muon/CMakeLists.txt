file(GLOB muon_SOURCE
  "src/*.cpp"
  )

include_directories(include)
include_directories(src)


add_library(muon ${muon_SOURCE})
add_subdirectory("tests")