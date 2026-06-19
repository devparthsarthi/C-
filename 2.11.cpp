#include <iostream>
#include <string>
using namespace std;

class Employee 
{
private:
    string name;
    int id;
    double salary;

public:
    Employee(string n, int i, double s) 
    {
        name = n;
        id = i;
        salary = s;
    }

    Employee(const Employee &e) 
    {
        name = e.name;
        id = e.id;
        salary = e.salary;
        cout << "Copy Constructor Called!" << endl;
    }

    void display() 
    {
        cout << "Name: " << name << endl;
        cout << "ID: " << id << endl;
        cout << "Salary: $" << salary << endl;
    }
};

int main() 
{
    Employee emp1("Alice", 101, 50000);
    
    Employee emp2 = emp1;

    cout << "\nEmployee 1 Details:" << endl;
    emp1.display();

    cout << "\nEmployee 2 Details (Copied):" << endl;
    emp2.display();

    return 0;
}
