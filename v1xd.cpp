#include <iostream>
#include <cstring>
using namespace std;
char s[101],*p,c[101],aux;
int mx,i;
int main()
{
    cin.get(s,101);
    strcpy(c,s);
    p=strtok(s,"#");
    while(p)
    {
        if(strlen(p)>mx)
            mx=strlen(p);
        p=strtok(NULL,"#");
    }
    p=strtok(c,"#");
    cout<<'#';
    while(p)
    {
        if(strlen(p)==mx)
        {
            for(i=0;i<strlen(p)/2;i++)
            {
                aux=p[i];
                p[i]=p[strlen(p)-i-1];
                p[strlen(p)-i-1]=aux;
            }
        }
        cout<<p<<'#';
        p=strtok(NULL,"#");
    }
}