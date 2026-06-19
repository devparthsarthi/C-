#include<iostream>

int main()
{
    //Define variables
    double a, b;

    //Prompt the user to enter two numbers
    std::cout<<"Enter the first number: ";
    std::cin>>a;
    std::cout<<"Enter the second number: ";
    std::cin>>b;

    //Perform Athematic Operation
    double sum = a + b;
    double diff = a - b;
    double mul = a * b;
    double div = a / b;

    int mod = static_cast<int>(a) % static_cast<int>(b);
    // Modulus works only with integer operands

    //Print the results
    std::cout<<"sum: "<<sum<<std::endl;
    std::cout<<"Difference: "<<diff<<std::endl;
    std::cout<<"Product: "<<mul<<std::endl;
    std::cout<<"Division: "<<div<<std::endl;
    std::cout<<"Modulus: "<<mod<<std::endl;

    return 0;
}