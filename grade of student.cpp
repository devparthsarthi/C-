#include<iostream>
using namespace std;
int main()
{
    int m;
    cin>>m;
    if(m>=90)
        cout<<"A";
    else if(m>=75)
        cout<<"B";
    else if(m>=60)
        cout<<"C";
    else
        cout<<"D";
    return 0;
}