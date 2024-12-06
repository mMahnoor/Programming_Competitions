#include <iostream>
#include <map>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        string n;
        cin >> n;
        map<char, int> mp;
        long long sum=0;
        for (int i = 0; i < n.size(); i++)
        {
            long long val = n[i]-'0';
            if(val==2) mp[2]++;
            else if(val==3) mp[3]++;
            sum+=val;
        }
        if(sum%9==0) cout << "YES\n";
        else
        {
            long long tmp, diff;
            int flag=0;
            if(sum<9) diff=9-sum;
            else 
            {
                tmp=sum-(sum%9);
                tmp+=9;
                diff=tmp-sum;
            }
            if(diff==2 && mp[2]>=1) flag=1;
            else if(diff==4 && mp[2]>=2) flag=1;
            else if(diff==6)
            {
                if(mp[3]>=1 || mp[2]>=3) flag=1;
            }
            else if(diff==8)
            {
                if(mp[2]>=4 || (mp[3]>=1 && mp[2]>=1)) flag=1;
            }
            else{
                if(diff==1)
                {
                    if(mp[2]>=5 || (mp[2]>=2 && mp[3]>=1)) flag=1;
                }
                if(diff==3)
                {
                    if(mp[2]>=6 || mp[3]>=2 || (mp[2]>=3 && mp[3]>=1)) flag=1;
                }
                if(diff==5)
                {
                    if(mp[2]>=7 || (mp[2]>=1 && mp[3]>=2) || (mp[2]>=4 && mp[3]>=1)) flag=1;
                }
                if(diff==7)
                {
                    if(mp[2]>=8 || (mp[2]>=2 && mp[3]>=2) || (mp[2]>=5 && mp[3]>=1)) flag=1;
                }
            }
            if(flag) cout << "YES\n";
            else cout << "NO\n";
        }
    }
    return 0;
}