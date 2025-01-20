#include <iostream>
using namespace std;

class Vehicle
{
private:
    int a;

protected:
    int b;

public:
    Vehicle()
    {
        a = 1;
        b = 2;
        cout << "This is a vehicle \n";
    };
    ~Vehicle() {};
};

class Car : public Vehicle
{
public:
    Car()
    {
        cout << b;
        cout << "This Vehicle is Car \n";
    }
};

int main()
{

    Car Obj;
    return 0;
}
