#include <iostream>
#include <string>
#include <memory>
#include <vector>

using namespace std;

class Bird
{
public:
    virtual void fly() const
    {
        cout << "Bird is flying" << endl;
    }
    virtual ~Bird() = default;
};

class Sparrow : public Bird
{
    void fly() const override
    {
        cout << "Sparrow is flying" << endl;
    }
};
class Penguin : public Bird
{
    void fly() const override
    {
        cout << "Penguin cannot fly" << endl;
    }
};

void testFlight(const Bird &bird)
{
    bird.fly();
}

int main()
{
    Sparrow s1;
    Penguin p1;
    testFlight(s1);
    testFlight(p1);
    return 0;
}