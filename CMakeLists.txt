cmake_minimum_required(VERSION 4.0...4.3)

project(qml-material)

list(APPEND CMAKE_MODULE_PATH ${PROJECT_SOURCE_DIR}/cmake/Qt5QMLPlugin)

if(MSVC)
    set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin/$<CONFIG>)
endif()

add_subdirectory(fonts)
add_subdirectory(icons)
add_subdirectory(src)
add_subdirectory(tests)
