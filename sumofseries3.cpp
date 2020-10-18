#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int x,n,i;
    double sum=0;
    cout<<"Enter x and n: ";
    cin>>x>>n;
    cout<<"The sum of series 1+x+x^2+……+x^n is: ";
    for(i=0;i<=n;++i)
    {
        sum += pow(x,i);
    }
    cout<<sum;
}