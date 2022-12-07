#include <iostream>
#include <cctype>
#include <cstring>
#include <cstdlib>

using namespace std;

int main()
{
    char s[100];
    int i, mx = 0;
    cin.getline(s, 100);
    int lit[54] = {0};
    for (i = 0; i < strlen(s); i++)
    {
        if (int(s[i]) < 91 && s[i] != ' ')
        {
            lit[int(s[i] - 65)]++;
            if (lit[int(s[i]) - 65] >= mx)
            {
                mx = lit[int(s[i]) - 65];
            }
        }
        else
        {
            if (s[i] != ' ')
                {
                    lit[int(s[i] - 71)]++;
                    if (lit[int(s[i]) - 71] >= mx)
                    {
                        mx = lit[int(s[i]) - 71];
                    }
                }
        }
    }
    for (i = 0; i < 54; i++)
    {
        if (lit[i] == mx)
        {
            if (i < 26)
            {
                cout << char(i + 65);
            }
            else
            {
                cout << char(i + 71);
            }
        }
    }
    cout << mx;
}