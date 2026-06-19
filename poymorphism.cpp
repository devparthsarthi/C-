#include<iostream>

// Bse class
class Shape
{
    public:
    // Virtual function for calculating area
    virtual float calculateArea() const
    {
        return 0;
    }
};

// Derived class 1: Rectangle
class Rectangle : public Shape
{
    private: 
    float length;
    float width;

    public:
    // Constructor
    Rectangle(float l, float w) : length(l), width(w) {}

    // Override the calculateArea function
    float calculateArea() const override
    {
        return length + width;
    }
};

// Derived class 2 : Circle
class Circle : public Shape
{
    private:
    float radius;

    public:
    // Constructor
    Circle(float r) : radius(r) {}

    // Override the calculateArea function
    float calculateArea() const override
    {
        return 3.14 * radius * radius;
    }
};

// Function to print the area of any shape
void printArea(const Shape& shape)
{
    std::cout<<"Area of the shape: "<<shape.calculateArea()<<std::endl;
}

int main()
{
    // Creating objects of different shapes
    Rectangle rectangle(5,4);
    Circle circle(3);

    // Call printArea with objects of different shapes
    std::cout<<"Area of Rectangle: "<<std::endl;
    printArea(rectangle);

    std::cout<<"Area of circle: "<<std::endl;
    printArea(circle);

    return 0;
}