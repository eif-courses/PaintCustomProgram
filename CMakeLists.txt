cmake_minimum_required(VERSION 3.20)
project(PaintCustomProgram)

set(CMAKE_CXX_STANDARD 14)

add_executable(PaintCustomProgram main.cpp Paint.cpp Paint.h Tool.cpp Tool.h Magnifier.cpp Magnifier.h Pencil.cpp Pencil.h Eraser.cpp Eraser.h Text.cpp Text.h)
