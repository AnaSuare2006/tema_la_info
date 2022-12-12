#include <iostream>
#include <cstring>
#include <cctype>
#include <cstdlib>

using namespace std;

int main()
{
    int i;
    char s[100], t[256];;
    cin >> s;
    for (i = 0; i <= strlen(s)/2; i++)
    {
        if (s[i] != s[strlen(s) - i - 1])
        {
            strcpy(t, s + strlen(s)-i-1);
            strcpy(s + strlen(s)-i, t);
            s[strlen(s)-i-1] = s[i];
        }
    }
    cout<<s;
}