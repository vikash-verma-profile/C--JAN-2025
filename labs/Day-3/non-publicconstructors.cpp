#include <iostream>

using namespace std;

class SampleClass
{

private:
    static SampleClass *instance;
    SampleClass(){
        cout<<"Instance Created";
    };

public:
    void print()
    {
        cout << "hello";
    }
    static SampleClass *getInstance()
    {
        if (instance == nullptr)
        {
            instance = new SampleClass();
        }
        return instance;
    }
};

SampleClass *SampleClass::instance = nullptr;
int main()
{

    SampleClass *obj = SampleClass::getInstance();
    obj->print();
    return 0;
}