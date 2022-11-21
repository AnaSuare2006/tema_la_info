#include <iostream>
#include <cctype>
#include <cstring>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    char s[53];
    char string[460];
    int i,j,k=0;
    cin.getline(s,53);
    for(i=0; i<strlen(s); i++)
    {
        if (isalpha(s[i]) != 0)
        {
            int c = s[i+1] - '0';
            for(j=1; j<=c; j++)
            {
                string[k]=s[i];
                k++;
            }
        }
    }
    cout<<string;

}