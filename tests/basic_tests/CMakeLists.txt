include_directories(${gtest_SOURCE_DIR}/INCLUDE ${gtest_SOURCE_DIR})

add_executable(runBasicTests
        test_math.cpp)

target_link_libraries(runBasicTests gtest gtest_main)
target_link_libraries(runBasicTests src)