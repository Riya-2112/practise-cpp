#include <iostream>
using namespace std;

#define Swap(a,b) {int temp; temp = a; a = b;b = temp;}
int main()
{   
    int x,y;
    cout<<"Enter the two numbers.";
    cin>>x>>y;
    Swap(x,y);
    cout<<"x: "<<x<<"y: "<<y;
}