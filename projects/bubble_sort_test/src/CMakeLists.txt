project(bubble_sort)

target_include_directories(${LIB} PUBLIC
    "${PROJECT_SOURCE_DIR}/src"
)

add_subdirectory(sortings)
