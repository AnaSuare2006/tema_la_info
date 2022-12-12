#include <iostream>
#include <cstring>
#include <cctype>
#include <cstdlib>

using namespace std;

int main()
{
    int i,ok;
    char s[200];
    cin.getline(s,200);
    char *p;
    p= strtok(s," ");
    while(p)
    {
        ok=1;
        for(i=0; i<strlen(p); i++)
        {
            if(isalpha(p[i])==0)
                ok=0;
        }
        if(ok)
        {   //p[0]= toupper(p[0]);
            cout<<(char) toupper(p[0]);
        }
        p=strtok(NULL," ");
    }
}