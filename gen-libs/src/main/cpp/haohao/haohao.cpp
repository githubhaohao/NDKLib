//
// Created by haohao on 2017/12/14.
//

#include "haohao.h"
#include <stdio.h>

HaoHao::HaoHao(std::string name, int age) {
    this->name = name;
    this->age = age;
}

std::string HaoHao::getHaoHaoWord() {
    char tem[3];
    sprintf(tem, "%d", age);
    return "Hello, My name is " + name + " I am " + tem + " years old";
}

std::string get_response(){
    HaoHao hao = HaoHao("chary", 23);
    return hao.getHaoHaoWord();
}

__attribute__ ((visibility ("default"))) HaoHao_FUN haohao_fun = {
     get_response
};