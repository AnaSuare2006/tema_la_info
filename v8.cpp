#include <iostream>
using namespace std;

int main()
{
    struct triunghi 
    {
        float a,b,c;
    }t;
    cin>>t.a>>t.b>>t.c;
    if((t.a==t.b && t.a!=t.c)||(t.a==t.c && t.a!=t.b)||(t.b==t.c && t.b!=t.c))
    {
        cout<<"DA";
    }
}