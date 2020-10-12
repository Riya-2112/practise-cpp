/* display matrix */

#include<iostream>

using namespace std;

int main()
{
    int a[5][5];
     
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            cin>>a[i][j];
        }
    }

     for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            cout<<a[i][j]<<"\t";
        }
        cout<<endl;
    }
    return 0;

}