#include <iostream>
using namespace std;

class Alpha 
{
public:
    Alpha() 
    {
        cout << "Alpha object has been created!" << endl;
    }
};

int main() 
{
    Alpha a1;
    return 0;
}
