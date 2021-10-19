add_library(calcLib src/Calc.cpp)
 
message("CalcLib current source dir = ${CMAKE_CURRENT_SOURCE_DIR}")
 
target_include_directories( calcLib PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)