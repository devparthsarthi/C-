#include<iostream>

class Counter
{
    private:
    int count;

    public:
    //Constructor to initialize count
    Counter(int c = 0) : count(c) {}

    //Overloading prefix increment operator (++counter)
    Counter operator++()
    {
        ++count;
        return *this;
    }

    //Overloading postfix increment operator (counter++)
    Counter operator++(int)
    {
        Counter temp = *this;
        ++count;
        return temp;
    }

    // Overloading prefix decrement operator (--counter)
    Counter operator--() 
    {
        --count;
        return *this;
    }

    // Overloading postfix decrement operator (counter--)
    Counter operator--(int)
    {
        Counter temp = *this;
        --count;
        return temp;
    }

    //Function to display the current count value
    void display() const
    {
        std::cout<<"Count: "<<count<<std::endl;
    }
};

int main()
{
    Counter c1(5);

    std::cout<<"Initial value of count: ";
    c1.display(); //Display current count

    //Increament count using prefix and postfix increment operators
    ++c1;
    c1++;
    std::cout<<"After incrementing twice: ";
    c1.display(); //Display current count

    //Decrement count using prefix and postfix decrement operators
    --c1;
    c1--;
    std::cout<<"After decrementing twice: ";
    c1.display(); //Display current count

    return 0;
}