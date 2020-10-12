#include <iostream>
using namespace std;

int main()
{
    char cr;
    int i;
    cout<<"For uppercase letters."<<endl;
    for(i=65;i<91;i++)
    {
        cr = i;
        cout<<cr<<": "<<i<<endl;
    }
    cout<<"For lowercase letters."<<endl;
    for(i=97;i<123;i++)
    {
        cr = i;
        cout<<cr<<": "<<i<<endl;
    }
    cout<<"For Numbers from 1 to 9"<<endl;
    for(i=48;i<58;i++)
    {
        cr = i;
        cout<<cr<<": "<<i<<endl;
    }
}
