#include <iostream>
using namespace std;

int main()
{   
    int num,rnum,r;
    cout<<"Enter the number: ";
    cin>>num;
    rnum = num;
    while(rnum !=0)
    {
        r = rnum%10;
        cout<<r;
        rnum /= 10;
    }
}