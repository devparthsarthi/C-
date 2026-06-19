#include <iostream>
#include <string>
using namespace std;

class Student 
{
public:
    string name;
    int roll;
    float marks;

    void input() 
    {
        cout << "Enter Name: ";
        cin >> name;
        cout << "Enter Roll Number: ";
        cin >> roll;
        cout << "Enter Marks: ";
        cin >> marks;
    }

    void display() 
    {
        cout << "Name: " << name << ", Roll No: " << roll << ", Marks: " << marks << endl;
    }
};

int main() 
{
    Student students[3];

    for (int i = 0; i < 3; i++) 
    {
        cout << "\nEnter details for Student " << i + 1 << endl;
        students[i].input();
    }

    cout << "\n--- Student Records ---" << endl;
    for (int i = 0; i < 3; i++) 
    {
        students[i].display();
    }

    return 0;
}
