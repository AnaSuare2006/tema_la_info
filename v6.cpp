#include <iostream>
#include <cctype>
#include <cstring>
#include <cstdlib>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    char s[100],t[100];
    cin.getline(s, 100);
    int i;
    for (i = 1; i < strlen(s)-1; i++)
    {
        if ((s[i] == ' ') && (isalpha(s[i + 1]) == 0 || isalpha(s[i - 1]) == 0))
        {
            strcpy(t, s + i + 1);
            strcpy(s + i, t);
            i--;
        }
    }
    cout<<s;
}