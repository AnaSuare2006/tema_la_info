#include <iostream>
#include <cstring>
#include <cctype>
#include <cstdlib>

using namespace std;

int main()
{
    char s[250], t[250];
    cin.getline(s, 250);
    int i = 0, ok = 1, k = 0, j, c;
    for (i = 0; i < strlen(s) - 1; i++)
    {
        j = i;
        i++;
        while (s[j] != s[i])
        {
            i++;
        }
        if (s[j] == s[i])
        {
            k++;
            for (c = j; c <= i; c++)
            {
                strcpy(t, s + c + 1);
                strcpy(s + c, t);
            }
        }
        i=j;
    }
    cout << k;
    cout << s;
}