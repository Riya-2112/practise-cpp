#include <iostream>
using namespace std;

int main()
{
    int x,y,h,x1,y1;//count =0
    cout<<"program started";
        for(x=1;x<=100;x++)
        {
            for(y=1;y<=100;y++)
            {
                 for(h=1;h<=100;h++)
                    { 
                        if(y1 != x && x+y > h)
                        {
                            if((x*x) + (y*y) == (h*h))
                               {
                                    cout<<"("<<x<<","<<y<<","<<h<<")";
                                    x1=x;
                                    y1=y;
                               }
                        }
                    }
            }
        }
    
}