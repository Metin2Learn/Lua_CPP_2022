//
// Created by 江澎涌 on 2023/1/27.
//

#include <cstdio>
#include "reg/reg.h"
#include "up/up.h"
#include "tuple/tuplelib.h"
#include "shareup/shareup.h"
#include <iostream>
int main(){
    system("CHCP 65001");
    printf("======================== 注册表 ========================\n");
    printf("------------------------ 模块自定义 key 值 ------------------------\n");
    customKeyRegistryDemo();
    printf("------------------------ 引用系统生成 key 值 ------------------------\n");
    refRegistryDemo();
    printf("------------------------ 静态变量作为 key 值 ------------------------\n");
    cStaticValueRegistryDemo();

    printf("\n");
    printf("======================== up value ========================\n");
    upValueDemo();

    printf("\n");
    printf("======================== tuple ========================\n");
    tupleDemo();

    printf("\n");
    printf("======================== share up value ========================\n");
    shareUpValueDemo();
    std::cin.get();
    return 1;
}
