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
        int n;
        cin >> n;
        map<int, int> mp;
        for (int i = 0; i < n; i++)
        {
            int val;
            cin >> val;
            mp[val]++;
        }
        int max_score=0;
        for (map<int, int>::iterator it = mp.begin(); it != mp.end(); it++)
        {
            int m = it->second;
            if(m%2==0)
            {
                max_score+=m/2;
            }
            else
            {
                int k = m%2;
                max_score+=(m-k)/2;
            }
        }
        cout << max_score << "\n";
        
    }
    return 0;
}