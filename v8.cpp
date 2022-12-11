#include<cstring>
#include<iostream>
#include<cstdlib>
#include<cctype>

using namespace std;

int main()
{
    char s[20];
    int n,i;
    n=0;
    for(i=1;i<=5;i++)
    {
        cin>>s;
        if(strstr(s,"2019")==s && strstr(s+4,"2019")==NULL)
            n++;
    }
    cout<<n;
}

//functia strstr(s1,s2) cauta s2 in s1 si returneaza
//pointer catre prima aparitie, null in cazul
//in care nu aparein sir