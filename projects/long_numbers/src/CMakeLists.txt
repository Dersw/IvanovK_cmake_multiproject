target_sources(${LIB}
    PRIVATE
        long_number.cpp
    PUBLIC
        long_number.hpp
)

target_include_directories(${LIB} PUBLIC
    "${PROJECT_SOURCE_DIR}/src"
)
