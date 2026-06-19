#include <iostream>
using namespace std;

class Employee 
{
    int id;
    string name;

public:
    Employee(int i, string n) 
    {
        id = i;
        name = n;
    }

    Employee(Employee &e) 
    {
        id = e.id;
        name = e.name;
    }

    void display() 
    {
        cout << "ID: " << id << endl;
        cout << "Name: " << name << endl;
    }
};

int main() 
{
    int id;
    string name;

    cout << "Enter employee ID and name: ";
    cin >> id >> name;

    Employee emp1(id, name);
    Employee emp2 = emp1;

    cout << "\nEmployee 1 Details:\n";
    emp1.display();

    cout << "\nEmployee 2 Details (Copied Object):\n";
    emp2.display();

    return 0;
}