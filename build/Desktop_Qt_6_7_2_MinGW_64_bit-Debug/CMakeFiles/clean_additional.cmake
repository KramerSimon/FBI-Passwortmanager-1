# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\FBI-Passwortmanager_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\FBI-Passwortmanager_autogen.dir\\ParseCache.txt"
  "FBI-Passwortmanager_autogen"
  )
endif()
