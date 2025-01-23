#include <iostream>
#include <string>
#include <memory>
#include <vector>

using namespace std;

/*
class Animal
{
public:
    virtual void eat()=0 ;
    virtual void fly()=0 ;
    virtual ~Animal()=default;
};

class Dog:public Animal{
    public:
    void eat() override{
        cout<<"Dog is eating"<<endl;
    }
    void fly() override{
      //
    }
};
*/
class Eater
{
public:
    virtual void eat() = 0;
    virtual ~Eater() = default;
};
class Flyer
{
public:
    virtual void fly() = 0;
    virtual ~Flyer() = default;
};
class Dog : public Eater
{
public:
    void eat() override
    {
        cout << "Dog is eating" << endl;
    }
};

class Bird : public Eater, public Flyer
{
public:
    void eat() override
    {
        cout << "Bird is eating" << endl;
    }
    void fly() override
    {
        cout << "Bird is flying" << endl;
    }
};
int main()
{
    Dog dog;
    dog.eat();
    Bird bird;
    bird.eat();
    bird.fly();
    return 0;
}