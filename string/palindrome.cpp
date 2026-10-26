#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(void)
 {
    string text, reversed;

    cout << "Enter a word: ";
    cin >> text;

    reversed = text;
    reverse(reversed.begin(), reversed.end());

    if (text == reversed) {
        cout << "Palindrome";
    } else {
        cout << "Not a palindrome";
    }

    return 0;
}