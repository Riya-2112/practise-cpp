#include <iostream>
using namespace std;
int main()
{
    int n;
    float sum=0;
    cout<<"Enter n: ";
    cin>>n;
    cout<<"The sum of series 1/2+4/5+7/8+…… is: ";
    for(int i=0;i<=n;i++)
    {
        if(i%3 != 0)
        {
            sum = sum + (i/(++i*1.0));
        }
    }
    cout<<sum;
}