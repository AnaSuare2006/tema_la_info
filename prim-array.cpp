#include <iostream>
using namespace std;
int v[100];
int prim(int n)
{
    int i;
    if(n==0 || n==1)
    {
        return 0;
    }
    for (i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
            return 0;
    }
    return 1;
}
int divide(int s, int d)
{
    return (s + d) / 2;
}
int cate_prime(int x, int y)
{
    if (x > y)
        return x;
    return y;
}
int dei(int s, int d)
{
    int m, x1, x2;
    if (s == d)
        return prim(v[s]);
    else
    {
        m = divide(s, d);
        x1 = dei(s, m);
        x2 = dei(m + 1, d);
        return x1+x2;
    }
}
int main()
{
    int n, i;
    cin >> n;
    for (i = 1; i <= n; i++)
        cin >> v[i];
    cout << dei(1, n);
}