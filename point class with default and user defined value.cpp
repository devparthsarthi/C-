#include <iostream>
using namespace std;

class Point 
{
    int x, y;

public:
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

    void show() 
    {
        cout << "Point = (" << x << ", " << y << ")" << endl;
    }
};

int main() 
{
    int x, y;

    cout << "Enter x and y coordinates: ";
    cin >> x >> y;

    Point p1;
    cout << "Default Initialized Point: ";
    p1.show();

    Point p2(x, y);
    cout << "User Initialized Point: ";
    p2.show();

    return 0;
}
