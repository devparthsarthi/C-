#include <iostream>
using namespace std;

struct Student {
    int roll;
    char name[50];
    float marks;
};

int main() {
    Student s;

    cout << "Enter roll number: ";
    cin >> s.roll;
    cout << "Enter name: ";
    cin >> s.name;
    cout << "Enter marks: ";
    cin >> s.marks;

    cout << "\nStudent Details:\n";
    cout << "Roll: " << s.roll << endl;
    cout << "Name: " << s.name << endl;
    cout << "Marks: " << s.marks << endl;

    return 0;
}