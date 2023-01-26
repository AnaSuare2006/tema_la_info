#include <iostream>
using namespace std;

int main()
{
    struct dreptunghi
    {
        float lungime, latime, arie, perimetru;
    };
    int n, i;
    float mx, mn;
    cin >> n;
    dreptunghi d[n + 1];
    cin >> d[1].lungime >> d[1].latime;
    d[1].arie = d[1].lungime * d[1].latime;
    d[1].perimetru = 2 * (d[1].lungime + d[1].latime);
    mn = d[1].perimetru;
    mx = d[1].arie;
    int pmn=1, pmx=1;
    for (i = 2; i <= n; i++)
    {
        cin >> d[i].lungime >> d[i].latime;
        d[i].arie = d[i].lungime * d[i].latime;
        d[i].perimetru = 2 * (d[i].lungime + d[i].latime);
        if(d[i].perimetru<mn)
        {
            mn=d[i].perimetru;
            pmn=i;
        }
        if(d[i].arie>mx)
        {
            mx=d[i].arie;
            pmx=i;
        }
    }
    cout<<"dreptunghiul"<<pmn<<"are perimetrul minim"<<endl;
    cout<<"dreptunghiul"<<pmx<<"are aria maxima"<<endl;
}