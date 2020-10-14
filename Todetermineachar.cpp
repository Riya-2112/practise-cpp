#include <iostream>
using namespace std;

int main()
{
    char ch;
    int cr;
    cout<<"Enter the character: ";
    cin>>ch; 
    cr = ch;
    if(cr>=65 && cr<=90)
    {
        cout<<"\nIt is a capital letter.";
    }
    else if(cr>=97 && cr<=122)
    {
        cout<<"\nIt is a small letter.";
    }
    else if(cr>=48 && cr<=57)
    {
        cout<<"\nIt is a digit.";
    }
    else
    {
        cout<<"It is a special character.";
    }    
}