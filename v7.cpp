#include <iostream>
using namespace std;

int main()
{
    struct punct
    {
        float x, y;
    } A, B;
    if ((A.x == 0 && B.x == 0) || (A.y == 0 && B.y == 0))
        return 1;
}