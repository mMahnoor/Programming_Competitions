#include<iostream>
#include<algorithm>
#include<vector>
#include<map>
#include<set>
#include<string>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        long long sum = a+b+c;
        if(sum%3==0)
        {
            long long avg = sum/3;
            if(avg>=a && avg>=b) cout << "YES\n";
            else cout << "NO\n";
        }
        else cout << "NO\n";
    }
    return 0;
}