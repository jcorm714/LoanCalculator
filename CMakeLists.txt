cmake_minimum_required(VERSION "3.18")

project(LoanProcessing)
file(GLOB SOURCES
        headers/*.h
        sources/*.cpp)

add_executable(LoanProcessing Main.cpp ${SOURCES})