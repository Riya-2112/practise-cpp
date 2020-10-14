#include <iostream>
using namespace std;

int main()
{
    int size,max=0;
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
          if(A[i] > max)
          {
              max = A[i];
          }
    }
    cout<<"Maximum number from the list is: "<<max;
}