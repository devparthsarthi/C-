#include<iostream>
using namespace std;

int main()
{
    int a = 10, b = 0;   // predefined numbers
    char op = '/';       // predefined operator

    try
    {
        switch(op)
        {
            case '+':
                cout << "Result: " << a + b << endl;
                break;

            case '-':
                cout << "Result: " << a - b << endl;
                break;

            case '*':
                cout << "Result: " << a * b << endl;
                break;

            case '/':
                if(b == 0)
                {
                    throw "Division by zero error";
                }
                cout << "Result: " << a / b << endl;
                break;

            default:
                throw "Invalid operator";
        }
    }
    catch(const char* msg)
    {
        cout << "Exception caught: " << msg << endl;
    }

    cout << "Program continues..." << endl;

    return 0;
}