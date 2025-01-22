#include <iostream>
using namespace std;

class Engine{
    public:
    void startE(){
        cout<<"Engine started"<<endl;
    }

    Engine(){
        cout<<"Hello"<<endl;;
    }
    ~Engine(){
        cout<<"ENgine destroyed"<<endl;;
    }
};

class Car{
    public:
    Engine engine;

    void startC(){
        engine.startE();
    }
    Car(){
        cout<<"Hello Car"<<endl;;
    }
    ~Car(){
        cout<<"Car destroyed"<<endl;;
    }
};

//car has an engine

//Aggregation

// has a partial ownnership

class Department{
    public:
    string department;
};

class Employee{
    public:
    Department * deprtment; // aggregation
};

//Composition (Has a with full ownership)

class Wheel{
    public:
        Wheel(){

            cout<<"Wheel created"<<endl;
        }
        ~Wheel(){
            cout<<"wheel destroyed"<<endl;
        }
};
class CarW{
    private:
     Wheel wheel;
     public:
      CarW(){
        cout<<"Car Created"<<endl;
      }
      ~CarW(){
        cout<<"Car Destroyed"<<endl;
      }
};

int main(){

    //CarW c;

    Car c1;
    c1.startC();
    return 0;
};