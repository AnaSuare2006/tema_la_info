#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    int i,s=0,k=0;
    struct concurs
    {
        char nume_concurent[25], proba[20];
        int punctaj;
    } c[300];
    cin>>c[0].nume_concurent>>c[0].proba>>c[0].punctaj;
    s=s+c[0].punctaj;
    k=1;
    for(i=1; i<299; i++)
    {
        cin>>c[i].nume_concurent;
        cin>>c[i].proba;
        cin>>c[i].punctaj;
        if(strcmp(c[i].proba,c[i-1].proba)==0)
        {
            s=s+c[i].punctaj;
            k++;
        }
        else
        {
            cout<<c[i-1].proba<<" : ";
            cout<<s/k;
            s=s+c[i].punctaj;
            k=1;
        }

    }
}