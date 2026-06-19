#include <iostream>
using namespace std;

class Box 
{
    float length, width, height;

public:
    Box(float l, float w = 5.0, float h = 5.0) 
    {
        length = l;
        width = w;
        height = h;
    }

    void display() 
    {
        cout << "Length = " << length << endl;
        cout << "Width  = " << width << endl;
        cout << "Height = " << height << endl;
    }
};

int main() 
{
    float l, w, h;
    char choice;

    cout << "Enter length: ";
    cin >> l;

    cout << "Do you want to enter width and height? (y/n): ";
    cin >> choice;

    if (choice == 'y' || choice == 'Y') 
    {
        cout << "Enter width and height: ";
        cin >> w >> h;
        Box b1(l, w, h);
        b1.display();
    } 
    else 
    {
        Box b2(l);
        b2.display();
    }

    return 0;
}
