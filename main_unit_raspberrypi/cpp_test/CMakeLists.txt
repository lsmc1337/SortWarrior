# Main configuration of project
cmake_minimum_required(VERSION 3.10)
set(CMAKE_PROJECT_NAME SortWarrior )
project( ${CMAKE_PROJECT_NAME} )

# find and include opencv
find_package( OpenCV REQUIRED )
include_directories( ${OpenCV_INCLUDE_DIRS} )

# Adding our libs
add_library(vision STATIC
    lib/vision/src/detect.cpp
)

target_include_directories(vision PUBLIC
    lib/vision/inc/
)

add_executable( ${CMAKE_PROJECT_NAME} 
    src/main.cpp 
)

target_link_libraries( ${CMAKE_PROJECT_NAME} 
    ${OpenCV_LIBS}
    vision
)