#include <iostream>
#include <cstring>
#include <cctype>
#include <cstdlib>
using namespace std;

int main()
{
    char s[256],c[31],*p;
    int l,ok=0;
    cin.getline(s,256);
    cin>>c;
    l=strlen(c)-1;
    while(strchr("aeiou",c[l])==NULL && l>=0)
        l--;
    //gasim ultima vocala care apare in sir
    strcpy(c,c+l);
    //c este inlocuit de partea care ne in-
    //tereseaza, de la ultima vocala pana
    //la finalul sirului
    p=strtok(s," ");
    while(p)
    {
        //cautam aceeasi parte in fiecare cuvant
        l=strlen(p)-1;
        while(strchr("aeiou",p[l])==NULL && l>=0)
            l--;
        //comparam partea aia din c, cu cea din p
        if(l>=0 &&strcmp(c,p+l)==0)
        {
            //strcmp compara sa se asigure ca
            //sirurile coincid
            cout<<p<<' ';
            ok=1;
        }
        p=strtok(NULL," ");
    }
    if(ok==0)
        cout<<"nu exista";
}