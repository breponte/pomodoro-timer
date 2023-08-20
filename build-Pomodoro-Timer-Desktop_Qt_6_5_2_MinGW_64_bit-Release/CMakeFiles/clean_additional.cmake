# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Release")
  file(REMOVE_RECURSE
  "CMakeFiles\\Pomodoro-Timer_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\Pomodoro-Timer_autogen.dir\\ParseCache.txt"
  "Pomodoro-Timer_autogen"
  )
endif()
