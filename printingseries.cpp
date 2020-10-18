#include <iostream>
using namespace std;

int main()
{
    int i,n,x=1;
    cout<<"Enter n: ";
    cin>>n;
    cout<<"The series is: ";
    cout<<"1";
    for(i=1;i<=n;i++)
    {
        x = x * 2;
        cout<<" "<<x;
    }
}