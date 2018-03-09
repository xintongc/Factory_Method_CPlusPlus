cmake_minimum_required(VERSION 3.6)
project(factory_method)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES
        DashedFrame.cpp
        DashedFrame.h
        DottedFrame.cpp
        DottedFrame.h
        Frame.h
        FrameFactory.cpp
        FrameFactory.h
        main.cpp
        SolidFrame.cpp
        SolidFrame.h WavyFrame.cpp WavyFrame.h)

add_executable(factory_method ${SOURCE_FILES})