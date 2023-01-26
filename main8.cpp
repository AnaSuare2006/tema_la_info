#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int f1, f2;
    struct punct
    {
        int x, y;
    };
    struct segment
    {
        punct a, b;
        float l;
    };
    int n, i;
    cin >> n;
    segment s[n + 1];
    struct cautat
    {
        float l;
        punct a, b;
    } mn, mx;
    cin >> s[1].a.x >> s[1].a.y >> s[1].b.x >> s[1].b.y;
    f1 = s[1].a.x - s[1].b.x;
    f2 = s[1].a.y - s[1].b.y;
    s[1].l = sqrt(f1*f1 + f2*f2);
    mn.l = s[1].l;
    mx.l = s[1].l;
    mn.a.x = s[1].a.x;
    mn.a.y = s[1].a.y;
    mn.b.x = s[1].b.x;
    mn.b.y = s[1].b.y;
    mx.a.x = s[1].a.x;
    mx.a.y = s[1].a.y;
    mx.b.x = s[1].b.x;
    mx.b.y = s[1].b.y;
    cout << s[1].l << endl;
    for (i = 2; i <= n; i++)
    {
        cin >> s[i].a.x >> s[i].a.y >> s[i].b.x >> s[i].b.y;
        f1 = s[i].a.x - s[i].b.x;
        f2 = s[i].a.y - s[i].b.y;
        s[i].l = sqrt(f1 * f1 + f2 * f2);
        cout << s[i].l << endl;
        if (s[i].l < mn.l)
        {
            mn.a.x = s[i].a.x;
            mn.a.y = s[i].a.y;
            mn.b.x = s[i].b.x;
            mn.b.y = s[i].b.y;
            mn.l = s[i].l;
        }
        if (s[i].l >= mx.l)
        {
            mx.a.x = s[i].a.x;
            mx.a.y = s[i].a.y;
            mx.b.x = s[i].b.x;
            mx.b.y = s[i].b.y;
            mx.l = s[i].l;
        }
    }
    cout << mx.a.x << " " << mx.a.y << " " << mx.b.x << " " << mx.b.y << endl;
    cout << mn.a.x << " " << mn.a.y << " " << mn.b.x << " " << mn.b.y << endl;
    //    4
    // 1 2 3 4
    // 2 3 1 2
    // 1 1 1 2
    // 2 3 5 6
}