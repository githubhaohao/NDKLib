cmake_minimum_required(VERSION 3.4.1)

add_library(nannan SHARED nannan.cpp )

find_library(log-lib  log )

target_link_libraries(nannan ${log-lib} )