#include <iostream>
#include <cmath>
using namespace std;

int main() 
    {
        int x,n;float sum=0;
        cout<<"Enter x and n respectively: ";
        cin>>x>>n;
        cout<<"The sum of series x+x^2/2+x^3/3+...+x^n/n is: ";
        for(int i=1;i<=n;i++)
        {
            sum = sum + ((pow(x,i))/i);
        }
        cout<<sum;    
    }
