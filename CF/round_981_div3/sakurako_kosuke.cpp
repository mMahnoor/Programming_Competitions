// Problem link: https://codeforces.com/contest/2033/problem/0

#include <iostream> 
#include <cstdlib>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int n;
        cin >> n;
        
        int i=1, x=0;
        while(abs(x)<=n)
        {
            int unit = (2*i) - 1;
            if(i%2!=0)
            {
                x += (-1)*unit;
            }
            else{
                x += unit;
            }
            i++;
        }
        if(i%2!=0) cout << "Kosuke\n";
        else cout << "Sakurako\n";
    }
    return 0;
}