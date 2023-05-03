#include <iostream>
#include <cmath>
using namespace std;

int numarare(int a, int b)
{
    int i, nr = 2, d, x = 0;
    for (i = a; i <= b; i++)
    {
        for (d = 1; d <= i; d++)
        {
            if (i % d == 0)
            {
                nr++;
            }
            
        }
        if (nr == 3)
            {
                x++;
                nr = 0;
            }
            else
            {
                nr=0;
            }
    }
    return x;
}

int main()
{
    int a, b;
    cin >> a >> b;
    cout << numarare(a, b);
}