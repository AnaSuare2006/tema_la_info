#include <iostream>
#include <cctype>
#include <cstring>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    char s[41];
    int i = 0, j = 0;
    cin.getline(s, 41);
    for (i = 0; i < strlen(s); i++)
    {
        for (j = 0; j < strlen(s); j++)
        {
            if (j != i)
                cout << s[j];
        }
        cout<<endl;
    }
}