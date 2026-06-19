#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    ofstream file("data.txt");
    string data;
    if(!file)
    {
        cout<<"File creation failed"<<endl;
        return 0;
    }
    cout<<"Enter text to write into file:"<<endl;
    getline(cin,data);
    file<<data;
    cout<<"Data written to file successfully"<<endl;
    file.close();
    return 0;
}