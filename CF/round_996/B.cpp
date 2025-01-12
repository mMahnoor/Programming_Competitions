#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        vector<int> a(n), b(n), tmp;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }
        int cnt=0, val=0;
        for (int i = 0; i < n; i++)
        {
            if(a[i]<b[i]) 
            {
                cnt++;
                val=b[i]-a[i];
            }
            else tmp.push_back(a[i]-b[i]);
        }
        if(cnt>1) cout << "NO\n";
        else
        {
            int flag=1;
            if(cnt)
            {
                for (int i = 0; i < tmp.size(); i++)
                {
                    if(val>tmp[i]) 
                    {
                        flag=0;
                        break;
                    }
                }
            }
            if(flag) cout << "YES\n";
            else cout << "NO\n";
        }
    }
    return 0;
}