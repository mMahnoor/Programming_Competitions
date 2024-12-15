#include <iostream>
#include <string>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        long long m, a, b, c;
        cin >> m >> a >> b >> c;
        long long maxN=0, m1=m, m2=m;
        if(m>a)
        {
            maxN+=a;
            m1-=a;
        }
        else
        {
            maxN+=m;
            m1=0;
        }
        if(m>b)
        {
            maxN+=b;
            m2-=b;
        }
        else
        {
            maxN+=m;
            m2=0;
        }
        if((m1+m2)>c)
        {
            maxN+=c;
        }
        else maxN+=(m1+m2);
        cout << maxN << "\n";
    }
    return 0;
}