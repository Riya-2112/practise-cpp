#include <iostream>
using namespace std;

int main()
{
    int roll;
    float per;
    char ch;
    
    cout<<"Enter Roll number:  ";
    cin>>roll;
    try{
    if(roll<=100 || roll>=300)
        {
            throw roll;
        }
        else
        {
            cout<<"Enter Percentage:  ";
            cin>>per;
            if(per<0||per>100)
            {
                throw per;
            }
            else
            {
                cout<<"Enter Division:  ";
                cin>>ch;
                if(ch!='A' && ch!='B')
                {
                    throw ch;
                }
                else
                {
                    cout<<"\nRoll number is:  "<<roll;
                    cout<<"\nPercentage is:  "<<per<<"%";
                    cout<<"\nDivision is:  "<<ch;
                }
            }
        }
    }
    catch(int r)
    {
        cout<<"\nEnter valid Roll number.";
    }
    catch(float p)
    {
        cout<<"\nEnter valid Percentage.";
    }
    catch(char c)
    {
        cout<<"\nEnter valid division(A/B).";
    }
    return 0;
}
