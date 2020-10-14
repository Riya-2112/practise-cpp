#include <iostream>
using namespace std;

int main()
{ 
    int a , b ,c, d;
    cout<<"Enter the dividend ";
    cin>>a;
    cout<<"Enter the divisor ";
    cin>>b;
    if(b==0)
    {
        cout<<"Number cannot be divided by 0 ";
    }
    else
    {
        c = a/b;
        d = a%b;
        cout<<"Quotient is: "<<c<<" Remainder is: "<<d;
    }
    
}