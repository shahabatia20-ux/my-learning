#include <iostream>
using namespace std;

int main(void)
{

  int n;

    cout << "Enter a Number: ";
    cin >> n;

    if(n % 2 == 0)
    {
        cout << n << " is an Even number.";
    }
    else
    {
        cout << n << " is an Odd number.";
    }

    return 0;
}