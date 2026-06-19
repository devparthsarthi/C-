#include<iostream>

//Forward declaration of class B
class B;

//Class A declaration
class A{
    private:
    int numA;

    public:
    A(int num) : numA(num) {}

    //Friend function declaration
    friend void display(A objA, B objB);
};

//Class B declaration
class B
{
    private:
    int numB;

    public:
    B(int num) : numB(num) {}

    //Friend function declaration
    friend void display(A objA, B objB);
};

//Friend function definition
void display(A objA, B objB)
{
    std::cout<<"From friend function:"<<std::endl;
    std::cout<<"Value of numA in class A: "<<objA.numA<<std::endl;
    std::cout<<"Value of numB in class B: "<<objB.numB<<std::endl;
}

int main()
{
    A objA(10);
    B objB(20);

    //Call friend function from main
    display(objA, objB);

    return 0;
}