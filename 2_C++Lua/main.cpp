//
// Created by 江澎涌 on 2023/1/21.
//

#include "lua.hpp"
#include "stack.h"
#include <iostream>

int main() {
    system("CHCP 65001");
    printf("================= 栈 =================\n");
    stackDemo();
    printf("=============================================\n");
    std::cin.get();
    return 0;
}