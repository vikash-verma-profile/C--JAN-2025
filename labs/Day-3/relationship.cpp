#include <iostream>
using namespace std;

// Association
class Professor
{

public:
    string name;
    Professor(const string &name) : name(name) {}

    void display()
    {
        cout << "Professor" << name << endl;
    }
};

// Aggregation
class Department
{
public:
    string name;
    Professor *professers;
    Department(const string &name) : name(name) {}
    void addProfessor(Professor *professor)
    {
    }

    void display() const
    {
        cout << "Department" << name << endl;
        professers->display();
    }
};

// composition
class Classroom
{
public:
    string roomNumer;

    Classroom(const string &roomNumer) : roomNumer(roomNumer)
    {
    }

    void display() const
    {
        cout << "Classroom" << roomNumer << endl;
    }
};
class Building
{
public:
    string name;
    Classroom classrooms;
    Building(const string &name) : name(name)
    {
    }

    void addClassroom(string &roomNumber)
    {
        classrooms.roomNumer = roomNumber;
    }
    void display()
    {
        cout << "Building" << name << endl;
        classrooms.display();
    }
};