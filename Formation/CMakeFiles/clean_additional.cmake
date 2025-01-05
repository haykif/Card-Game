# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Release")
  file(REMOVE_RECURSE
  "CMakeFiles\\Formation_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\Formation_autogen.dir\\ParseCache.txt"
  "Formation_autogen"
  )
endif()
