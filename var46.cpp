#include <iostream>
#include <cctype>
#include <cstring>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    char s[101];
    int i;
    cin.getline(s,101);
    for(i=0; i<strlen(s); i++)
    {
        if(strchr("aeiou",s[i]))
        {
            s[i]=(char)((int)s[i]+1);
        }
    }
    cout<<s;
}