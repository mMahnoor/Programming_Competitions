// Problem Link: https://codeforces.com/contest/2027/problem/A

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
        int max_n=n;
        vector<pair<int,int> > v;
        while(n--)
        {
            int wi, hi;
            cin >> wi >> hi;
            v.push_back(make_pair(wi,hi));
            if(wi>max_n) max_n=wi;
            if(hi>max_n) max_n=hi;
        }
        if(max_n==1)
        {
            cout << 4 << endl;
        }
        else
        {
            int grid[max_n][max_n];
            for (int i = 0; i < max_n; i++)
            {
                for (int j = 0; j < max_n; j++)
                {
                    grid[i][j]=0;
                }
                
            }
            vector<pair<int,int> >::iterator begin = v.begin();
            vector<pair<int,int> >::iterator end = v.end();
            while(begin!=end)
            {
                for (int i = 0; i < (*begin).first; i++)
                {
                    for (int j = 0; j < (*begin).second; j++)
                    {
                        if(grid[i][j]==0) grid[i][j]=1;
                    }
                    
                }
                begin++;
            }
            int perimemter=0;
            for (int i = 0; i < max_n; i++)
            {
                for (int j = 0; j < max_n; j++)
                {
                    if(grid[i][j]==1)
                    {
                        if((i==0&&j==0)||(i==max_n-1&&j==max_n-1)||(i==0&&j==max_n-1)||(i==max_n-1&&j==0))
                        {
                            perimemter+=2;
                        }
                        else if(i==0||j==0||i==max_n-1||j==max_n-1)
                        {
                            perimemter+=1;
                        }
                        if(i+1!=max_n) if(grid[i+1][j]==0) perimemter+=1;
                        if(j+1!=max_n) if(grid[i][j+1]==0) perimemter+=1;
                        
                    }
                    
                }
                
            }
            cout << perimemter << "\n";
        }
        
        
    }
    return 0;
}