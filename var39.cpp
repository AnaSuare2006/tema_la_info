#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    int i,j,p1,p2;
    char s[256];
    cin.get(s,256);
    i=0;
    while(i<strlen(s))
    {
        j=i;
        while(s[j]!=' ' && j<strlen(s))
            j++;
            if(strchr("aeiou",s[i]))
            {
                p1=i;
                p2=j-1;
                while(p1<p2)
                {
                    char c=s[p1];
                    s[p1]=s[p2];
                    s[p2]=c;
                    p1++;
                    p2--;

                }
            }
            i=j+1;
    }
    cout<<s;
}