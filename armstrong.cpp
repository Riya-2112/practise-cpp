#include <iostream>
using namespace std;

int main()
{
    int num,orignalnum,result=0,r;                   //r = remainder
    cout<<"Enter a 3-digit number: ";
    cin>>num;
    orignalnum = num;

    while(orignalnum != 0)
    {
        r = orignalnum%10;
        result += r*r*r;
        orignalnum /= 10;
    }
    if(result == num)
    {
        cout<<"It is an Armstrong number";
    }
    else
    {
        cout<<"It is not an Armstrong number";
    }                                                                                                                                                                                                                                                                                                                                                                                                                                   
}