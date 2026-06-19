#include <iostream>
using namespace std;

class Person 
{
public:
    string name;
    int age;

    void display() 
    {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

int main() 
{
    Person p;
    Person* ptr = &p;

    ptr->name = "Alice";
    ptr->age = 25;

    ptr->display();

    return 0;
}