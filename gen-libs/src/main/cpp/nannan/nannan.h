//
// Created by haohao on 2017/12/13.
//

#ifndef NDKLIB_NANNAN_H
#define NDKLIB_NANNAN_H
#include <stddef.h>
#include <android/log.h>
#include <jni.h>
#include <string>

#define  LOG_E(...)  __android_log_print(ANDROID_LOG_ERROR,"NanNan",__VA_ARGS__)

#ifdef __cplusplus
extern "C" {
#endif
typedef struct {
    std::string (*getResponse)();

    std::int32_t (*getNanNanKey)();
} NANNAN_FUN;

extern __attribute__ ((visibility ("default"))) NANNAN_FUN nannan_fun;

#ifdef __cplusplus
}
#endif
#endif //NDKLIB_NANNAN_H
