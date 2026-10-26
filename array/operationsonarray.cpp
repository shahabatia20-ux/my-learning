#include <iostream>
using namespace std;

int main(void) 
{
    int arr[5];
    int sum = 0;

    cout << "Enter five numbers: ";

    for (int i = 0; i < 5; i++) {
        cin >> arr[i];
        sum += arr[i];
    }

    double average = sum / 5.0;

    cout << "Sum = " << sum << endl;
    cout << "Average = " << average;

    return 0;
}