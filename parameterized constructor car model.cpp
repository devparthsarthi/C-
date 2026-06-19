#include <iostream>
using namespace std;

class Car 
{
    string brand, model;
    int year;

public:
    Car(string b, string m, int y) 
    {
        brand = b;
        model = m;
        year = y;
    }

    void display() 
    {
        cout << "Brand: " << brand << endl;
        cout << "Model: " << model << endl;
        cout << "Year: " << year << endl;
    }
};

int main() 
{
    string b, m;
    int y;

    cout << "Enter brand, model and year: ";
    cin >> b >> m >> y;

    Car c(b, m, y);
    c.display();

    return 0;
}
