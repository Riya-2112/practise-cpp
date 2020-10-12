#include <iostream>
using namespace std;


int main()
{
    float inch,feet,yard;
    cout<<"Enter the inches:  ";
    cin>>inch;

    feet = inch/12;
    yard = inch/36;

    cout<<"Inch to feet: "<<feet<<endl;
    cout<<"Inch to yard: "<<yard;
}