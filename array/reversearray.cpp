#include <iostream>
using namespace std;

int main(void) 
{
    int arr[5];

    cout << "Enter five numbers: ";

    for (int i = 0; i < 5; i++) {
        cin >> arr[i];
    }

    cout << "Reversed array: ";

    for (int i = 4; i >= 0; i--) {
        cout << arr[i] << " ";
    }

    return 0;
}