cmake_minimum_required(VERSION 3.20.0)

list(APPEND BOARD_ROOT ${CMAKE_CURRENT_SOURCE_DIR})
list(APPEND ZEPHYR_EXTRA_MODULES ${CMAKE_CURRENT_SOURCE_DIR}/drivers/my_driver_module)
find_package(Zephyr REQUIRED)
project(Led_Demo)

target_sources(app PRIVATE src/main.c)