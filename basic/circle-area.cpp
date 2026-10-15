  /*
WAP to read radius of a circle and find its area.
*/

#include <iostream>
#define PI 3.14
using namespace std;

int main(void)
{
  float area,r;

     cout << "Enter Radius of Circle: ";
     cin >> r;

     area = PI * r * r;
     cout << "Area is " << area << " sq unit.";
     return 0;
}