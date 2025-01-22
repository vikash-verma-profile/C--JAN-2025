#include <iostream>
using namespace std;

class Myclass{

    private:
    int value;
    const int valueP=90;
    public:
    Myclass(int val=0):value(val){}

    int& getValueM(){return value;} // returninhg a modifiable refernce

    const int& getValueR() const{ return value;}; //returns read-only refrence

    Myclass& setValue(int val){
        value=val;
        return *this; // return refrence to the current object
    }

    void display() const{
        //value=100; // you cannot modify becuse of const
        cout<<"Value"<<value<<endl;
    }

};

int main(){
    // Myclass obj(10);
    // obj.getValueM()=20;
    // cout<<"Udpated Value"<<obj.getValueR()<<endl;
    Myclass obj;
    obj.setValue(10).setValue(20);
    obj.display();
    return 0;
}