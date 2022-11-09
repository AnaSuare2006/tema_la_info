#include <iostream>
using namespace std;

void incrementare()
{
    int a=10, *p=&a;
    ++*p;
    cout<<a<<endl; //11
    (*p)++;
    cout<<a<<endl; //12

}

int main()
{
    int a=10, b=20, *p=&a, *q=&b;
    *q=*p; //a ia valoarea lui b;
    cout<<a<<" "<<b<<endl; //10,10

    //sa scrii*p ii ca si cum ai scrie variabila memorata in p

    incrementare();
}