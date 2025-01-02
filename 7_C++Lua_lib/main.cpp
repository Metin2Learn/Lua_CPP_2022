//
// Created by 江澎涌 on 2023/10/26.
//

#include <string>
#include "lua.hpp"
#include "../config/env_config.h"
#include <iostream>
int main(){
    system("CHCP 65001");
    lua_State *L = luaL_newstate();
    luaL_openlibs(L);

    printf("\n");
    printf("=============== Lua调用 ===============\n");
    std::string fname = PROJECT_PATH +"/7_C++Lua_lib/LuaC.lua";
    if (luaL_loadfile(L, fname.c_str()) || lua_pcall(L, 0, 0, 0)) {
        printf("can't run config. file: %s", lua_tostring(L, -1));
    }

    lua_close(L);
    std::cin.get();
    return 1;
}