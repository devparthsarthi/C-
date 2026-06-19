#include<iostream>

class Calculator
{
    private:
    int num1;
    int num2;

    public:
    Calculator(int a, int b)
    {
        num1=a;
        num2=b;
    }
    int add()
    {
        return num1 + num2;
    }

    int subtract()
    {
        return num1 - num2;
    }

    int multiply()
    {
        return num1 * num2;
    }

    int divide()
    {
        if (num2 != 0)
        {
            return static_cast<float>(num1) / num2;
        }
        else
        {
            std::cout<<"Error! Division by zero."<<std::endl;
            return 0;
        }
    }
};

int main()
{
    Calculator calc(10,5);

    std::cout<<"Addition result: "<<calc.add()<<std::endl;
    std::cout<<"Subtraction result: "<<calc.subtract()<<std::endl;
    std::cout<<"Multiplication result: "<<calc.multiply()<<std::endl;
    std::cout<<"Division result: "<<calc.divide()<<std::endl;

    return 0;
}