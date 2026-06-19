#include<iostream>

int main()
{
    //Define variables to store the two numbers
    int a, b;

    //Prompt the user to enter the first number
    std::cout<<"Enter the first number: ";
    std::cin>>a;

    //Prompt the user to enter the second number
    std::cout<<"Enter the second number: ";
    std::cin>>b;

    //Calculate the sum of 2 given numbers
    int sum = a + b;

    //Print the result
    std::cout<<"The sum of "<<a<<" and "<<b<<" is: "<<sum<<std::endl;

    return 0;
}