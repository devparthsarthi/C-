#include <iostream>
using namespace std;

class Circle 
{
public:
    double radius;

    void displayArea();
};

void Circle::displayArea() 
{
    double area = 3.14159 * radius * radius;
    cout << "Radius: " << radius << endl;
    cout << "Area: " << area << endl;
}

int main() 
{
    Circle c;

    c.radius = 4.0;
    c.displayArea();

    return 0;
}