#include<iostream>
using namespace std;
int main()
{
    int a,b,c,sum;
    float avg;
    cout<<"Enter 3 numbers: ";
    cin>>a>>b>>c;
    sum = a+b+c;
    avg = sum/3.0;

    cout<<"Sum of those 3 numbers: "<<sum;
    cout<<"\nand Average of those three numbers is: "<<avg;
    return 0;
}