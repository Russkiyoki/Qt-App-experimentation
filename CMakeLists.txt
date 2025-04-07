cmake_minimum_required(VERSION 3.16)
project(QtApp)

set(CMAKE_CXX_STANDARD 17)

find_package(Qt5Widgets REQUIRED)

# Enable MOC processing
set(CMAKE_AUTOMOC ON)

# Add all header files explicitly to MOC processing
set(SOURCE_HEADERS include/ButtonHandler.h include/window.h)

# Gather source files
file(GLOB SOURCES "src/*.cpp")

# Create the executable
add_executable(QtApp ${SOURCES} ${SOURCE_HEADERS})  # 👈 Make sure headers are included

# Include directories
target_include_directories(QtApp PRIVATE include)

# Link Qt5Widgets
target_link_libraries(QtApp Qt5::Widgets)
