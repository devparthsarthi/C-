#include <iostream>
using namespace std;

class Alpha {
    int num;
public:
    Alpha() 
    {
        cout << "Object of class Alpha is created automatically!" << endl;
    }
};
int main() 
{
    Alpha obj();
    return 0;
}
