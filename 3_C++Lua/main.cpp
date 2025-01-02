//
// Created by 江澎涌 on 2023/9/8.
//

#include "C++_Lua_exception/C++_Lua.h"
#include "Lua_C++_exception/LuaC++.h"
#include "panic/panic.h"
#include <iostream>

int main() {
    system("CHCP 65001");
    printf("============= C++ 处理 Lua 异常 =============\n");
    cppHandleLuaError();

    printf("\n");
    printf("============= Lua 处理 C++ 异常 =============\n");
    //luaHandleCppError();

    printf("\n");
    printf("============= Lua 紧急函数 =============\n");
    //panicMain();

    std::cin.get();
    
    return 0;
}