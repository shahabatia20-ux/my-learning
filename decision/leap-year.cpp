#include <iostream>
using namespace std;

int main(void)
{

    int year;

    cout << "Enter a Year: ";
    cin >> year;

    if(year <= 0)
    {
        cout << "Year cannot be Zero or Negative!";
    }

    if(year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
    {
        cout << year << " is a Leap year.";
    }
    else
    {
        cout << year << " is not a Leap year.";
    }

  return 0;
}