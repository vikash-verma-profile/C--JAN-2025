#include <iostream>

using namespace std;

class MyClass{
    private:
    mutable int someValue;
    int value;
    public:
    MyClass(int val):value(val),someValue(0){}

    int getSomeValue() const{
        someValue++;
        return someValue;
    }

    void setValue(int val){
        value=val;
    }
    void display() const{
        cout<<"Value :"<<value<<" someValue"<<someValue<<endl;
    }
};

int main(){

    const MyClass obj(10);
    obj.display();

    obj.getSomeValue();
    obj.display();

    return 0;
}