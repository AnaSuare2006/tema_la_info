#include <iostream>
using namespace std;

int main()
{
    int i, k = 0, mn;
    struct fractie
    {
        int numitor, numarator;
    };
    fractie x[20];
    cin >> x[0].numitor >> x[0].numarator;
    mn = x[0].numitor;
    for (i = 1; i < 19; i++)
    {
        cin >> x[i].numitor >> x[i].numarator;
        if (x[i].numitor < mn)
        {
            k = 1;
            mn = x[i].numitor;
        }
        else
        {
            if (x[i].numitor == mn)
            {
                k++;
            }
        }
    }
    cout<<k;
}