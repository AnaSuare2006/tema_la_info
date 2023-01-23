#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    int i;
    struct candidat
    {
        char nume[30], probaE_d[30];
        int nota;
    };
    candidat c[200];
    for(i=0; i<199; i++)
    {
        cin>>c[i].nume>>c[i].probaE_d>>c[i].nota;
        if(strcmp(c[i].probaE_d,"Informatica")==0 && c[i].nota>9)
        {
            cout<<c[i].nume;
        }
    }
}