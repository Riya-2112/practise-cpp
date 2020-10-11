#include <iostream>
using namespace std;

int main()
{
    char ch;
    int i;
    cout<<"For uppercase letters."<<endl;
    for(i=65;i<91;i++)
    {
        ch = i;
        cout<<ch<<": "<<i<<endl;
    }
    cout<<"For lowercase letters."<<endl;
    for(i=97;i<123;i++)
    {
        ch=i;
        cout<<ch<<": "<<i<<endl;
    }
    cout<<"For Numbers from 1 to 9"<<endl;
    for(i=48;i<58;i++)
    {
        ch=i;
        cout<<ch<<": "<<i<<endl;
    }
}