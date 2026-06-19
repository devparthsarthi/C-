#include<iostream>

//Base class
class Animal
{
    public: 
    void eat()
    {
        std::cout<<"Animal is eating."<<std::endl;
    }

    void sleep()
    {
        std::cout<<"Animal is sleeping."<<std::endl;
    }
};

//Derived class
class Dog : public Animal
{
    public:
    void bark()
    {
        std::cout<<"Dog is barking."<<std::endl;
    }
};

int main()
{
    //Create an object of the derived class
    Dog dog;

    //Accessing methods from the base class
    dog.eat(); //Inherited method
    dog.sleep(); //Inherited method

    //Accessing method from the derived class
    dog.bark();

    return 0;
}