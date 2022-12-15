#include <iostream>
#include <cstring>
#include <cctype>
#include <cstdlib>

using namespace std;

int main()
{
    char voc[] = "aeiou", s[100], t[100];
    int i;
    strcpy(s, "*galbbbleinn*asaa*appaarei*astfel*creuzet*");
    for (i = 0; i < strlen(s) - 1; i++)
    {
        // daca is ambele consoane sau is ambele vocale
        if (s[i] != '*' && s[i + 1] != '*')
        {
            if ((strchr(voc, s[i]) == NULL && strchr(voc, s[i + 1]) == NULL) 
            || (strchr(voc, s[i]) != NULL && strchr(voc, s[i + 1]) != NULL))
            {
                strcpy(t, s + i + 2);
                strcpy(s + i +1 , t);
                i--;
            }
            cout<<s<<endl;
        }
    }
    cout << s;
    //*galen*asa*apare*asel*cezet
}