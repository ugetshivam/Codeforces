#include <bits/stdc++.h> 
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
	ll n;
	cin >> n;
	ll num_moves = 0;
	ll min_num_moves = 1e10;
	bool ok = true;
	for(ll i  = 1; i <= n;i++){
		num_moves = ceil(double(n)/i) + i-1-1;
		if(ok == false && num_moves > min_num_moves){
			break;
		}
		if(num_moves < min_num_moves) {
			min_num_moves = num_moves;
			ok = false;
		}
	}
	cout << min_num_moves << '\n';
}

    return 0;
}


