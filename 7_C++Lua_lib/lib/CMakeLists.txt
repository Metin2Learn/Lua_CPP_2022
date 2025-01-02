# cmake_minimum_required(VERSION 3.21)
# project(MyLib)

# set(CMAKE_CXX_STANDARD 17)

# include_directories(lua_lib/lua-5.4.4)
# add_subdirectory(lua_lib)

# add_executable(mylib src/mylib.cpp)
# target_link_libraries(mylib LuaLibForLib)

# 在 lib 目录下，运行
# cmake .
# make
# 最后编译出 mylib 就是可以运行的 dylib 库

# cmake .  --> 命令会生成构建系统所需的 Makefile 或其他构建工具的配置文件。
# make     --> make命令用于执行构建系统所生成的 Makefile 文件，进行项目的编译和构建。

# nm -gm mylib 进行查看 lib 中的接口


cmake_minimum_required(VERSION 3.21)
project(MyLib)

# 设置 C++ 标准为 C++17
set(CMAKE_CXX_STANDARD 17)

# 设置 Lua 的头文件路径
include_directories(lua_lib/lua-5.4.4)

# 添加 Lua 子目录
add_subdirectory(lua_lib)

# 生成动态库 mylib.dll（Windows）或 mylib.so（Linux）
add_library(mylib SHARED src/mylib.cpp)

# 链接 Lua 库
target_link_libraries(mylib LuaLibForLib)

# 如果是在 Windows 上，需要指定 DLL 的输出路径
set_target_properties(mylib PROPERTIES
    LIBRARY_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/lib"
)

# 安装动态库（可选）
# install(TARGETS mylib DESTINATION lib)

# 如果需要生成可执行文件（如果你需要测试用例，可以在这里加上）
# add_executable(test_my_lib src/test.cpp)
# target_link_libraries(test_my_lib mylib)
