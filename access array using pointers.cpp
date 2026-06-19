#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n];
    int *ptr = arr;

    cout << "Enter array elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> *(ptr + i);
    }

    cout << "Array elements are:\n";
    for (int i = 0; i < n; i++) {
        cout << *(ptr + i) << " ";
    }

    return 0;
}