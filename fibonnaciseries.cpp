#include <iostream>
using namespace std;
int main()
{   
    int n,first=0,second=1,third;
    cout<<"Enter how many numbers ";
    cin>>n;
    cout<<"Fibonnaci series is: "<<first<<" "<<second<<" ";
    for(int i=2;i<=n;i++)
    {
        third = first + second;
        cout<<third<<" ";
        first =second;
        second= third;
    }
}