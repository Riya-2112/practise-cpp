#include <iostream>
using namespace std;
int main()
{
    int n,sum=0,i=0;
    cout<<"Enter n: ";
    cin>>n;
    cout<<"The sum of series of num 1+2+3+.....+n is ";
    for(i = 1;i<=n;i++)
    {
         sum = sum + i; 
    }
    cout<<sum;
}