---
--- Generated by EmmyLua(https://github.com/EmmyLua)
--- Created by jiangpengyong.
--- DateTime: 2022/5/8 18:29
---

local myUser = user.new("江澎涌", 29)

print(myUser:introduce())
myUser:setName("jiang")
print("姓名：", myUser:getName())
myUser:setAge(28)
print("年龄：", myUser:getAge())

myUser = nil;

collectgarbage();