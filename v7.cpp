#include <iostream>
#include <cstring>
#include <cstdlib>
#include <cctype>
#include <math.h>

using namespace std;

int main()
{
    char s[101]; 
    char c[101];
    int i=0;
    int cifra;
    int p;
    cin>>s>>c;
    for(i=0; i<strlen(s); i++)
    {
        cifra=(atoi(c)/pow(10,strlen(c)-i-1));
        cifra=cifra%10;
        p=int(s[i]);
        if(char(p+cifra)<='z')
            s[i]=char(p+cifra);
        else
            s[i]='a';
    }
    cout<<s;
}