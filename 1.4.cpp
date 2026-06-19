#include <iostream>
using namespace std;

class Rectangle 
{
public:
    double length;
    double width;

    double calculateArea() 
    {
        return length * width;
    }
};

int main() 
{
    Rectangle rect;

    rect.length = 5.0;
    rect.width = 3.0;

    cout << "Length: " << rect.length << endl;
    cout << "Width: " << rect.width << endl;
    cout << "Area: " << rect.calculateArea() << endl;

    return 0;
}