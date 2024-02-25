cmake_minimum_required(VERSION 3.10)
project(CrowExample)

set(Boost_INCLUDE_DIR C:/vcpkg//installed/x64-windows/include)
set(Crow_DIR C:/vcpkg/installed/x64-windows/share/crow)
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(Boost 1.64 REQUIRED COMPONENTS system date_time)
find_package(Crow CONFIG REQUIRED)

add_executable(${PROJECT_NAME} main.cpp)
target_link_libraries(${PROJECT_NAME} PRIVATE Crow::Crow)
