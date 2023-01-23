#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    struct punct
    {
        float x,y;
    }A,B;
    if(A.x==A.y && B.x==B.y)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}