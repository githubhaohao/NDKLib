add_library(native SHARED native.cpp)

# 引入 .so 文件
add_library(nannan SHARED IMPORTED )
set_target_properties(nannan PROPERTIES IMPORTED_LOCATION "${jnilibs}/${ANDROID_ABI}/libnannan.so")

# 引入 .a 文件
add_library(haohao STATIC IMPORTED )
set_target_properties(haohao PROPERTIES IMPORTED_LOCATION "${jnilibs}/${ANDROID_ABI}/libhaohao.a")

find_library( log-lib log )

target_link_libraries(native nannan haohao ${log-lib})