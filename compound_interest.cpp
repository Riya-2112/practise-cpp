#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    float p,r,t,ci;
    cout<<"Enter Principle, Rate and Time respectively.";
    cin>>p>>r>>t;
    ci = p * pow((1+r/100),t);
    cout<<"\nCompound Interest is: "<<ci;
    return 0;
}
