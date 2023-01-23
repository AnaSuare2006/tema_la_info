#include <iostream>
using namespace std;

int main()
{
    int i;
    struct Jucator
    {
        int nrTricou, marimeTricou;
    };
    struct Echipa
    {
        int nrJucatori;
        Jucator juc[20];
    }E;
    cin>>E.nrJucatori;
    for(i=0; i<E.nrJucatori; i++)
    {
        cin>>E.juc[i].nrTricou>>E.juc[i].marimeTricou;
    }
}