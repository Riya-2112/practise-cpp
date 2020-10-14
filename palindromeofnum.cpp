#include <iostream>
using namespace std;

int main()
{
    int num,orignalnum,result=0,remainder;
    cout<<"Enter the number: ";
    cin>>num;
    orignalnum = num;
    while( orignalnum != 0)
    {
        remainder = orignalnum %10;
        orignalnum= orignalnum/10;
        result = (result * 10) + remainder;
    }
    if(result==num)
    {
        cout<<"The number is a palindrome.";
    }
    else
    {
        cout<<"Number is not a palindrome.";
    }
    
}