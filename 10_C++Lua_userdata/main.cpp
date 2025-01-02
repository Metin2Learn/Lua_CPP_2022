//
// Created by 江澎涌 on 2023/1/30.
//

#include <cstdio>
#include "full_userdata/user/a/user.h"
#include "full_userdata/user/b/user.h"
#include "full_userdata/user/c/user.h"
#include "full_userdata/array/a/array.h"
#include "full_userdata/array/b/array.h"
#include "full_userdata/array/c/array.h"
#include "full_userdata/array/d/array.h"
#include "light_userdata/user.h"
#include <iostream>

int main() {
    system("CHCP 65001");
    printf("\n");
    printf("==============================================\n");
    printf("================ user userdata================\n");
    printf("==============================================\n");
    printf("\n");
    printf("================ 1普通版本 ================\n");
    userSimpleDemo();

    printf("\n");
    printf("================ 2增加元表 ================\n");
    userMetatableDemo();

    printf("\n");
    printf("================ 3面向对象 ================\n");
    userObjDemo();

    printf("\n");
    printf("===============================================\n");
    printf("================ array userdata================\n");
    printf("===============================================\n");
    printf("\n");
    printf("================ 1普通版本 ================\n");
    arraySimpleDemo();

    printf("\n");
    printf("================ 2增加元表 ================\n");
    arrayUseMetatableDemo();

    printf("\n");
    printf("================ 3面向对象 ================\n");
    arrayObjectDemo();

    printf("\n");
    printf("================ 4数组访问 ================\n");
    arrayArrayDemo();

    printf("\n");
    printf("===============================================\n");
    printf("================ light userdata================\n");
    printf("===============================================\n");

    lightUserdataDemo();
    std::cin.get();
    return 1;
}
