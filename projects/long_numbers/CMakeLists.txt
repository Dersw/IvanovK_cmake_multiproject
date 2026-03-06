project(long_numbers)

set (LIB
    long_numbers_lib
)

add_library(${LIB} "")

add_subdirectory(src)
add_subdirectory(test)
