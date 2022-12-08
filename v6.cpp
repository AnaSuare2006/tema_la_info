#include <iostream>
#include <cstring>
#include <cstdlib>
#include <cctype>

using namespace std;

int main()
{
    char s[100];
    cin.getline(s,100);
    int i=0,mx=0,k=0;
    char *p=strtok(s," ");
    while(p)
    {
        if(strlen(p)>mx)
        {
            k=1;
            mx=strlen(p);
        }
        else
        {
            if(strlen(p)==mx)
                k++;
        }
        p=strtok(NULL," ");
    }
    cout<<mx<<" "<<k;
}
