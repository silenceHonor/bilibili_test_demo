#include <iostream>
#include "BaseShape.h"
#include "ObjFactory.h"
#include "Rectangle.h"
#include "Triangle.h"
using namespace std;

int main()
{
    cout << "---Awesome code start!---" << endl;
    BaseShape *pBase;
    pBase = ObjFactory::createObj<BaseShape>("Rectangle");
    if (pBase != nullptr)
    {
        pBase->draw();
    }
    else
    {
        cout << "Rectangle is null" << endl;
    }
    pBase = ObjFactory::createObj<BaseShape, std::string>("Triangle", "hello");
    if (pBase != nullptr)
    {
        pBase->draw();
    }
    else
    {
        cout << "Triangle is null" << endl;
    }
    return 0;
}