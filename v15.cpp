#include <iostream>
using namespace std;

int main()
{
    struct rezBac
    {
        int mat, rom, inf;
        char rez;
    } candidat;
    cin >> candidat.mat >> candidat.inf >> candidat.rom;
    if ((candidat.mat > 5 && candidat.rom > 5 && candidat.inf > 5) || ((candidat.mat + candidat.rom + candidat.inf) / 3 >= 6))
    {
        candidat.rez = 'A';
    }
    else
    {
        candidat.rez = 'R';
    }
    cout<<candidat.rez;
}