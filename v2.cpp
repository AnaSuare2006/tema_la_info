#include <iostream>
using namespace std;

int main()
{
    int i;
    struct punct
    {
        int x, y;
    };
    struct poligon
    {
        int nr_vf;
        punct vf[20];
    }p;
    cin>>p.nr_vf;
    for(i=0; i<p.nr_vf; i++)
    {
        cin>>p.vf[i].x>>p.vf[i].y;
    }
}