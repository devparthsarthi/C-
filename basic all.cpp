#include <iostream>

// Base class
class Animal {
protected:
    int age;

public:
    // Constructor
    Animal(int a) : age(a) {}

    // Public method
    void displayAge() {
        std::cout << "Age: " << age << std::endl;
    }
};

// Derived class with public inheritance
class Dog : public Animal {
private:
    std::string breed;

public:
    // Constructor
    Dog(int a, std::string b) : Animal(a), breed(b) {}

    // Public method
    void displayBreed() {
        std::cout << "Breed: " << breed << std::endl;
    }
};

// Derived class with private inheritance
class Cat : private Animal {
private:
    std::string color;

public:
    // Constructor
    Cat(int a, std::string c) : Animal(a), color(c) {}

    // Public method
    void displayColor() {
        std::cout << "Color: " << color << std::endl;
    }

    // Access to age through a public member function
    void displayAgeCat() {
        std::cout << "Age (from Cat class): " << age << std::endl;
    }
};

// Derived class with multilevel inheritance
class PersianCat : public Cat {
private:
    std::string feature;

public:
    // Constructor
    PersianCat(int a, std::string c, std::string f) : Cat(a, c), feature(f) {}

    // Public method
    void displayFeature() {
        std::cout << "Feature: " << feature << std::endl;
    }
};

int main() {
    // Creating objects of derived classes
    Dog dog(5, "Labrador");
    Cat cat(3, "Black");
    PersianCat persianCat(2, "White", "Long fur");

    // Accessing public and protected members through methods
    dog.displayAge(); // Accessing protected member from base class Animal
    dog.displayBreed();
    std::cout << std::endl;

    cat.displayAgeCat(); // Accessing protected member from base class Animal using public member function
    cat.displayColor();
    std::cout << std::endl;

    persianCat.displayAge(); // Accessing protected member from base class Animal
    persianCat.displayColor();
    persianCat.displayFeature();

    return 0;
}