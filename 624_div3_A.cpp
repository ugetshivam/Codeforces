  
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
	int a, b;
	cin >> a >> b;
	int diff = a-b;
	int moves = 0;
	if(diff < 0)
	{
		if(abs(diff) % 2 != 0)
			cout << 1 << '\n';
		
		else
			cout << 2 << '\n';
		
	}
	else if(diff > 0)
	{
		if(diff % 2 == 0)
			cout << 1 << '\n';
		else
			cout << 2 << '\n';
	}
	else
		cout << 0 << '\n';

}
    

    return 0;

}