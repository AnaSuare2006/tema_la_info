#include <iostream>
#include <cctype>
#include <cstring>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    char s[11];
    int i, a = 0, b = 0;
    bool ok = 0;
    cin.getline(s, 11);
    for (i = 0; i < strlen(s); i++)
    {
        if (s[i] != '.' && ok == 0)
        {
            a = a * 10 + s[i] - '0';
        }
        else
        {
            if (s[i] == '.')
                ok = 1;
            else
            {
                if (s[i] != '0')
                    b = b * 10 + s[i] - '0';
            }
        }
    }
    cout << a + b;
}