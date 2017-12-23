cmake_minimum_required(VERSION 3.4.1)
add_library(haohao STATIC haohao.cpp )
#add_library(haohao STATIC haohao.cpp )


find_library(log-lib  log )

target_link_libraries(haohao ${log-lib} )
set_target_properties(haohao
                      PROPERTIES
                      ARCHIVE_OUTPUT_DIRECTORY
                      "${CMAKE_SOURCE_DIR}/src/main/jniLibs/${ANDROID_ABI}")