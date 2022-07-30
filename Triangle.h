#pragma once
#include <iostream>
#include "BaseShape.h"
#include "ObjFactory.h"

class Triangle : public BaseShape
{
    std::string m_userData;

public:
    Triangle(std::string userData) : BaseShape()
    {
        m_userData = userData;
    }
    void draw() override
    {
        std::cout << "I'm Triangle," << m_userData.c_str() << std::endl;
    }
};

ReflectRegister(Triangle, std::string) // 注册三角形类