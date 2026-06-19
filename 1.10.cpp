#include <iostream>
#include <string>
using namespace std;

class Document 
{
public:
    string content;
};

int main() 
{
    Document doc1;
    Document doc2;

    doc1.content = "This is the original document.";

    doc2 = doc1;

    cout << "doc1 content: " << doc1.content << endl;
    cout << "doc2 content: " << doc2.content << endl;

    return 0;
}