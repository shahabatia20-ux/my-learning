#include <iostream>
#define N 10
using namespace std;

int main(void)
{
   int arr[N] = {26, 5, 12, 63, 76, 20, 42, 31, 86, 93};
    int key = 93;
    int found = 0;

    for(int i = 0; i < N; i++)
    
        if(arr[i] == key)
        { 
            cout << key << " is found at index " << i+1;
           found = 1;
            break;
        }
    

    if(found == 0)
    (cout << key << " not found!");

  return 0;
}

