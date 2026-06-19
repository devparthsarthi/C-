#include <iostream>
using namespace std;

int main() 
{
    int numbers[5];

    cout << "Enter 5 integers:" << endl;

    for (int i = 0; i < 5; i++) 
    {
        cin >> numbers[i];
    }

    cout << "You entered:" << endl;

    for (int i = 0; i < 5; i++)
    {
        cout << numbers[i] << " ";
    }

    return 0;
}
