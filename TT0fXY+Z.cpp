#include <iostream>
using namespace std;

int main()
{
    int x,y,z;
    cout<<"\n\tX\tY\tZ\tXY+Z";
    for(x =0;x<=1;x++)
    {
        for(y=0;y<=1;y++)
        {
            for(z=0;z<=1;z++)
            {
                  if((x*y)+z==2)
                  {
                      cout<<"\n\t"<<x<<"\t"<<y<<"\t"<<z<<"\t1";
                  }
                  else
                  {
                      cout<<"\n\t"<<x<<"\t"<<y<<"\t"<<z<<"\t"<<(x*y)+z;
                  }  
            }
        }
    }
}