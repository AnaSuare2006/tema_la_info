#include <iostream>
using namespace std;

int main()
{
    struct Turn
    {
        int lungime, latime, inaltime;
        char culoare[20];
    };
    Turn T[100];
    int i;
    for(i=0; i<100; i++)
    {
        cin>>T[i].lungime>>T[i].latime>>T[i].inaltime;
        cin>>T[i].culoare;
        if(T[i].latime==T[i].lungime==T[i].inaltime)
        {
            cout<<T[i].culoare;
        }
    }
}

