//
// Created by 江澎涌 on 2023/9/11.
//

#ifndef LUA_CPP_2022_LUAC_H
#define LUA_CPP_2022_LUAC_H

#include "lua.hpp"
#include <string>
#include "lua.hpp"
#include "../../utils/lua_ext.h"
#include "../../config/env_config.h"

int cppError(lua_State *L);

void luaHandleCppError();

#endif //LUA_CPP_2022_LUAC_H
