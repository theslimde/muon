file(GLOB muon_SOURCE
  "src/*.cpp"
  )

include_directories(inc)


add_library(muon ${muon_SOURCE})