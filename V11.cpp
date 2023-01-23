#include <iostream>
using namespace std;

int main()
{
    struct Fisier
    {
        char nume[30], extensie[5];
        int dimensiune;
    };
    struct Dosar
    {
        Fisier F[100];
        int nrFisiere;
    }D;
    int sum=0,i;
    cin>>D.nrFisiere;
    for(i=0; i<D.nrFisiere; i++)
    {
        cin>>D.F[i].nume>>D.F[i].extensie>>D.F[i].dimensiune;
        if(D.F[i].nume[0]=='A')
        {
            sum=sum+D.F[i].dimensiune;
        }
    }
}