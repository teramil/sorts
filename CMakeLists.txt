# vestion check
cmake_minimum_required (VERSION 3.0)

# project name 
project(sorts)

# library
add_library(sorts_lib
  source/bubbles_sort.c
)

add_library(Sorts ALIAS sorts_lib)

target_include_directories(sorts_lib
PUBLIC
  ${PROJECT_SOURCE_DIR}/include/
)