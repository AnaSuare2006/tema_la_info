#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    struct punct
    {
        float x, y;
        int cadran;
    };
    int n, i;
    cin >> n;
    punct p[n];
    for (i = 0; i < n; i++)
    {
        cin >> p[i].x >> p[i].y;
        // presupunem ca punctele nu sunt pe axe
        if (p[i].x != 0 && p[i].y != 0)
        {
            if (p[i].x > 0 && p[i].y > 0)
            {
                p[i].cadran = 1;
            }
            else
            {
                if (p[i].x < 0 && p[i].y < 0)
                {
                    p[i].cadran = 3;
                }
                else
                {
                    if (p[i].x < 0 && p[i].y > 0)
                    {
                        p[i].cadran = 2;
                    }
                    else
                    {
                        p[i].cadran = 4;
                    }
                }
            }
        }
    }
    bool sortat;
    do
    {
        sortat = true;
        for (int i = 0; i < n - 1; i++)
            if (p[i].cadran > p[i + 1].cadran)
            {
                swap(p[i].cadran, p[i+1].cadran);
                swap(p[i].x, p[i+1].x);
                swap(p[i].y, p[i+1].y);
                sortat = false;
            }
    } while (!sortat);
    for(i=0; i<n; i++)
    {
        cout<<p[i].x<<" "<<p[i].y<<" "<<p[i].cadran;
    }

}
