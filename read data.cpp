#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream file;
    char ch;

    file.open("sample.txt");

    cout << "File contents:\n";
    while (file.get(ch)) {
        cout << ch;
    }

    file.close();
    return 0;
}