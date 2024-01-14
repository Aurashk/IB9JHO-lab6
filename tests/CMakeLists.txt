set(SRC_FILES test_point test_point.cpp ${CMAKE_SOURCE_DIR}/src/Point.cpp)
add_executable(test_point ${SRC_FILES})
target_include_directories(test_point PUBLIC ${CMAKE_SOURCE_DIR}/src ${CMAKE_SOURCE_DIR}/extern/catch2)
add_test(NAME test_point COMMAND test_point)

set(SRC_FILES test_line test_line.cpp ${CMAKE_SOURCE_DIR}/src/Point.cpp ${CMAKE_SOURCE_DIR}/src/Line.cpp)
add_executable(test_line ${SRC_FILES})
target_include_directories(test_line PUBLIC ${CMAKE_SOURCE_DIR}/src ${CMAKE_SOURCE_DIR}/extern/catch2)
add_test(NAME test_line COMMAND test_line)

set(SRC_FILES test_triangle test_triangle.cpp ${CMAKE_SOURCE_DIR}/src/Point.cpp ${CMAKE_SOURCE_DIR}/src/Line.cpp ${CMAKE_SOURCE_DIR}/src/Triangle.cpp)
add_executable(test_triangle ${SRC_FILES})
target_include_directories(test_triangle PUBLIC ${CMAKE_SOURCE_DIR}/src ${CMAKE_SOURCE_DIR}/extern/catch2)
add_test(NAME test_triangle COMMAND test_triangle)