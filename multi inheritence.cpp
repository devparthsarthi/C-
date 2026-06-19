#include<iostream>

//Base class 1
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

//Base class 2
class Vehicle
{
    public:
    void drive()
    {
        std::cout<<"Vehicle is driving."<<std::endl;
    }
    
    void stop()
    {
        std::cout<<"Vehicle stopped."<<std::endl;
    }
};

//Derived class from multiple base classes
class DogCar : public Animal, public Vehicle
{
    public:
    void bark()
    {
        std::cout<<"Dog is barking."<<std::endl;
    }
};

int main()
{
    // Create an object of the derived class
    DogCar dogCar;

    // Accessing methods from base class 1
    dogCar.eat(); //Inherited method
    dogCar.sleep(); //Inherited method

    // Accessing method from derived class
    dogCar.bark();

    return 0;
}