cmake_minimum_required(VERSION 3.14)
project(xtorch_bridge LANGUAGES CXX)

list(APPEND CMAKE_PREFIX_PATH "/home/kami/libs/c++/libtorch/")

find_package(pybind11 REQUIRED)
find_package(Torch REQUIRED)
find_package(xTorch REQUIRED)
find_package(OpenCV REQUIRED)
find_package(LibLZMA REQUIRED)
find_package(LibArchive REQUIRED)
find_package(OpenSSL REQUIRED)
find_package(CURL REQUIRED)
find_package(ZLIB REQUIRED)
find_package(SndFile REQUIRED)

pybind11_add_module(xtorch_bridge src/bindings.cpp)

target_link_libraries(xtorch_bridge
    PRIVATE
        xTorch
        ${TORCH_LIBRARIES}
        ${OpenCV_LIBS}
        LibLZMA::LibLZMA
        LibArchive::LibArchive
        OpenSSL::SSL
        CURL::libcurl
        ZLIB::ZLIB
        SndFile::sndfile
)

target_include_directories(xtorch_bridge PRIVATE
    ${TORCH_INCLUDE_DIRS}
    ${OpenCV_INCLUDE_DIRS}
)

set_property(TARGET xtorch_bridge PROPERTY CXX_STANDARD 17)