#include <iostream>
#include <cstring>
#include <cctype>
#include <cstdlib>

using namespace std;

void wrap(int n, char s[])
{
    int i, j = 0;
    char *p;
    p = strtok(s, " ");
    while (p)
    {
        for (i = 1; i <= strlen(p); i++)
        {
            cout << p[i - 1];
        }
        if (i < n)
        {
            cout << " ";
            i++;
        }
        if (i == n)
        {
            p = strtok(NULL, " ");
        }
        else
        {
            p = strtok(NULL, " ");
            j = i;
            if (n - j + 1 < strlen(p))
            {
                while (j < n)
                {
                    cout << "*";
                    j++;
                }
                cout << endl;
            }
            else
            {
                cout << p;
                if (i + strlen(p) == n)
                {
                    cout << endl;
                }
                else
                {
                    while (i < n)
                    {
                        cout << "*";
                        j++;
                    }
                    i=0;
                    cout<<endl;
                }
            }
        }
    }
}

int main()
{
    char s[200];
    int n;
    cin >> n;
    cin.get();
    cin.getline(s, 200);
    wrap(n, s);
}