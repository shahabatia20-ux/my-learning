#include <iostream>
using namespace std;

int main(void)
 {
    int n;
    long long reverse = 0;

    cout << "Enter a non-negative integer: ";
    cin >> n;

    if (n < 0) {
        cout << "Enter a non-negative integer";
        return 0;
    }

    while (n > 0) {
        int digit = n % 10;
        reverse = reverse * 10 + digit;
        n = n / 10;
    }

    cout << "Reversed number = " << reverse;

    return 0;
}