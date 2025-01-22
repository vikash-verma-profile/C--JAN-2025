#include <iostream>
using namespace std;

class Animal
{
public:
    virtual ~Animal() {}
};
class Dog : public Animal
{
public:
    void bark() const
    {
        cout << "some barking"<<endl;
    }
};
class Cat : public Animal
{
public:
    void meow() const
    {
        cout << "some meow"<<endl;
    }
};
int main()
{
    Animal *animal = new Dog();
    cout << "Atual type" << typeid(*animal).name() << endl;

    if (Dog *dog = dynamic_cast<Dog *>(animal))
    {
        dog->bark();
    }
    else
    {
        cout << "This is not a Dog \n";
    }

    if (Cat *cat = dynamic_cast<Cat *>(animal))
    {
        cat->meow();
    }
    else
    {
        cout << "This is not a Cat \n";
    }
    return 0;
}
