#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    struct punct
    {
        float x, y;
    };
    struct poligon
    {
        int nr;
        punct v[101];
    } p;
    int i;
    float per;
    cin >> p.nr;
    for (i = 0; i < p.nr; i++)
    {
        cin >> p.v[i].x >> p.v[i].y;
    }
    // calculeaza perimetrul poligonului fara alte variabile
    per = 0;
    for (i = 0; i < p.nr - 1; i++)
    {
        per = per + sqrt((p.v[i].x - p.v[i + 1].x) * (p.v[i].x - p.v[i + 1].x) - (p.v[i].x - p.v[i + 1].x) * (p.v[i].x - p.v[i + 1].x));
    }
}