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

class Dog : public Animal
{
public:
    void sound() override
    {
        cout << "Dog Barks" << endl;
    }
    void print();
};

void Dog::print()
{
    cout << "I am print method";
}
class Cat : public Animal
{
public:
    void sound() override
    {
        cout << "Cat meows" << endl;
    }
};

int main()
{

    Animal *animal;
    Dog dog;
    Cat cat;

    animal = &dog;
    animal->sound();
    cout << "Calling base class" << endl;
    animal->Animal::sound();
    // animal->print();

    animal = &cat;
    animal->sound();

    // Animal animal;
    // Dog dog;
    // Cat cat;
    // animal=dog;
    // animal.sound();
    // animal.print();

    return 0;
}