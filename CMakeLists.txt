cmake_minimum_required(VERSION 3.21)
project(Lua_CPP_2022)

set(CMAKE_CXX_STANDARD 17)

# 将 lua_lib/lua-5.4.4 目录添加至编译器的搜索目录中
# 这样使用 Lua 的源文件时，#include 的文件路径就不需要使用 "lua_lib/lua-5.4.4" 了
# 如果没有这一句，使用 "lua.hpp" ，就需要 #include "lua_lib/lua-5.4.4/lua.hpp"
# 有了这一句，就只需要 #include "lua.hpp"
include_directories(lua_lib/lua-5.4.4)
# 将子目录添加到构建中
# 参数 source_dir（ 即这里的 lua_lib ）指定源 CMakeLists.txt 和代码文件所在的目录
# 这样就会把 lua_lib/CMakeLists.txt 加入到构建中
add_subdirectory(lua_lib)

# 1、 C++ 集成 Lua
add_executable(
        1_CPP_integration_Lua
        1_C++Lua/main.cpp
        1_C++Lua/simple_parser.cpp
        utils/lua_ext.cpp
        config/env_config.cpp
)
target_link_libraries(1_CPP_integration_Lua LuaLib)

# 2、 C++ 与 Lua 数据交互载体——栈
add_executable(
        2_CPP_Lua_communication_stack
        2_C++Lua/main.cpp
        2_C++Lua/stack.cpp
        utils/lua_ext.cpp
)
target_link_libraries(2_CPP_Lua_communication_stack LuaLib)

# 3、C++与Lua交互错误处理
add_executable(
        3_CPP_Lua_handle_error
        3_C++Lua/main.cpp
        3_C++Lua/C++_Lua_exception/C++_Lua.cpp
        3_C++Lua/Lua_C++_exception/LuaC++.cpp
        3_C++Lua/panic/panic.cpp
        config/env_config.cpp
        utils/lua_ext.cpp
)
target_link_libraries(3_CPP_Lua_handle_error LuaLib)

# 4、C++与Lua交互内存管理
add_executable(
        4_CPP_Lua_alloc_memory
        4_C++Lua/main.cpp
        4_C++Lua/allocation.cpp
        config/env_config.cpp
        utils/lua_ext.cpp
)
target_link_libraries(4_CPP_Lua_alloc_memory LuaLib)


# 6、 Lua 回调 C++
add_executable(
        6_Lua_Call_CPP
        6_C++Lua/main.cpp
        6_C++Lua/CallC++/sin.cpp
        6_C++Lua/CallC++/dir.cpp
        6_C++Lua/coroutine/CoroutineDemo.cpp
        6_C++Lua/Lua调用C++的lib/
        config/env_config.cpp
        utils/lua_ext.cpp
)
target_link_libraries(6_Lua_Call_CPP LuaLib)

# 7、Lua调用C++的lib
add_executable(
        7_Lua_Call_CPP_Lib
        7_C++Lua_lib/main.cpp
        config/env_config.cpp
        utils/lua_ext.cpp
)
target_link_libraries(7_Lua_Call_CPP_Lib LuaLib)

# 8、编写 C 函数技巧
add_executable(
        8_C_Function_Skill
        8_C++Lua/main.cpp
        8_C++Lua/arr/LuaArray.cpp
        8_C++Lua/str/LuaString.cpp
#         9_C++Lua/注册表/注册表.cpp
#         9_C++Lua/共享上值/共享上值.cpp
#         9_C++Lua/上值/上值.cpp
#         9_C++Lua/tuple/tuplelib.cpp
#         9_C++Lua/共享上值/共享上值.cpp
        config/env_config.cpp
        utils/lua_ext.cpp
)
target_link_libraries(8_C_Function_Skill LuaLib)

# 9、C函数中如何保存Lua的数据
add_executable(
        9_C_Save_State
        9_C++Lua/main.cpp
        9_C++Lua/reg/reg.cpp
        9_C++Lua/shareup/shareup.cpp
        9_C++Lua/up/up.cpp
        9_C++Lua/tuple/tuplelib.cpp
        config/env_config.cpp
        utils/lua_ext.cpp
)
target_link_libraries(9_C_Save_State LuaLib)

# 10_C++Lua_userdata
add_executable(
        10_Userdata
        10_C++Lua_userdata/main.cpp
        10_C++Lua_userdata/full_userdata/user/a/user.cpp
        10_C++Lua_userdata/full_userdata/user/b/user.cpp
        10_C++Lua_userdata/full_userdata/user/c/user.cpp
        10_C++Lua_userdata/full_userdata/array/a/array.cpp
        10_C++Lua_userdata/full_userdata/array/b/array.cpp
        10_C++Lua_userdata/full_userdata/array/c/array.cpp
        10_C++Lua_userdata/full_userdata/array/d/array.cpp
        10_C++Lua_userdata/light_userdata/user.cpp
        utils/lua_ext.cpp
        config/env_config.cpp
)
target_link_libraries(10_Userdata LuaLib)
