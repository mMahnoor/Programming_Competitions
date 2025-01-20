#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, cnt_even=0, cnt_odd=0, s=0;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if(a[i]%2==0) cnt_even++;
            else cnt_odd++;
        }
        if(cnt_even>0) s++;
        if(cnt_odd) 
        {
            if(cnt_even) s+=cnt_odd;
            else s+=cnt_odd-1;
        }

        cout << s << "\n";
    }
    return 0;
}