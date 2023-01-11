#include <iostream>
#include <cstring>
#include <cctype>
#include <cstdlib>

using namespace std;

int main()
{
    char c[20];
    cin >>c;
    char s[200];
    char aux[200];
    char sir[200];
    char *p1, *p2;
    int nr,mx=0;
    cin.get();
    cin.getline(s,200);
    p1 = strtok(s, ".");
    while (p1 != NULL)
    {
        nr=0;
        strcpy(aux, p1);
        p2 = strtok(aux, " ");
        while (p2 != NULL)
        {
            if (strcmp(c,p2) == 0)
            {
                nr++;
            }
            if(nr>=mx)
            {
                //se va copia fara punct
                strcpy(sir,p1);
            }
            p2 = strtok(NULL," ");
        }
        p1 = strtok(NULL, ".");
    }
    cout<<sir<<".";
}
//avion
//Din avion vezi un cer albastru si un alt avion. Pe aeroport aterizeaza un avion.

//optimizare??