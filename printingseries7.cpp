#include <iostream>
using namespace std;

int main()
{
    int n,a=-1,b;
    cout<<"Enter n: ";
    cin>>n;
    cout<<"Series is: "<<endl;
	for(int i=1;i<=n;i+=3)
	{
		a*=-1;
		b=i;
		b*=a;
		cout<<b<<" ";
	}
}