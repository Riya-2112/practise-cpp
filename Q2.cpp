#include <iostream>
#include <cmath>
#include <iomanip>
#include <cstdio>
using namespace std;
int  add(int a=0,int b=0,int c=0)
{
    int add;
    add = a + b + c;
    return add;
}
float average(int a=0,int b=0,int c=0)
{
    float avg;
    avg = (a+b+c)/3.0;
    return avg;
}
int main()
{   
    int x=0,y=0,z=0;
    cout<<"Enter the three numbers"<<endl;
    cout<<"\nEnter 1st no: ";
    cin>>x;
    cout<<"\nEnter 2nd no: ";
    cin>>y;
    cout<<"\nEnter 3rd no: ";
    cin>>z;
    cout<<"\nAddition is: "<<add(x,y,z);
    cout<<"\nAverage is: "<<fixed<<setprecision(3)<<average(x,y,z);
    return 0;
}