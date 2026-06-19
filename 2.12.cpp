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
    cout << "Start of main()" << endl;

    Lifecycle obj1;

    {
        Lifecycle obj2;
        cout << "Inside block" << endl;
    }
    cout << "Back in main()" << endl;

    return 0;
}
