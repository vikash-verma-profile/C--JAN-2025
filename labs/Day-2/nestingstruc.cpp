#include <iostream>
using namespace std;

struct Address{
    string city;
    int pin;
};

struct Student{
    string name;
    int roll;
    Address addr;
};

int main(){
    Student student1={"Vikash",101,{"Pune",12345}};
    cout<<"City: "<<student1.addr.city<<endl;
    return 0;
};