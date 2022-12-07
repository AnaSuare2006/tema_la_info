#include <iostream>
#include <cctype>
#include <cstring>
#include <cstdlib>

using namespace std;

int main()
{
    char s[100],t[100];
    int i = 0;
    cin.getline(s, 100);
    for (i = 0; i<strlen(s); i++)
    {
        if (s[i] == s[i + 1])
        {
            strcpy(t, s + i +1);
            strcpy(s + i + 2, t);
            s[i+1] = '#';
        }
    }
    cout<<s;
}