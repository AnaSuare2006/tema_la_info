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
    elev E1,E2;
    cin>>E1.nume>>E1.dn.zi>>E1.dn.luna>>E1.dn.an;
    cin>>E2.nume>>E2.dn.zi>>E2.dn.luna>>E2.dn.an;
    if(E1.dn.luna<E2.dn.luna)
    {
        cout<<E1.nume;
    }
    else
    {
        if(E1.dn.luna>E2.dn.luna)
        {
            cout<<E2.nume;
        }
        else
        {
            if(E1.dn.zi>E2.dn.zi)
            {
                cout<<E2.nume;
            }
            else
            {
                cout<<E1.nume;
            }
        }
    }
}