#include<iostream>
using namespace std;
int n,x,v[10],m;
int caut (int s, int d)
{
    if(s>d)
        return -1;
    else
        {
            m =(s+d)/2;
            if (x==v[m])
                return m;
            if (x<v[m])
                return caut(s,m-1);
            else
                return caut(m+1,d);
        }
}
int main()
{ 
    cout<<"n,x ";
    cin>>n>>x;
    cout<<"dati "<<n<<" elemente (in ordine crescatoare).\n";
    for (int i=1;i<=n;i++)
        cin>>v[i];
    cout<<"elementul "<<x<<" a fost gasit pe pozitia: "<<caut (1,n);
    return 0;
}