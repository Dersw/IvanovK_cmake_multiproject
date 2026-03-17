target_sources(${LIB}
    PRIVATE
        sortings.cpp
    PUBLIC
        sortings.hpp
)

target_include_directories(${LIB} PUBLIC
    "${PROJECT_SOURCE_DIR}/src"
)
