#include <iostream>
using namespace std;

class A
{
public:
    int a;
    void getData()
    {
        cout << "enter value of a";
        cin >> a;
    }
};

class B : public A
{
public:
    int b;
    void getDataB()
    {
        cout << "enter value of b";
        cin >> b;
    }
};
class C : public B
{
private:
    int c;

public:
    void getDataC()
    {
        cout << "enter value of c";
        cin >> c;
    }

    void sum()
    {
        int sum = a + b + c;
        cout << "Sum is :" << sum;
    }
};

int main()
{

    C obj;
    obj.getData();
    obj.getDataB();
    obj.getDataC();
    obj.sum();

    return 0;
}
