#include <iostream>
using namespace std;
int v[100];
int divide(int s, int d)
{
    return (s + d) / 2;
}
int fibo(int x)
{
    if (x == 0)
        return 0;
    else
    {
        if (x == 1)
        {
            return 1;
        }
        else
        {
            return fibo(x - 2) + fibo(x - 1);
        }
    }
}
int dei(int s, int d)
{
    int m, x1, x2;
    if (s == d)
        return fibo(v[s]);
    else
    {
        m = divide(s, d);
        x1 = dei(s, m);
        x2 = dei(m + 1, d);
        return x1 + x2;
    }
}
int main()
{
    int n, i;
    cin >> n;
    if (n <= 1)
    {
        cout << n;
    }
    else
    {
        for (i = 1; i <= n; i++)
            v[i] = i;
        cout << dei(1, n);
    }
}