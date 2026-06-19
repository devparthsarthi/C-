#include <iostream>
using namespace std;

class Point 
{
public:
    double x;
    double y;
};

Point midpoint(Point p1, Point p2) 
{
    Point mid;
    mid.x = (p1.x + p2.x) / 2;
    mid.y = (p1.y + p2.y) / 2;
    return mid;
}

int main() 
{
    Point p1, p2;

    p1.x = 2;
    p1.y = 4;

    p2.x = 6;
    p2.y = 8;

    Point center = midpoint(p1, p2);

    cout << "Midpoint: (" << center.x << ", " << center.y << ")" << endl;

    return 0;
}