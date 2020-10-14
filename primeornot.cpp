#include <iostream>
using namespace std;

int main()
{   
    int n,check =1;
    cout<<"Enter the number: ";
    cin>>n;

    for(int i = 2;i<=n/2;i++)
    {
        if(n%i == 0)
        {
            check = 0;
            break;
        }
    }
    if(check)
    {
        cout<<"It is a prime number";
    }
    else
    {
        cout<<"It is not a prime number";
    }
    
}