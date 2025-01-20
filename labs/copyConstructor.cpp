#include <iostream>

using namespace std;

class Employee
{

public:
    int EmpID;

    Employee(){

    }
    Employee(Employee& emp){
        EmpID=emp.EmpID;
        cout<<"Calling Copy Contsructor"<<endl;
    }
};

int main()
{
    Employee emp1;
    emp1.EmpID=101;
    cout<<"Employee Id for EMPLOYEE1 is "<<emp1.EmpID<<endl;
    Employee emp2(emp1);
    cout<<"Employee Id for EMPLOYEE2 is "<<emp2.EmpID<<endl;
    return 0;
}