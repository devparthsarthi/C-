#include <iostream>
using namespace std;

class Buffer 
{
private:
    int* data;
    int size;

public:
    Buffer(int s) 
    {
        size = s;
        data = new int[size];
        cout << "Memory allocated for " << size << " integers." << endl;
    }

    void input() 
    {
        for (int i = 0; i < size; i++) 
        {
            cout << "Enter value " << i + 1 << ": ";
            cin >> data[i];
        }
    }

    void display() 
    {
        cout << "Stored values: ";
        for (int i = 0; i < size; i++) 
        {
            cout << data[i] << " ";
        }
        cout << endl;
    }

    ~Buffer() 
    {
        delete[] data;
        cout << "Memory released." << endl;
    }
};

int main() 
{
    int n;
    cout << "Enter size of buffer: ";
    cin >> n;

    Buffer b(n);
    b.input();
    b.display();

    return 0;
}
