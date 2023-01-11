#include <iostream>
#include <cstring>
#include <cctype>
#include <cstdlib>

using namespace std;

int main()
{
    char s1[40], s2[80], t[100];
    cin >> s1 >> s2;
    int i, j = 0;
    ;
    for (i = 0; i < strlen(s1); i++)
    {
        if (strchr("aeiou", s1[i]) != NULL)
        {
            strcpy(t, s2 + j);
            strcpy(s2 + j + 1, t);
            //strcpy(s2 + j + 1, s2 + j);
            //de ce nu se poate inlocui
            s2[j] = s1[i];
            strcpy(t, s1 + i + 1);
            strcpy(s1 + i, t);
            //strcpy(s1 + i, s1 + i + 1);
            //de ce nu se poate inlocui
            i--;
            j = j + 2;
            cout << s1 << " " << s2 << endl;
        }
    }
    cout << s1 << endl
         << s2;
}