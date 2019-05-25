cmake_minimum_required( VERSION 3.8 )

cmake_policy( SET CMP0004 OLD )

project( CMakeGen LANGUAGES CXX )

find_package( SDL2 REQUIRED )

set( SRC_FILES ${CMAKE_CURRENT_SOURCE_DIR}/src/main.cpp )

add_executable( ${CMAKE_PROJECT_NAME} ${SRC_FILES} )

target_compile_features( ${CMAKE_PROJECT_NAME} PRIVATE cxx_std_17 )
target_compile_options( ${CMAKE_PROJECT_NAME} PRIVATE
    $<$<OR:$<CXX_COMPILER_ID:Clang>,$<CXX_COMPILER_ID:AppleClang>>:
            -Wall -Werror -Wextra -Wpedantic >
    $<$<CXX_COMPILER_ID:GNU>:
            -Wall -Werror -pedantic -pedantic-errors >
    $<$<CXX_COMPILER_ID:MSVC>:
            /W4 /WX /permissive- /analyze >
    )
target_include_directories( ${CMAKE_PROJECT_NAME} PRIVATE ${SDL2_INCLUDE_DIRS} )
target_link_libraries( ${CMAKE_PROJECT_NAME} PRIVATE ${SDL2_LIBRARIES} )

