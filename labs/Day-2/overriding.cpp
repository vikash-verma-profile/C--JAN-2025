#include <iostream>
using namespace std;

class Animal
{
public:
    virtual void sound()
    {
        cout << "Animal makes a sound" << endl;
    }
};

class Dog:public Animal{
    public:
    void sound() override{
        cout<<"Dog Barks"<<endl;
    }
};
class Cat:public Animal{
    public:
       void sound() override{
        cout<<"Car meows"<<endl;
    }
};

int  main()
{

    Animal *animal;
    Dog dog;
    Cat cat;
    
    animal=&dog;
    animal->sound();

    animal=&cat;
    animal->sound();


    return 0;
}