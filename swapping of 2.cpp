#include<iostream>
int main()
{
    //Define variables
    int a, b, t;

    //Prompt the user to enter two numbers
    std::cout<<"Enter first number: ";
    std::cin>>a;
    std::cout<<"Enter second number: ";
    std::cin>>b;

    //Display the numbers before swapping
    std::cout<<"Before swapping: "<<std::endl;
    std::cout<<"First number: "<<a<<std::endl;
    std::cout<<"Second number: "<<b<<std::endl;

    //Swapping logic using a temporary variable
    t = a;
    a = b;
    b = t;

    //Display the numbers after swapping
    std::cout<<"After swapping: "<<std::endl;
    std::cout<<"First number: "<<a<<std::endl;
    std::cout<<"Second number: "<<b<<std::endl;

    return 0;
}