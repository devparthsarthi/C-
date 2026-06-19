#include<iostream>

// Function to divide two numbers
double divide(int num, int den)
{
    if (den == 0)
    {
        // Throw an exception if the denominator is zero
        throw "Division by zero error";
    }
    return static_cast<double>(num) / den;
}

int main()
{
    int num, den;

    // Prompt the user to enter numerator and denominator
    std::cout<<"Enter numerator: ";
    std::cin>> num;
    std::cout<<"Enter denominator: ";
    std::cin>> den;

    try
    {
        // Call the divide function inside a try block
        double result = divide(num, den);
        std::cout<<"Result of division: "<<result<<std::endl;
    }
    catch(const char* error)
    {
        // Catch the exception thrown by the divide function
        std::cerr<<"Exception caught"<<error<<std::endl;
    }
    
    return 0;
}