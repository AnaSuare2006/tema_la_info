#include <iostream>
using namespace std;
int v[100];
int divide(int s, int d)
{
    return (s + d) / 2;
}
int palindrom(int x)
{
    if (x <= 9)
        return 1;
    else
    {
        int xinitial,xinvers=0;
        xinitial = x; // Salvam numarul initial
        while (x)
        {                                    
            int c = x % 10;                     
            xinvers = xinvers * 10 + c; 
            x = x / 10;                         
        }
        if(xinitial==xinvers)
        {
            return 1;
        }
        return 0;
    }
}
int dei(int s, int d)
{
    int m, x1, x2;
    if (s == d)
        return palindrom(v[s]);
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