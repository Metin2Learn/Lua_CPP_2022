---
--- Generated by EmmyLua(https://github.com/EmmyLua)
--- Created by jiangpengyong.
--- DateTime: 2022/5/1 21:40
---

local currentPath = debug.getinfo(1, "S").source:sub(2):match("(.*/)")
print("source:", currentPath)

-- 添加一个 cpath 搜索动态库
package.cpath = package.cpath .. ";" .. currentPath .. "lib/mylib"

local mylib = require "mylib"

print("------------------ mylib ------------------")
print("mylib", mylib)

print("------------------ mylib 的所有函数 ------------------")
for i, v in pairs(mylib) do
    print(i, v)
end

print("------------------ 目录 ------------------")
local dirTable
local isSuccess, msg = pcall(function()
    dirTable = mylib.dir(currentPath);
end)
if isSuccess then
    for key, value in pairs(dirTable) do
        print(key, value)
    end
else
    print("打开目录失败", currentPath, msg)
end