#include <iostream>
using namespace std;

class Rectangle 
{
private:
    double length;
    double width;

public:
    void setDimensions(double l, double w) 
    {
        length = l;
        width = w;
    }

    bool isSquare() 
    {
        return (length == width);
    }
};

int main() 
{
    Rectangle r;
    r.setDimensions(5.0, 5.0);

    if (r.isSquare()) 
    {
        cout << "The rectangle is a square." << endl;
    } else 
    {
        cout << "The rectangle is not a square." << endl;
    }

    return 0;
}