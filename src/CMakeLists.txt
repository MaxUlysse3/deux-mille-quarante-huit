cmake_minimum_required(VERSION 3.22)
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

project(Deux_mille_quarante_huit)
add_executable(a.out main.cpp)
target_include_directories(a.out PUBLIC
	"${PROJECT_BINARY_DIR}"
	"${PROJECT_SOURCE_DIR}"
	)

add_library(Board board.cpp)
target_link_libraries(a.out PUBLIC Board)
