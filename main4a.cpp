#include <iostream>
using namespace std;

int main()
{
    struct data
    {
        int zi, luna, an;
    } a, b,c;
    cin >> a.zi >> a.luna >> a.an;
    cin >> b.zi >> b.luna >> b.an;
    // care este data mai recenta?
    //presupunand ca vorbim de date trecute
    if (b.an > a.an)
    {
        cout << b.zi << " " << b.luna << " " << b.an << endl;
    }
    else
    {
        if (a.an < b.an)
        {
            cout << a.zi << " " << a.luna << " " << a.an << endl;
        }
        else
        {
            if (b.luna > a.luna)
            {
                cout << b.zi << " " << b.luna << " " << b.an << endl;
            }
            else
            {
                if (b.luna < a.luna)
                {
                    cout << a.zi << " " << a.luna << " " << a.an << endl;
                }
                else
                {
                    if(a.zi>b.zi)
                    {
                        cout << a.zi << " " << a.luna << " " << a.an << endl;
                    }
                    else
                    {
                        cout << b.zi << " " << b.luna << " " << b.an << endl;
                    }
                }
            }
        }
    }

}