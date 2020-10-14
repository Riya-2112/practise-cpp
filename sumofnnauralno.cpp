#include <iostream>
using namespace std;

int main()
{   
    int n,sum=0;
    cout<<"Enter the number(n): ";
    cin>>n;
    for(int i=1;i<n+1;i++)
    {
         sum = sum + i;
    }
    cout<<"The sum of first n natural numberds is: "<<sum;
}