#include <iostream>
using namespace std;

class Resource 
{
public:
    Resource() 
    {
        cout << "Resource acquired" << endl;
    }

    ~Resource() 
    {
        cout << "Resource released (out of scope)" << endl;
    }
};

int main() 
{
    cout << "Inside main block" << endl;
    Resource r;
    cout << "End of main block" << endl;
    return 0;
}