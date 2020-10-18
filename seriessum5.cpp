#include <iostream>
using namespace std;
#include <cmath>
int main()
{
int i=1,n;
double sum=0;
cout<<"Enter n: ";
cin>>n;
cout<<"The sum of series 1+1/2^2+1/3^3+…..+1/n^n is: ";
for(i=1;i<=n;i++)
{
    sum = sum + 1/(pow(i,i));
}
cout<<sum;
}