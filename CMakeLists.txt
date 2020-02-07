cmake_minimum_required(VERSION 3.16)

#set the project name
project(Collections VERSION 1.0.0)

# specify the C++ standard
set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED True)

include_directories("${PROJECT_SOURCE_DIR}/include")
add_executable(BinaryGap "${CMAKE_CURRENT_SOURCE_DIR}/src/binaryGap.cpp")
add_executable(CyclicRotation "${CMAKE_CURRENT_SOURCE_DIR}/src/cyclicRotation.cpp")
add_executable(OddOccurencesInArray "${CMAKE_CURRENT_SOURCE_DIR}/src/oddOccurencesInArray.cpp")
add_executable(PermMissElem "${CMAKE_CURRENT_SOURCE_DIR}/src/permMissElem.cpp")
add_executable(TapeEquilibrium "${CMAKE_CURRENT_SOURCE_DIR}/src/tapeEquilibrium.cpp")
add_executable(FrogJump "${CMAKE_CURRENT_SOURCE_DIR}/src/frogJump.cpp")


enable_testing()

# does the application run
add_test(NAME Runs COMMAND FrogJump 10 85 30)

add_test(NAME Usage COMMAND FrogJump)
set_tests_properties(Usage
  PROPERTIES PASS_REGULAR_EXPRESSION "No arguments passed"
  )
# define a function to simplify adding tests
function(do_test target n arg arg1 arg2 result)
  add_test(NAME Test${n} COMMAND ${target} ${arg} ${arg1} ${arg2})
  set_tests_properties(Test${n}
    PROPERTIES PASS_REGULAR_EXPRESSION ${result}
    )
endfunction(do_test)

do_test(FrogJump 1 10 85 30 "frog will jump: 3")
do_test(FrogJump 2 30 50 5 "frog will jump: 4")
do_test(FrogJump 3 30 30 5 "frog will jump: 0")
