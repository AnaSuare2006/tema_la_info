#include <iostream>
#include <cstdlib>
#include <cstring>
#include <cctype>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    char s1[31],s2[31],litere[31];
    cin>>s1>>s2;
    int i,k=0,j,ok;
    for(i=0; i<strlen(s2); i++)
    {
        if(isalpha(s2[i])!=0)
        {
            litere[k]=s2[i];
            k++;
        }
    }
    for(i=0; i<strlen(s1); i++)
    {
        if(litere[0]==s1[i])
        {
            ok=1;
            k=1;
            for(j=i+1; j<=i+strlen(s2)-1;j++)
            {
                if(isalpha(s2[k])!=0)
                {
                    if(s2[k]!=s1[j])
                    {
                        ok=0;
                    }
                }
                k++;
            }
            if(ok==1)
            {
                for(j=i; j<=i+strlen(s2)-1; j++)
                {
                    cout<<s1[j];
                }
                cout<<endl;
            }
        }

    }

}