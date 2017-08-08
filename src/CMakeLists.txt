project(src)

set(HEADER_FILES
        Math.h)

set(SOURCE_FILES
        Math.cpp)

add_library(src STATIC ${SOURCE_FILES} ${HEADER_FILES})