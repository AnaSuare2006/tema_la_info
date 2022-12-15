#include <iostream>
#include <cstring>
#include <cctype>
#include <cstdlib>
#include <fstream>

using namespace std;

int main()
{
    ifstream f("bac.in");
    char c;
    int i,j;
    int v[10]={0};
    while(f>>c)
    {
        if((int)c>69)
        {
            v[(int)c-92]++;
        }
        else
        {
            v[(int)c-65]++;
        }
    }
    for(i=0; i<=4; i++)
    {
        if((v[i]+v[i+5])%2==1)
        {
            for(j=1; j<=v[i]+v[i+5]; j++)
            {
                cout<<char(i+97);
            }
        }
    }


}