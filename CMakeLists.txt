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