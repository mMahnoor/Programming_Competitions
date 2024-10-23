#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;

int main() {
	int T;
	cin >> T;
	
	while(T--)
	{
	   int N, M, flag=0;
	   cin >> N >> M;
	   string sA, sB;
	   cin >> sA;
	   cin >> sB;
	   unordered_map<char, int> mp = {{'a',0},{'b',0},{'c',0},{'d',0},{'e',0},{'f',0},{'g',0},{'h',0},{'i',0},{'j',0},{'k',0},{'l',0},{'m',0},{'n',0},{'o',0},{'p',0},{'q',0},{'r',0},{'s',0},{'t',0},{'u',0},{'v',0},{'w',0},{'x',0},{'y',0},{'z',0}};
	   for(int i=0; sA[i]!='\0'; i++)
	   {
	       mp[sA[i]]=1;
	   }
	   for(int i=0; sB[i]!='\0'; i++)
	   {
	       mp[sB[i]]=1;
	   }
	   for (auto a : mp) 
	   {
            if (a.second==0) flag=1;
            
        }
        if(flag==0) cout << "NO\n";
        else cout << "YES\n";
	}
    return 0;
}
