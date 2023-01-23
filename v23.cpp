#include <iostream>
using namespace std;

int main()
{
    int i = 0;
    struct oras
    {
        char tara[30], nume_oras[20];
        int nr_locuitori_oras;
        float suprafata_oras;
    } o[200];
    for (i = 0; i < 299; i++)
    {
        cin >> o[i].tara >> o[i].nume_oras;
        cin >> o[i].nr_locuitori_oras >> o[i].suprafata_oras;
        if (o[i].suprafata_oras * 15 < o[i].nr_locuitori_oras)
        {
            cout << o[i].nume_oras << " " << o[i].tara;
        }
    }
}