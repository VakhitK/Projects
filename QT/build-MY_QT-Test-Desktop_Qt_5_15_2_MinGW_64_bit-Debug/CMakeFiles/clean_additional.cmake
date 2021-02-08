# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\MY_QT-Test_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\MY_QT-Test_autogen.dir\\ParseCache.txt"
  "MY_QT-Test_autogen"
  )
endif()
