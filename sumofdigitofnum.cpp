#include <iostream>
using namespace std;

int main()
{
int num,rnum,r,result=0;
    cout<<"Enter the number: ";
    cin>>num;
    rnum = num;
    while(rnum !=0)
    {
        r = rnum%10;
        result = result + r;
        rnum /= 10;
    }
    cout<<"Sum of digits of num is: "<<result;
}
