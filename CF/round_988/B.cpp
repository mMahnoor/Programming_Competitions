// Problem link: https://codeforces.com/contest/2037/problem/A
#include <iostream>
#include <map>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int k;
        cin >> k;
        int a[k];
        for (int i = 0; i < k; i++)
        {
            cin >> a[i];
        }
        map<int, int> mp;
        int m=-1, n=-1;
        for (int i = 0; i < k; i++)
        {
            if((k-2)%a[i]==0)
            {
                int l = (k-2)/a[i];
                if(mp.find(l)!=mp.end())
                {
                    m=a[i];
                    n=l;
                    break;
                }
                else mp[a[i]]++;
            }
        }
        cout << m << " " << n << "\n";
        
    }
    return 0;
}