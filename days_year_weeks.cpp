#include <iostream>
using namespace std;

int main()
{
    int d,y,w,d1;
    cout<<"Enter the no of days: ";
    cin>>d;
    y = d /365;
    d1 = d%365;
    cout<<"Years are: "<<y<<"  Days are: "<<d1<<endl;
    w = d/7;
    d1 = d%7;
    cout<<"Weeks are: "<<w<<"  Days are: "<<d1<<endl;
}