#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    unsigned long n,d,num=0;
    cout<<"Enter the binary number: ";
    cin>>n;
    for(int i=0;n!=0;++i)
    {
        d = n%10;
        num = (d)*(pow(2,i))+num;
        n = n/10;
    }
    cout<<"The conversion of binary number to decimal is "<<num;
}