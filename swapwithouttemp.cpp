#include <iostream>
using namespace std;
int main()
{   
    int x,y;
    cout<<"Enter the two numbers: ";
    cin>>x>>y;
    cout<<"\nx: "<<x<<" y: "<<y;
    cout<<"\nBefore Swap";
    x = x+y;
    y = x-y;
    x = x-y;
    cout<<"\nx: "<<x<<" y: "<<y;
    cout<<"\nAfter Swap";
}