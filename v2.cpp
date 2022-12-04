#include <iostream>
#include <cstdlib>
#include <cstring>
#include <cctype>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int i,k=0;
    char s[101],t[101];
    cin.getline(s,101);
    char *p;
    p=strtok(s," ");
    while(p!=NULL)
    {
        if(strlen(p)==3)
        {
            cout<<"*"<<" ";
        }
        else
            cout<<p<<" ";
        p=strtok(NULL," ");
    }

}