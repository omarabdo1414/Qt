# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\appTesla_Infotanment_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\appTesla_Infotanment_autogen.dir\\ParseCache.txt"
  "appTesla_Infotanment_autogen"
  )
endif()
