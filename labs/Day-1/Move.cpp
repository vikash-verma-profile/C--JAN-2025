#include <iostream>
#include <utility> //For using std::move

using namespace std;

class MoveExample
{

private:
    int* value;
public:
    MoveExample():value(new int(0)) { cout << "Default constrcutor \n"<<*value<<endl; }
    MoveExample(int v):value(new int(v)) { }
    MoveExample(MoveExample&& other):value(other.value) { cout << "Move constuctor \n"<<*value<<endl; }
};

int main()
{

    MoveExample temp(10);                    // lValue
    MoveExample obj = std::move(temp); // temp is tearted as an rValue
    return 0;
}