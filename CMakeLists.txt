cmake_minimum_required(VERSION 3.12)
project(moveSemantic)

# SET(CMAKE_CXX_FLAGS "-std=17")
SET(CMAKE_CXX_STANDARD 17)
SET(CMAKE_CXX_STANDARD_REQUIRED ON)

SET(CMAKE_CXX_COMPILE_FEATURES ON)

add_executable(Introduction1 ExerciseFiles/test.cpp)
add_executable(Introduction2 ExerciseFiles/test2.cpp)
add_executable(createMoveConstructor ExerciseFiles/rational1.cpp ExerciseFiles/rationalClass1.cpp)
add_executable(createMoveAssignmentOperator ExerciseFiles/rational2.cpp ExerciseFiles/rationalClass2.cpp)
add_executable(useCopyandSwap ExerciseFiles/rational3.cpp ExerciseFiles/rationalClass3.cpp)
