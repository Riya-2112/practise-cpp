#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int i ,n;
    double sum=0;
    cout<<"Enter the n: ";
    cin>>n;
    cout<<"The sum of series 1^2+3^2+5^2+……+n^2 is ";
    for(i=0;i<=n;i++)
    {
        if(i%2 != 0)
        {
            sum = sum + pow(i,2);
        }
    }
    cout<<sum;
}
