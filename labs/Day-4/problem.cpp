#include <iostream>
#include <fstream>
#include <vector>
#include <string>

using namespace std;

struct Employee
{
    int id;
    string name;
    double salary;
};

// Function to read employees from a file
void readFile(vector<Employee> &employees, const string &filename)
{
    ifstream inFile(filename, ios::binary);
    if (!inFile)
    {
        cout << "Data file not found or unable to open." << endl;
        return;
    }

    while (true)
    {
        Employee emp;

        // Read employee ID
        if (!inFile.read((char *)&emp.id, sizeof(emp.id)))
            break;

        // Read the size of the name
        size_t nameSize;
        if (!inFile.read((char *)&nameSize, sizeof(nameSize)))
            break;

        // Validate the name size
        if (nameSize > 1000)
        {
            cout << "Corrupted data detected. Exiting read." << endl;
            break;
        }

        // Read the name
        emp.name.resize(nameSize);
        if (!inFile.read(&emp.name[0], nameSize))
            break;

        // Read the salary
        if (!inFile.read((char *)&emp.salary, sizeof(emp.salary)))
            break;

        // Add the employee to the vector
        employees.push_back(emp);
    }

    inFile.close();
}

// Function to save employees to a file
void saveFile(const vector<Employee> &employees, const string &filename)
{
    ofstream outFile(filename, ios::binary);
    if (!outFile)
    {
        cout << "Error opening file for writing." << endl;
        return;
    }

    for (const auto &emp : employees)
    {
        // Write employee ID
        outFile.write((char *)&emp.id, sizeof(emp.id));

        // Write the size of the name
        size_t nameSize = emp.name.size();
        outFile.write((char *)&nameSize, sizeof(nameSize));

        // Write the name
        outFile.write(emp.name.c_str(), nameSize);

        // Write the salary
        outFile.write((char *)&emp.salary, sizeof(emp.salary));
    }

    outFile.close();
}

// Function to insert a new employee
void insertEmployee(vector<Employee> &employees)
{
    Employee emp;
    cout << "Enter Employee ID: ";
    cin >> emp.id;
    cin.ignore();
    cout << "Enter Employee Name: ";
    getline(cin, emp.name);
    cout << "Enter Employee Salary: ";
    cin >> emp.salary;

    employees.push_back(emp);
    cout << "Employee added successfully." << endl;
}

// Function to update an existing employee
void updateEmployee(vector<Employee> &employees)
{
    int id;
    cout << "Enter Employee ID to update: ";
    cin >> id;

    for (auto &emp : employees)
    {
        if (emp.id == id)
        {
            cin.ignore();
            cout << "Enter new Employee Name: ";
            getline(cin, emp.name);
            cout << "Enter new Employee Salary: ";
            cin >> emp.salary;
            cout << "Employee updated successfully." << endl;
            return;
        }
    }

    cout << "Employee with ID " << id << " not found." << endl;
}

// Function to list all employees
void listEmployees(const vector<Employee> &employees)
{
    if (employees.empty())
    {
        cout << "No employees to display." << endl;
        return;
    }

    cout << "\nEmployee List:" << endl;
    cout << "ID\tName\t\tSalary" << endl;
    for (const auto &emp : employees)
    {
        cout << emp.id << "\t" << emp.name << "\t\t" << emp.salary << endl;
    }
}

// Main menu
int main()
{
    const string filename = "emp_data.dat";
    vector<Employee> employees;

    // Read data from the file
    readFile(employees, filename);

    int option;
    do
    {
        cout << "\nMenu:\n";
        cout << "1. Insert Employee\n";
        cout << "2. Update Employee\n";
        cout << "3. List Employees\n";
        cout << "4. Exit\n";
        cout << "Enter your option: ";
        cin >> option;

        switch (option)
        {
        case 1:
            insertEmployee(employees);
            break;
        case 2:
            updateEmployee(employees);
            break;
        case 3:
            listEmployees(employees);
            break;
        case 4:
            saveFile(employees, filename);
            cout << "Data saved to file. Exiting..." << endl;
            break;
        default:
            cout << "Invalid option. Please try again." << endl;
        }
    } while (option != 4);

    return 0;
}
