#include <iostream>
using namespace std;
int v[100];
int divide(int s, int d)
{
    return (s+d)/2;
}
int maxim(int x, int y)
{
    if(x>y)
        return y;
    return x;
}
int dei(int s, int d)
{
    int m,x1,x2;
    if(s==d)
        return v[s];
    else
    {
        m=divide(s,d);
        x1=dei(s,m);
        x2=dei(m+1,d);
        return maxim(x1,x2);
    }
}
int main()
{
    int n,i;
    cin>>n;
    for(i=1; i<=n; i++)
        cin>>v[i];
    cout<<dei(1,n);
}