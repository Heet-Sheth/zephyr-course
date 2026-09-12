cmake_minimum_required(VERSION 3.20.0)

find_package(Zephyr REQUIRED)
project(Led_Demo)

target_sources(app PRIVATE src/main.c)