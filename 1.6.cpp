#include <iostream>
using namespace std;

class MathHelper 
{
public:
    /* Inline function definition inside the class
     The 'inline' keyword suggests to the compiler to replace
     the function call with the actual function code.
     This reduces function call overhead (no stack push/pop,
     no jump to another memory location), making execution faster
     for small, simple functions. */
    inline int square(int n) 
    {
        return n * n;
    }
};

int main() 
{
    MathHelper helper;

    int number = 5;
    cout << "Number: " << number << endl;
    cout << "Square: " << helper.square(number) << endl;

    return 0;
}