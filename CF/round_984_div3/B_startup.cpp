// Problem link: https://codeforces.com/contest/2036/problem/B

#include <iostream>
#include <unordered_map>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int n, k;
        cin >> n >> k;

        unordered_map<int, int> mp;
        unordered_map<int, int> :: iterator it;
        while(k--)
        {
            int b, c;
            cin >> b >> c;
            it = mp.find(b);
            if(it!=mp.end())
            {
                mp[b] += c;
            }
            else mp.insert(make_pair(b, c));
        }
        vector<pair<int, int> > v;
        for (it=mp.begin(); it!=mp.end(); it++)
        {
            v.push_back(make_pair(it->second, it->first));
            
        }
        sort(v.begin(), v.end());
        int total=0;
        for (int i = v.size()-1; i >=0; i--)
        {
            if(n==0) break;
            total+=v[i].first;
            n--;
        }
        cout << total << endl;
        
    }
    return 0;
}