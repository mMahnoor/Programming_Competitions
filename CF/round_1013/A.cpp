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
        int zeros=0, ones=0, twos=0, threes=0, fives=0;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int cnt=0;
        for (int i = 0; i < n; i++)
        {
            cnt++;
            if(a[i]==0) zeros++;
            else if(a[i]==1) ones++;
            else if(a[i]==2) twos++;
            else if(a[i]==3) threes++;
            else if(a[i]==5) fives++;
            if(zeros>=3 && ones>=1 && twos>=2 && threes>=1 && fives>=1)
            {
                break;
            }
        }
        if(zeros>=3 && ones>=1 && twos>=2 && threes>=1 && fives>=1)
        {
            cout << cnt << "\n";
        }
        else cout << "0\n";
    }
    return 0;
}