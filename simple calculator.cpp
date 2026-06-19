#include <iostream>
int main()
{
    char op;
    float num1, num2;
    std::cout<<"Enter operator (+,-,*,/): ";
    std::cin>>op;
    std::cout<<"Enter two numbers: ";
    std::cin>>num1>>num2;
    switch(op)
    {
        case '+':
        std::cout<<"Result: "<<num1 + num2;
        break;
        case '-':
        std::cout<<"Result: "<<num1 - num2;
        break;
        case '*':
        std::cout<<"Result: "<<num1 * num2;
        break;
        case '/':
        if (num2==0)
            std::cout<<"Error! Division by Zero!";

            else
            std::cout<<"Result: "<<num1 / num2;
            break;

            //If the operator is not of the specified ones
            std::cout<<"Error! Invalid operator!";
            break;
    }
    return 0;
}