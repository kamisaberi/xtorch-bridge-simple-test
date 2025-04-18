cmake_minimum_required(VERSION 3.0 FATAL_ERROR)
project(fast_add)
list(APPEND CMAKE_PREFIX_PATH /home/kami/libs/c++/libtorch/)

find_package(Torch REQUIRED)
find_package(xTorch REQUIRED)

add_library(fast_add SHARED fast_add.cpp)
target_link_libraries(fast_add "${TORCH_LIBRARIES}")
set_property(TARGET fast_add PROPERTY CXX_STANDARD 17)
