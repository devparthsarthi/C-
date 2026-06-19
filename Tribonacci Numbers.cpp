#include <iostream>
using namespace std;

int printTribRec(int n) {
    if (n == 0 || n == 1 || n == 2)
        return 0;
    if (n == 3)
        return 1;
    else
        return printTribRec(n - 1) + 
               printTribRec(n - 2) + 
               printTribRec(n - 3);
}

void printTrib(int n) {
    for (int i = 1; i <= n; i++)
        cout << printTribRec(i) << " ";
}

int main() {
    int n;
    cout << "Enter the number of Tribonacci numbers to print: ";
    cin >> n;

    if (n <= 0) {
        cout << "Please enter a positive integer." << endl;
        return 1;
    }

    printTrib(n);
    return 0;
}
