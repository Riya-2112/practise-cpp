#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number";
    cin>>n;
    int min=1;
    for (int i=n;i>=1;i--)
    {
        if(i%2 != 0)
        {
             if(i>=min)
             {
                 cout<<i<<" ";
             }
        }
    }
}