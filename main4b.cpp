#include <iostream>
using namespace std;

int main()
{
    int i;
    struct data
    {
        int zi, luna, an;
    } a, b;
    cin >> a.zi >> a.luna >> a.an;
    cin >> b.zi >> b.luna >> b.an;
    int v[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int s1 = 0, s2 = 0;
    s1 = a.an * 365;
    for (i = 1; i <= a.luna - 1; i++)
    {
        s1 = s1 + v[i];
    }
    s1 = s1 + a.zi;
    s2 = b.an * 365;
    for (i = 1; i <= b.luna - 1; i++)
    {
        s2 = s2 + v[i];
    }
    s2 = s2 + b.zi;
    cout<<abs(s1-s2);
}