#include <iostream>

using namespace std;

// class named 'Person'
class Person
{

private:
    string name;

public:
    // Data members

    int age;

    // member function

    void setName(string p_name)
    {
        name = p_name;
    }
    void Print();
};
void Person::Print()
{
    cout << "Hi ,my name is " << name << " and I am of " << age << " Year old ." << endl;
}
int main()
{
    Person person1;
    person1.setName("Vikash Verma");
    person1.age = 30;

    // call or print
    person1.Print();

    return 0;
}
