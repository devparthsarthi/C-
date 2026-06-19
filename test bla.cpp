#include<iostream>
using namespace std;

class A{
    protected:
    int x;
};
class B : protected A
{
    public:
    void show()
    {
        x=10;
    }
};
int main()
{
    B obj;
    obj.show();
    return 0;
}