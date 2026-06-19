#include <iostream>

int main() {
    int numTerms;

    // Prompt the user to enter the number of terms
    std::cout << "Enter the number of terms in the Fibonacci series: ";
    std::cin >> numTerms;

    // First two terms of the Fibonacci series
    int firstTerm = 0, secondTerm = 1;
    int nextTerm;

    // Display the first two terms
    std::cout << "Fibonacci Series: " << firstTerm << ", " << secondTerm;

    // Generate the Fibonacci series up to the specified number of terms
    for(int i = 2; i < numTerms; ++i) {
        nextTerm = firstTerm + secondTerm;
        std::cout << ", " << nextTerm;
        firstTerm = secondTerm;
        secondTerm = nextTerm;
    }

    std::cout << std::endl;

    return 0;
}