#include <iostream>
using namespace std;

class Circle 
{
private:
    double radius;

public:
    void setRadius(double r) 
    {
        radius = r;
    }

    double calculateArea() 
    {
        return 3.14159 * radius * radius;
    }

    double calculateCircumference() 
    {
        return 2 * 3.14159 * radius;
    }
};

int main() 
{
    Circle c;
    c.setRadius(5.0);

    cout << "Area: " << c.calculateArea() << endl;
    cout << "Circumference: " << c.calculateCircumference() << endl;

    return 0;
}