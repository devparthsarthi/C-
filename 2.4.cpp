#include <iostream>
using namespace std;

class Resource 
{
public:
    Resource() 
    {
        cout << "Resource acquired." << endl;
    }

    ~Resource() 
    {
        cout << "Resource released (object out of scope)." << endl;
    }
};

int main() 
{
    cout << "Entering main function." << endl;

    {
        Resource r;
        cout << "Inside block." << endl;
    }

    cout << "Back in main function." << endl;

    return 0;
}