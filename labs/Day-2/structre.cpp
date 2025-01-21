#include <iostream>
using namespace std;

//public
struct Person{
    string name;
    int age;
    float height;

    void Print(){
        cout<<name;
    }
};

//private
class PersonC{
    string name;
    int age;
    float height;
};
int main()
{
    Person person1;
    person1.name="Vikash";
    person1.age=45;
    person1.height=5.6;



    // PersonC person;
    // person.name="Vikash";

    Person people[2]={{"Vikash",25,5.8},{"Rakesh",80,7.1}};
    Person person3={"Rakesh",56,6.9};
    person3.Print();
    Person *ptr=&person3;
    cout<<ptr->name<<endl;
    cout<<"Name :"<<person1.name<<endl;
    cout<<"Age :"<<person1.age<<endl;
    cout<<"Height :"<<person1.height<<endl;
    return 0;
}