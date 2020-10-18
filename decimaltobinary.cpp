#include <iostream>
using namespace std;

int main()
{
    int n,d,arr[50],i=0,j;
    cout<<"Enter the decimal number to be converted: ";
    cin>>n;
    cout<<"The number in decimal form is ";
    while(n!=0)
    {
        d = n%2;
        arr[i]=d;
        n = n/2;
        i++;
    }
    for(j=i-1;j>=0;j--)
    {
        cout<<arr[j];
    }
}