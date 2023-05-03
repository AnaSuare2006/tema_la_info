#include <iostream>
#include <fstream>
using namespace std;
ifstream f("bac.txt");

int prima(int x)
{
    while(x/10)
    {
        x=x/10;
    }
    return x;
}

int main()
{
    int x,y,l=0,lmx=0;
    cin>>x;
    l=1;
    while(cin>>y)
    {
        if(prima(y)==x%10)
        {
            l++;
            if(l>lmx)
            {
                lmx=l;
            }
        }
        else
        {
            l=0;
        }
        x=y;
    }
}