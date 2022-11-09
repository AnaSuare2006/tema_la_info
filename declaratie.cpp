#include <iostream>
using namespace std;

int main()
{
    int a=2,b=3;
    int *p=&a, *q;
    *q=b;
    cout<<p<<" "<<q<<endl;  //arata adresele lui a si b
    cout<<*p<<" "<<*q<<endl; //arata valoarea lui a si b
    cout<<&p<<" "<<&q<<endl; //arata adresele pointerilor p si q
    p=&a;
    cout<<p<<" "<<*p<<endl;//adresa lui a, valoarea lui a

}