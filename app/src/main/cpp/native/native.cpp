//
// Created by haohao on 2017/12/13.
//

#include <jni.h>
#include <string>
#include <nannan.h>
#include <haohao.h>

extern "C"
{
JNIEXPORT jstring JNICALL
Java_com_haohao_ndklib_MainActivity_stringFromJNI(JNIEnv
                                                  *env, jobject instance) {

    char age[3];
    sprintf(age, "%d", nannan_fun.getNanNanKey());

    std::string value = nannan_fun.getResponse() + " I am " + age + " years old.\n";
    value += haohao_fun.getResponse();
    //std::string value = "Hello";
    return env->NewStringUTF(value.c_str());
}
}