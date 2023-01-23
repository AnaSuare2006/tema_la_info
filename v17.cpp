#include <iostream>
using namespace std;

int main()
{
    struct data
    {
        int zi, luna, an;
    };
    struct produs
    {
        char denumire[41];
        data dexp;
    };
    produs p;
    data azi;
    cin >> p.dexp.zi >> p.dexp.luna >> p.dexp.an;
    cin >> azi.zi >> azi.luna >> azi.an;
    if (azi.an > p.dexp.an)
    {
        cout << "Produs expirat";
    }
    else
    {
        if (azi.luna > p.dexp.luna && azi.an == p.dexp.an)
            cout << "Produs expirat";
        else if (azi.zi > p.dexp.zi && azi.luna == p.dexp.luna && azi.an == p.dexp.an)
            cout << "Produs expirat";
        else
            cout << "Produsul nu este expirat";
    }
}