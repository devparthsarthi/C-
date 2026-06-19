#include <iostream>
using namespace std;

class PointerReference 
{
    int x;
    int *p;
    int &r;

public:
    PointerReference(int val) : x(val), r(x) 
    {
        p = &x;

        cout << "Inside Constructor\n";
        cout << "Value using pointer: " << *p << endl;
        cout << "Value using reference: " << r << endl;
    }

    ~PointerReference() 
    {
        cout << "Inside Destructor\n";
        cout << "Address stored in pointer: " << p << endl;
        cout << "Address using reference: " << &r << endl;
    }
};

int main() 
{
    PointerReference obj(10);
    return 0;
}
