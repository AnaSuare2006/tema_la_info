#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    struct dreptunghi
    {
        float lungime, latime, diagonala;
    };
    int d,n,i;
    cin>>d>>n;
    dreptunghi r[n];
    for(i=0; i<n; i++)
    {
        cin>>r[i].lungime>>r[i].latime;
        r[i].diagonala=sqrt(pow(r[i].lungime,2)+pow(r[i].latime,2));
        if(r[i].diagonala==d)
        {
            cout<<"dreptunghiul de pe pozitia"<<" "<<i;
        }
    }


}