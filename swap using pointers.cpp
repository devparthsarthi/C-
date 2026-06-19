#include <iostream>
using namespace std;

int main() {
    int a, b;
    int *p, *q;

    cout << "Enter two numbers: ";
    cin >> a >> b;

    p = &a;
    q = &b;

    int temp = *p;
    *p = *q;
    *q = temp;

    cout << "After swapping:\n";
    cout << "a = " << a << ", b = " << b;

    return 0;
}