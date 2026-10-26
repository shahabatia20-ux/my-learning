#include <iostream>
using namespace std;

int main(void) 
{
    double a, b;
    char op;

    cout << "Enter expression, e.g. 10 + 5: ";
    cin >> a >> op >> b;

    switch (op) {
        case '+':
            cout << a + b;
            break;

        case '-':
            cout << a - b;
            break;

        case '*':
            cout << a * b;
            break;

        case '/':
            if (b != 0) {
                cout << a / b;
            } else {
                cout << "Division by zero is not allowed";
            }
            break;

        default:
            cout << "Invalid operator";
    }

    return 0;
}