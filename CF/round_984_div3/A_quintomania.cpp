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

        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int current_note = a[0], flag=1;
        for (int i = 1; i < n; i++)
        {
            int seminote = abs(current_note-a[i]);
            if(!(seminote==5 || seminote==7))
            {
                flag=0;
            }
            current_note=a[i];
            
        }
        if(flag) cout << "YES\n";
        else cout << "NO\n";
        
    }
    return 0;
}