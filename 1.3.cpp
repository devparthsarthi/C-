#include <iostream>
using namespace std;

class Laptop 
{
public:
    string brand;
    double price;
};

int main() 
{
    Laptop myLaptop;

    myLaptop.brand = "Dell";
    myLaptop.price = 98000;

    cout << "Brand: " << myLaptop.brand << endl;
    cout << "Price: $" << myLaptop.price << endl;

    return 0;
}