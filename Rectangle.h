#pragma once
#include <iostream>
#include "BaseShape.h"
#include "ObjFactory.h"

class Rectangle : public BaseShape
{
public:
    Rectangle() : BaseShape()
    {
    }
    void draw() override
    {
        std::cout << "I'm Rectangle" << std::endl;
    }
};

ReflectRegister(Rectangle) // 注册矩形类