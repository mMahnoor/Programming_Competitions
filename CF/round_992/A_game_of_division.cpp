#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, k;
        cin >> n >> k;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int id=-1, flag=1;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if(i!=j)
                {
                    // cout << i << " " << j << "\n";
                    if(abs(a[i]-a[j])%k==0)
                    {
                        flag=0;
                        break;
                    }
                }
            }
            if(flag) id=i+1;
            flag=1;
        }
        if(id!=-1)
        {
            cout << "YES\n";
            cout << id << "\n";
        }
        else cout << "NO\n";
    }
    return 0;
}