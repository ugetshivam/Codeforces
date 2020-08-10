  
#include <iostream>
#include <algorithm>
#include <vector>
#include <utility>
#include <queue>
#include <string>
#include <cmath>
#include <string>
using namespace std;
typedef long long ll;
int freq(string s, int start, int end, char c)
{
	int count = 0;
	for(int i = start; i <= end; i++)
	{
		if(s[i] != c)
			count++;
	}
	return count;
}
int solve(string s, int start, int end, char c){
	if(start == end)
		if(s[start] != c)
		return 1;
	else
		return 0;
	
		int mid = (start+end)/2;
		
		return min(freq(s,start, mid,c) + solve(s,mid+1,end,c+1), freq(s,mid+1,end,c) + solve(s,start, mid,c+1) );
	
}
int main(){
#ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("inputf.in", "r", stdin);
    // for writing output to output.txt
    freopen("outputf.in", "w", stdout);
#endif
int t;
cin >> t;
while(t--){
	int n;
	cin >> n;
	string s;
	cin >> s;
	cout << solve(s,0,n-1,'a') << '\n';
}
    return 0;
}
