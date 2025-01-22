#include <iostream>
using namespace std;

class Base
{
public:
    virtual void function1()
    {
        cout << "base function 1" << endl;
    }
    virtual void function2()
    {
        cout << "base function 2" << endl;
    }
    virtual void function3()
    {
        cout << "base function 3" << endl;
    }
};

class Derived1 : public Base
{
public:
    void function1()
    {
        cout << "Derived 1 function" << endl;
    }
};

class Derived2 : public Derived1
{
public:
    void function2()
    {
        cout << "Derived 2 function 2" << endl;
    }
};

int main()
{

    Base *ptr1 = new Base();
    Base *ptr2 = new Derived1();
    Base *ptr3 = new Derived2();

    ptr1->function1();
    ptr1->function2();
    ptr1->function3();
    ptr2->function1();
    ptr2->function2();
    ptr2->function3();

    ptr3->function1();
    ptr3->function2();
    ptr3->function3();

    return 0;
}