#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"Enter 2 numbers: ";
    cin>>a>>b;
    c=a;
    a=b;
    b=c;
    cout<<a<<" "<<b;
    return 0;
}
