cmake_minimum_required(VERSION 3.23)
project(AED_2)

set(CMAKE_CXX_STANDARD 14)


add_executable(AED_2 main.cpp Classes/Reading.cpp Classes/Reading.h Classes/Airline.h Classes/Airline.cpp Classes/Airport.h Classes/Airport.cpp Classes/Flight.h Classes/Flight.cpp Classes/Graph.h Classes/Graph.cpp Classes/Menu.cpp Classes/Menu.h)
