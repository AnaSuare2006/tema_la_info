#include <iostream>
#include <cstring>
#include <cctype>
#include <cstdlib>

using namespace std;

char m[6][6];
int main()
{
    int i;
    char s[200];
    cin.getline(s, 200);
    char v[] = "aeiou";
    char *p, *p1, *p2;
    p = strtok(s, " ");
    while (p)
    {
        for (i = 0; i < strlen(p) - 1; i++)
        {
            if (strchr(v, p[i]) && strchr(v, p[i + 1]))
            {
                strcpy(p1 , strchr(v, p[i]));
                strcpy(p2 , strchr(v, p[i+1]));
                cout << p1[0] << " " << p2[0];
                // m[p1][p2]++;
                // cout<<m[*p1][*p2]<<" ";
            }
        }
        p = strtok(NULL, " ");
    }
}