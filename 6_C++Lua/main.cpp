//
// Created by 江澎涌 on 2022/5/1.
//

#include <string>
#include "lua.hpp"
#include "../config/env_config.h"
#include "CallC++/sin.h"
#include "CallC++/dir.h"
#include "coroutine/CoroutineDemo.h"
#include <iostream>

int main() {
    system("CHCP 65001");
    lua_State *L = luaL_newstate();
    luaL_openlibs(L);

    printf("=============== 简易的sin函数 ===============\n");
    // 压入 l_sin 函数
    lua_pushcfunction(L, l_sin);
    // 将压入的函数 l_sin 设置为 sin 变量
    lua_setglobal(L, "sin");

    std::string fname1 = PROJECT_PATH + "/6_C++Lua/CallC++/sin.lua";
    if (luaL_loadfile(L, fname1.c_str()) || lua_pcall(L, 0, 0, 0)) {
        printf("can't run config. file: %s\n", lua_tostring(L, -1));
    }

    printf("\n");
    printf("=============== 读取目录函数 ===============\n");
    // 压入 l_dir 函数
    lua_pushcfunction(L, l_dir);
    // 将压入的函数 l_dir 设置为 dir 变量
    lua_setglobal(L, "dir");

    std::string fname2 = PROJECT_PATH + "/6_C++Lua/CallC++/dir.lua";
    if (luaL_loadfile(L, fname2.c_str()) || lua_pcall(L, 0, 0, 0)) {
        printf("can't run config. file: %s\n", lua_tostring(L, -1));
    }

    printf("\n");
    printf("=============== 协程 ===============\n");
    coroutineDemo();

    lua_close(L);

    std::cin.get();
    return 1;
}
