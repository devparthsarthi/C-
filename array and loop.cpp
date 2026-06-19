#include <iostream>
using namespace std;


class ArrayDemo 
{
    int arr[5];

public:
    ArrayDemo() 
    {
        cout << "Enter 5 integers:\n";
        for (int i = 0; i < 5; i++) 
        {
            cin >> arr[i];
        }
    }

    ~ArrayDemo()
    {
        cout << "Array elements are:\n";
        for (int i = 0; i < 5; i++) 
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main() 
{
    ArrayDemo obj;
    return 0;
}
