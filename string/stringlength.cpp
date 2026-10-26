#include <iostream>
#include <string>
using namespace std;

int main(void) 
{
    string text;

    cout << "Enter a string: ";
    getline(cin, text);

    cout << "Length = " << text.length();

    return 0;
}