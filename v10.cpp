#include<cstring>
#include<iostream>
using namespace std;
int main()
{
    char s[256],*p,c[256],nou[256];
    int ok=0,l;
    cin.getline(s,256);
    p=strtok(s," ");
    while(p)
    {
        l=strlen(p);
        //ca sa fie dublu-cuvant in primul rand
        //trebuie sa aiba nr par de litere
        if(l%2==0)
        {
            //copiam in c prima jumatat a lui p
            strncpy(c,p,l/2);
            //de ce marcam c[l/2] cu null?
            c[l/2]=NULL;
            if(strcmp(c,p+l/2)==0)
            {
                //comparam prima si
                //a doua jumatate
                strcpy(p+l/2,"*");
                //inlocuim cea de-a doua jum
                //cu *
                ok=1;
            }
        }
        //practic pui cuvantul nou in nou
        strcat(nou,p);
        strcat(nou," ");
        p=strtok(NULL," ");
    }
    strcpy(s,nou);
    if(ok==0)
        cout<<"NEMODIFICAT";
    else
        cout<<s;
}