#include <iostream>
using namespace std;

int main()
{
    int a,b,lcm,hcf,temp,n1,n2;
    cout<<"Enter the two numbers";
    cin>>n1>>n2;

    a = n1;
    b = n2;

    while(b != 0) 
     {
         temp = b;
         b = a%b;
         a = temp;
     }
     hcf = a;
     lcm = (n1 * n2)/hcf;
    cout<<"HCF is "<<hcf<<" LCM is "<<lcm;
}