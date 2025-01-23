#include <iostream>
#include <fstream>

using namespace std;

struct Employee
{
     int id;
     char name[20];
     float salary;
};
int main()
{   
    Employee emp={101,"Vikash Verma",5000.0};

    // ofstream outfile("employee.dat",ios::binary);
    // outfile.write((char*)&emp,sizeof(emp));//writing binary data
    // outfile.close();

    ifstream infile("employee.dat",ios::binary);
    infile.read((char*)&emp,sizeof(emp));// Reading
    cout<<"ID"<<emp.id<<"Name"<<emp.name;
    infile.close();
    return 0;
}