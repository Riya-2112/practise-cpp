#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the nunmber whose divisers is to be found: ";
    cin>>n;
    for(int i=1;i<n+1;i++)
    {
        if(n%i == 0)
        {
            cout<<i<<" ";
        }
    }
}