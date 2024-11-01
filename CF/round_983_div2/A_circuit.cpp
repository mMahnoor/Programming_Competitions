// Problem link: https://codeforces.com/contest/2032/problem/0

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
        int a[2*n];

        for (int i = 0; i < 2*n; i++)
        {
            cin >> a[i];
        }

        int min_c, max_c, cnt_zeros=0, cnt_ones=0;
        for (int i = 0; i < 2*n; i++)
        {
            if(a[i]==0) cnt_zeros++;
            else cnt_ones++;
        }

        if(cnt_ones==cnt_zeros) max_c=n;
        else{
            max_c=min(cnt_ones,cnt_zeros);
        }
        if(cnt_ones%2==0) min_c=0;    
        else{
            min_c=1;
        }

        cout << min_c << " " << max_c << endl;
        
    }
    return 0;
}