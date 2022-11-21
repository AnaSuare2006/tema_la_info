#include <iostream>
#include <cctype>
#include <cstring>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    char s[41];
    cin.getline(s,256);
    int i = 0;
    bool ok=0;
    for (i = 0; i < strlen(s); i++)
    {
        if(strchr("aeiou",s[i]))
        {
            cout<<s[i]<<" ";
            ok=1;
        }
    }
    if(ok==0)
    {
        cout<<"fara vocale";
    }
}