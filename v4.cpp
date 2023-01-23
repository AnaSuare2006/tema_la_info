#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    struct complex
    {
        int pre;
        int pim;
    };
    complex z;
    cin>>z.pre>>z.pim;
    cout<<sqrt(z.pre*z.pre+z.pim*z.pim);
}