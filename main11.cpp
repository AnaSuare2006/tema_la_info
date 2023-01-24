#include <iostream>
#include <fstream>
#include <cstring>

using namespace std;

ifstream f1("clasa1.txt");
ifstream f2("clasa2.txt");

int main()
{
    int i, j, k = 0;
    struct elev
    {
        char nume[30];
        char prenume[30];
        float medie;
    };
    int n1, n2;
    cin >> n1 >> n2;
    elev c1[n1];
    elev c2[n2];
    for (i = 0; i < n1; i++)
    {
        cin >> c1[i].nume >> c1[i].prenume >> c1[i].medie;
    }
    for (i = 0; i < n2; i++)
    {
        cin >> c2[i].nume >> c2[i].prenume >> c2[i].medie;
    }
    // sortarea primului vector
    int ok = 0;
    while (!ok)
    {
        ok = 1;
        for (i = 0; i < n1; i++)
            if (c1[i].medie > c1[i + 1].medie)
            {
                swap(c1[i].medie, c1[i + 1].medie);
                swap(c1[i].nume, c1[i + 1].nume);
                swap(c1[i].prenume, c1[i + 1].prenume);
                ok = 0;
            }
    }
    // sortarea vectorului 2
    ok = 0;
    while (!ok)
    {
        ok = 1;
        for (i = 0; i < n1; i++)
            if (c2[i].medie > c2[i + 1].medie)
            {
                swap(c2[i].medie, c2[i + 1].medie);
                swap(c2[i].nume, c2[i + 1].nume);
                swap(c2[i].prenume, c2[i + 1].prenume);
                ok = 0;
            }
    }
    struct elev2
    {
        int clasa;
        char nume[30];
        char prenume[30];
        float medie;
    };
    elev2 v[n1 + n2 + 1];
    i = 1, j = 1;
    while (i < n1 && j < n2)
    {
        if (c1[i].medie < c2[j].medie)
        {
            k++;
            v[k].medie = c1[i].medie;
            strcpy(v[k].nume, c1[i].nume);
            strcpy(v[k].prenume, c1[i].prenume);
            v[k].clasa = 1;
            i++;
        }
        else
        {
            k++;
            v[k].medie = c2[i].medie;
            strcpy(v[k].nume, c2[i].nume);
            strcpy(v[k].prenume, c2[i].prenume);
            v[k].clasa = 2;
            j++;
        }
    }
    while (i < n1)
    {
        k++;
        v[k].medie = c1[i].medie;
        strcpy(v[k].nume, c1[i].nume);
        strcpy(v[k].prenume, c1[i].prenume);
        v[k].clasa = 1;
        i++;
    }
    while (j < n2) // cat timp mai avem elemente in vectorul b[]
    {
        k++;
        v[k].medie = c2[i].medie;
        strcpy(v[k].nume, c2[i].nume);
        strcpy(v[k].prenume, c2[i].prenume);
        v[k].clasa = 2;
        j++;
    }
}