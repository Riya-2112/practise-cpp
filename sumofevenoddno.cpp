#include <iostream>
using namespace std;

int main()
{
    int n,even=0,odd=0;
    cout<<"Enter the total number: ";
    cin>>n;
    for(int i = 1;i<n+1;i++)
    {
        if(i%2==0)
        {
            even = even + i;
        }
        else
        {
            odd = odd + i;
        }    
    }
    cout<<"Sum of Even numbers is: "<<even;
    cout<<"\nSum of Odd numbers is: "<<odd;   
}