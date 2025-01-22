#include <iostream>
using namespace std;

class Animal
{
public:
    virtual Animal *clone() const // base class clone method
    {
        return new Animal(*this);
    }

    virtual void speak() const
    {
        cout << "I ma an Animal" << endl;
    }
};

class Dog : public Animal
{
public:
    Dog *clone() const override
    { // covarient return type
        return new Dog(*this);
    }
    void speak() const override
    {
        cout << "I am a dog" << endl;
    }
};

void testCloning(const Animal &animal)
{
    Animal *clonedAnimal = animal.clone();
    clonedAnimal->speak();
}
int main()
{
    Animal genericAnimal;
    Dog dog;
    cout << "Cloning a genric animal"<<endl;
    testCloning(genericAnimal);

    cout << "Cloning a dog";
    testCloning(dog);

    return 0;
}