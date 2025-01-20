#include <iostream>
#include <vector>

using namespace std;

class Student
{

private:
int* data;
public:
    //constructor
    Student(int value){
        data=new int;
        *data=value;
        cout<<"Constuctor is called"<<value<<endl;
    };

    //copy constructor
    Student(Student& source):Student(*source.data){
        cout<<"Copy constuctore"<<"Deep copy"<<*source.data<<endl;
    }

    //Move constructor
    Student(Student&& source):data{source.data}{
        //Copying the data
        cout<<"MOve Conctsructor"<<*source.data<<endl;
        source.data=nullptr;
    }
    ~Student(){
      
    }

};

int main()
{
    vector<Student> students;
    students.push_back(Student{10});
     students.push_back(Student{20});
    return 0;
}