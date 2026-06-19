#include <iostream>
using namespace std;

class Point 
{
public:
    int x, y;

    Point() 
    {
        x = 0;
        y = 0;
    }

    Point(int a, int b) 
    {
        x = a;
        y = b;
    }

    void display() 
    {
        cout << "(" << x << ", " << y << ")" << endl;
    }
};

int main() 
{
    Point p1;
    Point p2(5, 10);

    cout << "Point 1: ";
    p1.display();

    cout << "Point 2: ";
    p2.display();
    
    return 0;
}