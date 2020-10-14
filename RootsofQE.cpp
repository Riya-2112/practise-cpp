#include <iostream>
#include <cmath>
using namespace std;

int main()
{   
    float a,b,c;
    cout<<"The quadratic equation is in the form of ax^2 + bx + c =0";
    cout<<"\nNow enter the a,b,c: ";
    cin>>a>>b>>c;
    float r1,r2,d;
    d = ((b*b)-(4*a*c));
    if(d<0)
    {
        cout<<"No real roots";
    }
    else if(d==0)
    {   
        cout<<"There is one real root";
        r1 = r2 = -b/(2*a);
        cout<<"\nroot is: "<<r1;
    }
    else
    {   
        cout<<"\nThere are two real roots";
        r1 = (-b + sqrt(d))/(2*a);
        r2 = (-b - sqrt(d))/(2*a);
        cout<<"\nr1 is: "<<r1<<" r2 is: "<<r2;
    }
}