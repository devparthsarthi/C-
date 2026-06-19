#include <iostream>

// Class template for a generic Pair
template <typename T1, typename T2>
class Pair {
private:
    T1 first;
    T2 second;

public:
    // Constructor
    Pair(const T1& f, const T2& s) : first(f), second(s) {}

    // Method to get the first element
    T1 getFirst() const {
        return first;
    }

    // Method to get the second element
    T2 getSecond() const {
        return second;
    }
};

int main() {
    // Creating Pair objects with different data types
    Pair<int, double> pair1(5, 3.14);
    Pair<std::string, char> pair2("hello", 'a');

    // Displaying the elements of pair1
    std::cout << "Pair 1: First element = " << pair1.getFirst() << ", Second element = " << pair1.getSecond() << std::endl;

    // Displaying the elements of pair2
    std::cout << "Pair 2: First element = " << pair2.getFirst() << ", Second element = " << pair2.getSecond() << std::endl;

    return 0;
}