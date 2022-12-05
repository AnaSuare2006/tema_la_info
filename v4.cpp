#include <iostream>
#include <cctype>
#include <cstring>
#include <cstdlib>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    char s1[31], s2[31];
    cin >> s1 >> s2;
    int i, ok, j = 0;
    for (i = 0; i < strlen(s1); i++)
    {
        ok = 0;
        while (j < strlen(s2) && ok==0)
        {
            if (s1[i] == s2[j])
            {
                ok = 1;
            }
            else
            {
                j++;
            }
        }
        if (ok == 0)
        {
            cout << "NU";
            return 0;
        }
    }
    cout << "DA";
}