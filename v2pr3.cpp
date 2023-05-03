#include <iostream>
#include <fstream>
using namespace std;
ifstream f("bac.txt");

int main()
{
    int n,m,i,j,arr[100]={0},v[100]={0},x;
    int nr,nrmin=1000000;
    f>>n>>m;
    for(i=1; i<=n; i++)
    {
        cin>>x;
        arr[x]++;
    }
    for(i=1; i<=n; i++)
    {
        cin>>x;
        v[x]++;
    }
    for(i=0; i<=99; i++)
    {
        if(v[i]!=0 && v[i]<=arr[i])
        {
            nr=arr[i]/v[i];
        }
        if(nr<nrmin) //te asiguri ca toate cifrele se regasesc de acel numar de ori
        {
            nrmin=nr;
        }
    }
    cout<<nrmin;

}