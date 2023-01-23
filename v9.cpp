#include <iostream>
using namespace std;

int main()
{
    int i;
    struct produs
    {
        int cod;
        float cant,pret;
    };
    struct magazin
    {
        produs P[100];
        int nrProduse;
    }M;
    cin>>M.nrProduse;
    for(i=0; i<M.nrProduse; i++)
    {
        cin>>M.P[i].cod>>M.P[i].cant>>M.P[i].pret;
        if(M.P[i].cant)
        {
            cout<<M.P[i].pret*M.P[i].cant<<endl;
        }
        else
        {
           cout<<M.P[i].cod<<endl; 
        }
    }
}