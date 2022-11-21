#include <iostream>
#include <cctype>
#include <cstring>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int i=0;
    char c1,c2,x;
    cin>>c1>>c2;
    char s[256];
    cin.getline(s,256);
    cout<<s;
    for(i=0; i<=strlen(s); i++)
    {
        if(s[i]==c1)
        {
            s[i]=c2;
        }
        else
        {
            if(s[i]==c2)
            {
                s[i]=c1;
            }
        }
    }
    cout<<s;
}