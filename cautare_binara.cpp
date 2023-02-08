#include <iostream>
using namespace std;
int v[100];
int cautat;
int divide(int s, int d)
{
    return (s+d)/2;
}
int verificare(int x,int p)
{
    if(x==cautat)
        return p;
    else
        return 0;
}
int dei(int s, int d)
{
    int m,x1,x2;
    if(s==d)
        return verificare(v[s],s);
    else
    {
        m=divide(s,d);
        x1=dei(s,m);
        x2=dei(m+1,d);
        return x1+x2;
    }
}
int main()
{
    int n,i;
    cin>>cautat;
    cin>>n;
    for(i=1; i<=n; i++)
        cin>>v[i];
    cout<<dei(1,n);
}