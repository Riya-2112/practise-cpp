#include <iostream>
using namespace std;

int main()
{
    char ch;
    int cr;
    cout<<"Enter character: ";
    cin>>ch;
    cr = ch;
    if(cr>=65 && cr<=90)
    {
        cr = cr + 32;
        ch = cr;
        cout<<ch;
    }
    else if(cr>=97 && cr<=122)
    {
        cr = cr - 32;
        ch = cr;
        cout<<ch;
    }
}