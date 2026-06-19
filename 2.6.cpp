#include <iostream>
using namespace std;

int main() 
{
    int x = 10;

    int* ptr = &x;
    int& ref = x;

    cout << "Value of x: " << x << endl;

    cout << "Pointer (address of x): " << ptr << endl;
    cout << "Value using pointer (*ptr): " << *ptr << endl;

    cout << "Value using reference (ref): " << ref << endl;

    *ptr = 20;
    cout << "\nAfter modifying via pointer:" << endl;
    cout << "x = " << x << ", ref = " << ref << endl;

    ref = 30;
    cout << "\nAfter modifying via reference:" << endl;
    cout << "x = " << x << ", *ptr = " << *ptr << endl;

    return 0;
}
