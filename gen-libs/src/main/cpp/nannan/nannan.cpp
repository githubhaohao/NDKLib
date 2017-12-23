//
// Created by haohao on 2017/12/13.
//

#include "nannan.h"

std::string get_nannan_response(){
    LOG_E("Nannan get response");
    return "Hello, My name is Nannan!";
}

std::int32_t get_nannan_age(){
    LOG_E("Nannan get age");
    return 23;
}

__attribute__ ((visibility ("default"))) NANNAN_FUN nannan_fun = {
        get_nannan_response,
        get_nannan_age
};