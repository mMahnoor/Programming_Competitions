// Problem Link: https://codeforces.com/contest/2050/problem/B
#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        int a[n], b[n];
        long long sum=0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            sum+=a[i];
        }
        if(sum%n!=0) cout << "NO\n";
        else
        {
            int target=sum/n, flag=1;
            
            for (int i = 0; i < n; i++)
            {
                b[i]=target-a[i];
            }
            
            for (int i = 1; i < n-1; i++)
            {
                a[i-1]+=b[i-1];
                a[i+1]-=b[i-1];
                b[i+1]=target-a[i+1];
            }
            for (int i = 0; i < n; i++)
            {
                if(a[i]!=target)
                {
                    flag=0;
                    break;
                }
            }
            if(flag) cout << "YES\n";
            else cout << "NO\n";
        }
        
    }
    return 0;
}