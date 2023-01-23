#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    int i=0,s=0;
    struct data
    {
        int zi, luna, an;
    };
    struct film
    {
        char nume_film[40], gen_film[20];
        data difuzare;
        int suma;
    }f[1000];
    for(i=0; i<999; i++)
    {
        cin>>f[i].nume_film>>f[i].gen_film;
        cin>>f[i].difuzare.zi>>f[i].difuzare.luna>>f[i].difuzare.an;
        cin>>f[i].suma;
        if(strcmp(f[i].gen_film,"comedie")==0 || strcmp(f[i].gen_film,"istoric")==0)
        {
            if(f[i].difuzare.an==2008 && f[i].difuzare.luna==3)
            {
                s=s+f[i].suma;
            }
        }
    }
    cout<<s;

}