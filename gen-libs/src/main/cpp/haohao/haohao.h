//
// Created by haohao on 2017/12/14.
//

#ifndef NDKLIB_HAOHAO_H
#define NDKLIB_HAOHAO_H
#include <stddef.h>
#include <android/log.h>
#include <jni.h>
#include <string>

#define  LOG_E(...)  __android_log_print(ANDROID_LOG_ERROR,"HaoHao",__VA_ARGS__)

#ifdef __cplusplus
extern "C" {
#endif
typedef struct {
    std::string (*getResponse)();
} HaoHao_FUN;

class HaoHao{
public:
    HaoHao(std::string, int);
    std::string getHaoHaoWord();

private:
    std::string name;
    int age;

};

extern __attribute__ ((visibility ("default"))) HaoHao_FUN haohao_fun;

#ifdef __cplusplus
}
#endif
#endif //NDKLIB_HAOHAO_H
