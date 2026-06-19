#include <iostream>
#include <string>
using namespace std;

class SmartPhone 
{
private:
    string brand;
    string model;
    int ram;

public:
    SmartPhone(string b) 
    {
        brand = b;
        model = "Unknown";
        ram = 0;
    }

    SmartPhone(string b, string m, int r) 
    {
        brand = b;
        model = m;
        ram = r;
    }

    void display() 
    {
        cout << "Brand: " << brand << endl;
        cout << "Model: " << model << endl;
        cout << "RAM: " << ram << " GB" << endl;
        cout << "----------------------" << endl;
    }
};

int main() 
{
    SmartPhone phone1("Apple");
    SmartPhone phone2("Samsung", "Galaxy S23", 8);

    phone1.display();
    phone2.display();

    return 0;
}