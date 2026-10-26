#include <iostream>
using namespace std;

int main(void)
 {
    int n;
    unsigned long long fact = 1;

    cout << "Enter a number from 0 to 20: ";
    cin >> n;

    if (n < 0 || n > 20) {
        cout << "Number out of range";
        return 0;
    }

    for (int i = 1; i <= n; i++) {
        fact *= i;
    }

    cout << "Factorial = " << fact;

    return 0;
}