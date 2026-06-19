#include<iostream>

//Class declaration
class MyClass
{
    private:
    int num;

    public:
    // Zero argument constructor
    MyClass()
    {
        num = 0; //Default value
        std::cout<<"Zero argument constructor called."<<std::endl;
    }

    //Parameterized constructor
    MyClass(int n)
    {
        num =n;
        std::cout<<"Parameterized constructor called with value "<<num<<"."<<std::endl;
    }

    //function to display the value of num
    void display()
    {
        std::cout<<"Value of num: "<<num<<std::endl;
    }
};

int main()
{
    //Creating objects using zero argument and parameterized constructors
    MyClass obj1; //Zero argument constructor called
    MyClass obj2(10); //Parameterized constructor called with value 10

    //Displaying values
    obj1.display(); //Value of num: 0
    obj2.display(); //Value of num: 10

    return 0;
}