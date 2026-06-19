#include <iostream>
using namespace std;

class Lifecycle 
{
public:
    Lifecycle() 
    {
        cout << "Constructor Called" << endl;
    }

    ~Lifecycle() 
    {
        cout << "Destructor Called" << endl;
    }
};

int main() 
{
    cout << "Object creation starts" << endl;
    Lifecycle obj;
    cout << "Main function ends" << endl;
    return 0;
}
