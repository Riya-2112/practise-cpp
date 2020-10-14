#include <iostream>
using namespace std;

int main()
{
    int size,sum=0,avg;
    cout<<"Enter the total numbers in the list: ";
    cin>>size;
    int A[size];

    for(int i = 0;i<size;i++)
    {
        cout<<"Enter the number "<<i+1<<": ";
        cin>>A[i];
    }
    for(int i = 0;i<size;i++) 
    { 
        sum += A[i];
    }
    avg = sum / size;
    cout<<"Average of given numbers in the list is: "<<avg;
}