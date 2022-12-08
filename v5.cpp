#include<iostream>
#include<cstring>
using namespace std;
char s[101];
int i,j;
int main()
{
    cin>>s;
    for(i=0;i<strlen(s);i++)
    {
        for(j=0;j<=i;j++)
            cout<<s[j];
        cout<<s+strlen(s)-i-1<<' ';
    }
}