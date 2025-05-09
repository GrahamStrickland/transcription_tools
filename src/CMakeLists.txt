cmake_minimum_required(VERSION 4.0)  

set(CMAKE_EXPORT_COMPILE_COMMANDS on)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -g -std=c++23 -pedantic -Wall -Wextra -Werror")
project(transcriber)                      

set(CMAKE_INCLUDE_CURRENT_DIR ON)
set(CMAKE_AUTOMOC ON)

find_package(Qt6 REQUIRED COMPONENTS 
    Core 
    Gui 
    Widgets
)

qt_standard_project_setup()

set(SOURCE_FILES 
    main.cpp
)

add_executable(transcriber ${SOURCE_FILES})

target_link_libraries(transcriber
    PRIVATE 
    Qt6::Core 
    Qt6::Gui
    Qt6::Widgets
)

set_target_properties(transcriber PROPERTIES 
    WIN32_EXECUTABLE ON
    MACOSX_BUNDLE ON
)
