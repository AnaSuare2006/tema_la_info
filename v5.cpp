#include <iostream>
#include <cctype>
#include <cstring>
#include <cstdlib>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    char s[101], t[101];
    cin.getline(s, 101);
    char *p;
    int i, j, vir;
    p=strtok(s, " ");
    while(p!=NULL)
    {
        vir = 0;
        for (i = 0; i < strlen(p) && vir==0; i++)
        {
            if (p[i] == '.')
            {
                vir=1;
                int x=i;
                for (j = 1; j <= strlen(p) - x; j++)
                {
                    strcpy(t, s + i + 1);
                    strcpy(s + i, t);
                    i--;
                }
            }
        }
        p=strtok(NULL, " ");
    }
    cout << s;
}