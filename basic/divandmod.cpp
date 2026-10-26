#include <iostream>
using namespace std;

int main(void)
 {
    int a, b;

    cout << "Enter two integers: ";
    cin >> a >> b;

    if (b != 0) {
        cout << "Quotient = " << a / b << endl;
        cout << "Remainder = " << a % b;
    } else {
        cout << "Division by zero is not allowed.";
    }

    return 0;
}