#include <iostream>
#include <map>
#include <cmath>
using namespace std;

long long calc1(int m)
{
    return 1LL*((m*m)/4);
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, a=0, b=0, c=0, flag=0;
        cin >> n;
        map<int, int> mp;
        for (int i = 0; i < n; i++)
        {
            int val;
            cin >> val;
            mp[val]++;
        }
        for(auto it=mp.begin(); it!=mp.end(); it++)
        {
            if(it->second>3){
                a=it->first;
                b=it->first;
                c=it->first;
                break;
            }
            else if(it->second>1)
            {
                if(!flag) 
                {
                    flag=1;
                    c=it->first;
                }
                else{
                    a=it->first;
                    b=it->first;
                    break;
                }

            }
        }
        if(a==0 && b==0)
        {
            if(c)
            {
                auto it=mp.begin();
                for(; it!=mp.end(); it++)
                {
                    if(it->first==c) 
                    {
                        it->second-=2;
                        break;
                    }
                }
                if(it->second==0) mp.erase(it->first);
                int p=mp.begin()->first;
                int q=100000005;
                for(auto it=++mp.begin(); it!=mp.end(); it++)
                {
                    q=min(q, (it->first-p));
                    p=it->first;
                }
                long long y=calc1(q);
                if(y<(1LL*c*c))
                {
                    int m=mp.begin()->first, n;
                    for(auto it=++mp.begin(); it!=mp.end(); it++)
                    {
                        if(it->first-m==q)
                        {
                            n=it->first;
                            break;
                        }
                        m=it->first;
                    }
                    a=m;
                    b=n;
                }
            }
        }
        if(a && b && c) cout << c << " " << c << " " << a << " " << b << "\n";
        else cout << "-1\n";
    }
    return 0;
}