#include <iostream>
#include <cctype>
#include <cstring>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    char s[256];
    char cuvant[256];
    int i = 0;
    cin.getline(s, 256);
    for(i=0; i!='*'; i++)
    {
        cuvant[i] = s[i];
    }
    cout<<cuvant<<endl;
    for (i = 0; i < strlen(s); i++)
    {
        if(*(s+strlen(cuvant))==*cuvant)
        {
            i=i+strlen(cuvant);
        }
        else
        {
            cout<<*(s+strlen(cuvant));
            i=i+strlen(cuvant);
        }
    }
}