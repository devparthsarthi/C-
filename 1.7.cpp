#include <iostream>
using namespace std;

class Visitor 
{
private:
    static int count;

public:
    Visitor() 
    {
        count++;
        cout << "Visitor entered. Total visitors: " << count << endl;
    }

    static int getCount() 
    {
        return count;
    }
};

int Visitor::count = 0;

int main() 
{
    Visitor v1;
    Visitor v2;
    Visitor v3;

    cout << "Final visitor count: " << Visitor::getCount() << endl;

    return 0;
}