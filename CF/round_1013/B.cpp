#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, x;
        cin >> n >> x;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a.begin(), a.end(), greater<int>());
        int cnt=0, maxV=0, minE=INT_MAX;
        for (int i = 0; i < n; i++)
        {
            minE = min(a[i], minE);
            if(a[i]>=x) maxV++;
            else
            {
                cnt++;
                if(cnt*minE>=x) 
                {
                    maxV++;
                    cnt=0;
                }
            }
        }
        cout << maxV << "\n";
    }
    return 0;
}