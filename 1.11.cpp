#include <iostream>
#include <string>
using namespace std;

class Student 
{
private:
    string name;
    int roll_no;
    float marks;

public:
    void inputData() 
    {
        cout << "Enter name: ";
        getline(cin, name);

        cout << "Enter roll number: ";
        cin >> roll_no;

        cout << "Enter marks: ";
        cin >> marks;

        cin.ignore();
    }

    void displayData() 
    {
        cout << "\n--- Student Information ---" << endl;
        cout << "Name: " << name << endl;
        cout << "Roll Number: " << roll_no << endl;
        cout << "Marks: " << marks << endl;
    }
};

int main() 
{
    Student s;

    s.inputData();
    s.displayData();

    return 0;
}