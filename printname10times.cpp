#include <iostream>
using namespace std;

int main()
{
    string name;
    cout<<"Enter your name: ";
    cin>>name;
    for(int i = 0;i<10;i++)
    {
        cout<<i+1<<" "<<name<<endl;
    }
    
}