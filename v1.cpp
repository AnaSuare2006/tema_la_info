#include <iostream>
#include <cstdlib>
#include <cstring>
#include <cctype>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,i,j,ok,k=0;
    cin>>n;
    char c[21],s[21];
    cin>>c;
    for(i=1; i<=n-1; i++)
    {
        cin>>s;
        ok=1;
        for(j=0; j<strlen(c); j++)
        {
            if(c[j]!=s[j])
            {
                ok=0;
            }
        }
        if(ok==1)
        {
            k++;
        }
    }
    cout<<k;

}