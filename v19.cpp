#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    int i,mx=0;
    char s[250];
    cin.getline(s,250);
    struct cuvant
    {
        char cuv[30];
        int frecv;
    };
    cuvant c[20];
    for(i=0; i<19; i++)
    {
        cin>>c[i].cuv>>c[i].frecv;
        if(c[i].frecv>2)
        {
            if(strlen(c[i].cuv)>mx)
            {
                mx=strlen(c[i].cuv);
            }
        }
    }
    cout<<mx;
    

}