#include <iostream>
#include <cctype>
#include <cstring>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, i=0, j, ok, k = 0;
    cin >> n;
    char s[100][30];
    for(i=0; i<n; i++)
    {
        cin>>s[i];
        ok = 1;
        for (j = 0; j < strlen(s[i]); j++)
        {
            if (strchr("aeiou", (s[i][j])) == NULL)
            {
                ok = 0;
            }
        }
        if (ok == 1)
        {
            k++;
        }
    }
    cout << k;
}