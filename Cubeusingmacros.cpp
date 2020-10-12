#include <iostream>
using namespace std;
#define Cube(a)  {a*a*a};
int main()
{    
    int a;
    int y=0;
    cout<<"Enter the number: ";
    cin>>a;
    y = Cube(a)
    cout<<"Cube is "<<y;
}