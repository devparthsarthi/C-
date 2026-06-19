#include <iostream>
using namespace std;

class Weight 
{
public:
    int kg;
    int grams;

    int toGrams() const 
    {
        return (kg * 1000) + grams;
    }
};

void compareWeights(Weight w1, Weight w2) 
{
    if (w1.toGrams() > w2.toGrams()) 
    {
        cout << "First weight is heavier." << endl;
    } 
    else if (w1.toGrams() < w2.toGrams()) 
    {
        cout << "Second weight is heavier." << endl;
    } 
    else 
    {
        cout << "Both weights are equal." << endl;
    }
}

int main() 
{
    Weight w1, w2;

    w1.kg = 5;
    w1.grams = 500;

    w2.kg = 4;
    w2.grams = 800;

    compareWeights(w1, w2);

    return 0;
}