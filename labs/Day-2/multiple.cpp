#include <iostream>
using namespace std;

class Person
{
public:
    string name;
    int age;
    Person(string n, int a) : name(n), age(a) {}

    void displayPersonDetails()
    {
        cout << "Name :" << name << ", Age :" << age << endl;
    }
};

class Employee
{
public:
    string company;
    float salary;
    Employee(string c, int s) : company(c), salary(s) {}

    void displayEmployeeDetails()
    {
        cout << "Company :" << company << ", Salary :" << salary << endl;
    }
};

class Student
{
public:
    string university;
    float gpa;
    Student(string u, int g) : university(u), gpa(g) {}

    void displayStudentDetails()
    {
        cout << "University :" << university << ", GPA :" << gpa << endl;
    }
};

class WorkingStudent : public Person, public Employee, public Student
{
public:
    WorkingStudent(string n, int a, string c, float s, string u, float g) : Person(n, a), Employee(c, s), Student(u, g)
    {
    }

    void displayDetails()
    {
        cout << "====Working Student Details=====" << endl;
        displayPersonDetails();
        displayEmployeeDetails();
        displayStudentDetails();
    }
};

int main()
{
    WorkingStudent ws("Vikash Verma", 45, "Wipro", 50000.0, "State University", 3.8);
    ws.displayDetails();
    return 0;
}
