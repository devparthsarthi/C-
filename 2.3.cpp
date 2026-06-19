#include <iostream>
using namespace std;

class Box 
{
private:
    double length;
    double width;
    double height;

public:
    Box(double l, double w = 2.0, double h = 3.0) 
    {
        length = l;
        width = w;
        height = h;
    }

    void display() 
    {
        cout << "Length: " << length << endl;
        cout << "Width: " << width << endl;
        cout << "Height: " << height << endl;
    }
};

int main() 
{
    Box b1(5.0);
    Box b2(4.0, 6.0, 8.0);

    cout << "Box 1 Dimensions:" << endl;
    b1.display();

    cout << "\nBox 2 Dimensions:" << endl;
    b2.display();

    return 0;
}