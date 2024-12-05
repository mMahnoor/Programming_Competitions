// Problem Link: https://codeforces.com/contest/2050/problem/0
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, m;
        cin >> n >> m;
        vector<string> s;
        for (int i = 0; i < n; i++)
        {
            string val;
            cin >> val;
            s.push_back(val);
        }
        int total=0, cnt=0;
        for (int i = 0; i < n; i++)
        {
            total+=s[i].size();
            cnt++;
            if(total>m)
            {
                cnt--;
                break;
            }
        }
        cout << cnt << "\n";
    }
    return 0;
}