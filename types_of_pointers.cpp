#include <iostream>
using namespace std;

int main()
{
    int *pointer;
    char *z;
    float *q;
    void *a; //pointerul poate memora adresa oricarui tip de variabila
    int *p=NULL;
    //cout<<*p<<" "<<*pointer<<endl;
    //cout<<&p<<" "<<&pointer<<endl;

    cout<<p<<" "<<pointer<<endl;  //arata adresele memorate
    cout<<*p<<" "<<*pointer<<endl;

    //nu afiseaza nica la ambele??

    int anuta=2;
    int *const x= &anuta;
    //cout<<*x<<" "<<x;

    //ATENTIE! PT POINTERI FARA TIP (VOID)
    //NU POTI FOLOSI * DECAT DACA FACI
    //CONVERSIE EXPLICITA LA UN POINTER CU TIP
    //cout<< *(int *)a; //afiseaza continutul 
    //zonei de memorie atribuite

}