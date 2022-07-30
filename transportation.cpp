#include <iostream>
using namespace std;
//基类
class Transportation
{
public:
    Transportation() {}
    virtual ~Transportation() {}
    virtual void run() = 0;
};

class Plane : public Transportation
{
public:
    Plane() {}
    ~Plane() {}
    virtual void run()
    {
        cout << "I am 飞机" << endl;
    }
};

class Train : public Transportation
{
public:
    Train() {}
    ~Train() {}
    virtual void run()
    {
        cout << "I am 火车" << endl;
    }
};
//工厂
class TransportationFactory
{
public:
    static Transportation *createTransportation(const string &name)
    {
        if (name == "火车")
            return new Train;
        else if (name == "飞机")
            return new Plane;
    }
};

int main()
{
    TransportationFactory t;
    Transportation *obj = (Transportation *)t.createTransportation("火车");
    obj->run();
    return 0;
}