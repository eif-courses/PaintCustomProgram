cmake_minimum_required(VERSION 3.20)
project(PaintCustomProgram)

set(CMAKE_CXX_STANDARD 14)


set(CMAKE_EXE_LINKER_FLAGS "-static -static-libgcc")
set(SFML_STATIC_LIBRARIES TRUE)

add_executable(PaintCustomProgram main.cpp Tools/Paint.cpp Tools/Paint.h Tools/Tool.cpp Tools/Tool.h Tools/Magnifier.cpp Tools/Magnifier.h Tools/Pencil.cpp Tools/Pencil.h Tools/Eraser.cpp Tools/Eraser.h Tools/Text.cpp Tools/Text.h Shapes/Shape.cpp Shapes/Shape.h Shapes/Action.h Shapes/Hexagon.cpp Shapes/Hexagon.h Shapes/Pentagon.cpp Shapes/Pentagon.h)

set(SFML_ROOT "SFML-2.4.2")

set(CMAKE_MODULE_PATH "${CMAKE_CURRENT_LIST_DIR}/cmake_modules")
find_package(SFML 2 REQUIRED graphics network audio window system)

if(SFML_FOUND)
    include_directories(${SFML_INCLUDE_DIR})
    target_link_libraries(${PROJECT_NAME} ${SFML_LIBRARIES} ${SFML_DEPENDENCIES})
endif()
