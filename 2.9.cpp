#include <iostream>
#include <string>
using namespace std;

class Book 
{
private:
    string title;
    double price;

public:
    Book() 
    {
        title = "Untitled";
        price = 0.0;
    }

    void display() 
    {
        cout << "Title: " << title << endl;
        cout << "Price: $" << price << endl;
    }
};

int main() 
{
    Book b;
    b.display();

    return 0;
}
