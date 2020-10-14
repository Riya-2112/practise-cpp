#include <iostream>
using namespace std;

int main()
{
    int n,fact=1;
    cout<<"Enter the no whose factorial is to be found:  ";
    cin>>n;
    if(n>0)
    {
    for(int i=n;i<=1;i++)
    {
        fact = fact * i;
    }
    cout<<"Factorial of "<<n<<" is "<<fact;
    }
    else if(n==0)
    {
        cout<<"The factorial of 0 is 1";
    }
    else
    {
        cout<<"Factorial cannot be found.";
    }
    
}