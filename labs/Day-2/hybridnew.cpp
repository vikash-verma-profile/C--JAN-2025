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

class Employee : virtual public Person
{
public:
    string department;
    Employee(string n, int a, string dept) : Person(n, a), department(dept) {}

    void displayEmployeeDetails()
    {
        cout << "Department :" << department << endl;
    }
};

class Student : virtual public Person
{
public:
    string course;

    Student(string n, int a, string c) : Person(n, a), course(c) {}

    void displayStudentDetails()
    {
        cout << "Course :" << course << endl;
    }
};

class TeachingAssistant : public Employee, public Student
{
public:
    int hoursWorked;
    TeachingAssistant(string n, int a, string dept, string c, int hw) : Person(n, a), Employee(c, a, dept), Student(n, a, c), hoursWorked(hw)
    {
    }

    void displayDetails()
    {
        cout << "====Teaching Assistant Details=====" << endl;
        displayPersonDetails();
        displayEmployeeDetails();
        displayStudentDetails();
        cout << "Hours Worked" << hoursWorked << " hours/week" << endl;
    }
};

int main()
{
    TeachingAssistant ta("Vikash Verma", 45, "Computer Science", "Data Structures", 20);
    ta.displayDetails();
    return 0;
}
