#include <iostream>
using namespace std;

int main()
{
    int n , i=1;
    cout<<"Enter the desired number:  ";
    cin>>n;
    
    while(i<11)
    {
        cout<<n<<" x "<<i<<" = "<<n * i<<endl;
        i++;
    }
}