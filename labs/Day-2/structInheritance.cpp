#include <iostream>
using namespace std;


struct Animal{
    string name;
    int age;

    void display(){
        cout<<"Name :"<<name<<"Age :"<<age<<endl;
    }
};

struct Dog:Animal{
    string breed;
    void bark(){
        cout<<name<<" something"<<endl;
    }
};


int main(){

    Dog myDog;
    myDog.name="Buddy";
    myDog.age=3;
    myDog.breed="Pitbull";

    myDog.display();
    cout<<"Breed:"<<myDog.breed<<endl;
    myDog.bark();
    return 0;
}