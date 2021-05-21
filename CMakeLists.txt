# Set the minimum cmake version
cmake_minimum_required(VERSION 3.2.0)
# Set project
project(cro)
# Set output to bin/ and lib/
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)
# Find pkgconfig
find_package(PkgConfig REQUIRED)
# Find curl
pkg_check_modules(CURL REQUIRED libcurl)
pkg_check_modules(ZSTD REQUIRED libzstd)
# Add src subdir (main program stuff)
add_subdirectory(src)
