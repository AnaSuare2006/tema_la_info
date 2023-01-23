#include <iostream>
using namespace std;

int main()
{
    struct data
    {
        int zi, luna, an;
    };
    struct elev
    {
        char nume[21];
        data dn;
    };
    elev e;
    cin>>e.nume;
    cin>>e.dn.zi>>e.dn.luna>>e.dn.an;
    if(e.dn.an==2000)
    {
        cout<<e.nume;
    }
    else
    {
        cout<<e.dn.zi<<" "<<e.dn.luna<<" "<<e.dn.an;
    }
}
