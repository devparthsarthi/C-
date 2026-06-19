#include<iostream>

//Inline function to calculate the square of a number
inline int square(int x)
{
    return x * x;
}

int main()
{
    int num;

    std::cout<<"Enter a number: ";
    std::cin>>num;

    //Call to inline function square
    std::cout<<"Square of "<<num<<" is: "<<square(num)<<std::endl;

    return 0;
}