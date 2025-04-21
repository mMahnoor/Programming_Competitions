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
        int n;
        cin >> n;
        set<int> a;
        for (int i = 0; i < n; i++)
        {
            int v;
            cin >> v;
            a.insert(v);
        }
        cout << a.size() << "\n";
    }
    return 0;
}