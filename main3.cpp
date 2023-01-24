#include <iostream>
using namespace std;

int main()
{
    int v[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
    struct data
    {
        int zi,luna,an;
    }azi,peste_n;
    int n;
    cin>>n;
    cin>>azi.zi>>azi.luna>>azi.an;
    if(azi.zi+n>v[azi.luna])
    {
        peste_n.luna=(azi.luna+1)%12;
        peste_n.zi=azi.zi+n-v[azi.luna];
    }
    else
    {
        peste_n.zi=azi.zi+n;
        peste_n.luna=azi.luna;
    }
    if(azi.luna+1>12)
    {
        peste_n.an=azi.an+1;
    }
    else
    {
        peste_n.an=azi.an;
    }
    cout<<peste_n.zi<<" "<<peste_n.luna<<" "<<peste_n.an;

}