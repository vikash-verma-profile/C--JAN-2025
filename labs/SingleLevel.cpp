#include <iostream>
using namespace std;

class Vehicle
{

public:
    Vehicle() { cout << "This is a vehicle \n"; };
    ~Vehicle(){};
};

class Car : public Vehicle
{
public:
    Car()
    {
        cout << "This Vehicle is Car \n";
    }
};

int main()
{

    Car Obj;
    return 0;
}
