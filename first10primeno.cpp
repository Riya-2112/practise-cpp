#include <iostream>
using namespace std;
int main()
{
    int i ,j ,check=1,count=1;
    cout<<"The first ten prime numbers are: "<<"2";
    for(int i=3;i>0;i++)
    {
        for(j=2;j<=i/2;j++)
        {
            if(i%j == 0)
            {
                check = 1;
                break;
            }
        }
            if(check==0)
            {
                cout<<" "<<i;
                count++;
            }
            check = 0;
            if(count ==10)
            {
                break;
            }
    }
}