
#include <iostream>
using namespace std;

int numarare(int n, int m, int a[], int b[])
{
    int i,nr=0;
    int minim=10000;
    for(i=1; i<=m; i++)
    {
        if(b[i]<minim)
        {
            minim=b[i];
        }
    }
    for(i=1; i<=n; i++)
    {
        if(a[i]<minim)
        {
            nr++;
        }
    }
    return nr;
}

int main()
{
    int n, m, i;
    cin>>n>>m;
    int a[n+1], b[m+1];
    for(i=1; i<=n; i++)
    {
        cin>>a[i];
    }
    for(i=1; i<=m; i++)
    {
        cin>>b[i];
    }
}