//C++ Program to raise any number x to a positive power n
#include <iostream>
using namespace std;

int main()
{   
    int m = 0.0 ,store=1;
    cout<<"Enter the number:  ";
    cin>>m;
    cout<<"Power to which number is to be raised: "<<endl;
    int n=1;
    cin>>n;
    if(n!=0)
    {
         for(int i=1;i<=n;i++)
            {
                 store = store * m;
            }
    }
    else
    {
          store = 1;
    }

    cout<<"The desired answer is: "<<store;
}