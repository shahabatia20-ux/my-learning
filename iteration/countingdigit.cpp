#include <iostream>
using namespace std;

int main(void)
 {
    long long n;
    int count = 0;

    cout << "Enter an integer: ";
    cin >> n;

    do {
        count++;
        n = n / 10;
    } while (n != 0);

    cout << "Number of digits = " << count;

    return 0;
}