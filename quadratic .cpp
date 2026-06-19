#include <iostream>
#include <cmath>
int main() {
    double a, b, c;
    double discriminant, root1, root2;
    // Prompt the user to enter the coefficients of the quadratic equation
    std::cout << "Enter coefficients a, b, and c: ";
    std::cin >> a >> b >> c;
    // Calculate the discriminant
    discriminant = b * b - 4 * a * c;
    // Check if the discriminant is positive, negative, or zero
    if (discriminant > 0) {
        // Two real and distinct roots
        root1 = (-b + std::sqrt(discriminant)) / (2 * a);
        root2 = (-b - std::sqrt(discriminant)) / (2 * a);
        std::cout << "Roots are real and distinct." << std::endl;
        std::cout << "Root 1 = " << root1 << std::endl;
        std::cout << "Root 2 = " << root2 << std::endl;
    } else if (discriminant == 0) {
        // Two real and equal roots
        root1 = -b / (2 * a);
        std::cout << "Roots are real and equal." << std::endl;
        std::cout << "Root 1 = Root 2 = " << root1 << std::endl;
    } else {
             double realPart = -b / (2 * a);
        double imaginaryPart = std::sqrt(-discriminant) / (2 * a);
        std::cout << "Roots are complex and imaginary." << std::endl;
        std::cout << "Root 1 = " << realPart << " + " << imaginaryPart << "i" << std::endl;
        std::cout << "Root 2 = " << realPart << " - " << imaginaryPart << "i" << std::endl;
    }
    return 0;
}