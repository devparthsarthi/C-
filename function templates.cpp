#include <iostream>
#include <string>

// Function template to find the maximum of two values
template <typename T>
T max(T a, T b) {
    
    return (a > b) ? a : b;
}

int main() {
    // Call max function with different data types
    std::cout << "Maximum of 5 and 7 (integers): " << max(5, 7) << std::endl;

    std::cout << "Maximum of 3.14 and 2.71 (floats): " << max(3.14f, 2.71f) << std::endl;

    std::cout << "Maximum of 'hello' and 'world' (strings): " << max(std::string("hello"), std::string("world")) << std::endl;

    return 0;
}