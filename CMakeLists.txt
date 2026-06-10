cmake_minimum_required(VERSION 3.10.2)
project(default VERSION 0.0.1)
add_executable(main
              main.cpp
              Vehicle.cpp
              Car.cpp
              Motorcycle.cpp
              SemiTruck.cpp
              Highway.cpp
              HighwayPatrol.cpp)
              target_compile_features(main PUBLIC cxx_std_17)