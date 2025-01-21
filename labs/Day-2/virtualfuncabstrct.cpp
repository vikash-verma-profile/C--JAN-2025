#include <iostream>
using namespace std;

//animal is abstract
class  Animal{
    public:
     virtual void sound()=0;//pure virtual

     void sleep(){
        cout<<"Sleeping"<<endl;
     }
};

class Cat:public Animal{
    public:
    void sound() override{
        cout<<"Cat meows"<<endl;
    }
};

class Dog:public Animal{
    public:
    void sound() override{
        cout<<"Dog Barks"<<endl;
    }
};
int main(){
    Animal* animal;
    //Animal animal;
    Dog dog;
    Cat cat;
    animal=&dog;
    animal->sound();

    animal=&cat;
    animal->sound();

    return 0;
}