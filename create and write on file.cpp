#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream file;
    file.open("sample.txt");

    file << "This is a sample file.\n";
    file << "Writing data into a file using C++.";

    file.close();
    cout << "Data written to file successfully.";

    return 0;
}