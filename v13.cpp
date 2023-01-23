#include <iostream>
using namespace std;

int main()
{
    struct Punct
    {
        float x, y;
    };
    struct Cerc
    {
        Punct centru;
        int raza;
    } C;
    cin>>C.centru.x>>C.centru.y;
    cin>>C.raza;
    if(C.centru.y==0 && C.raza>=C.centru.x)
    {
        cout<<1;
    }
}
