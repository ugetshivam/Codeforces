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
	int n, x;
	cin >> n >> x;
	int current_apart = 2, current_floor = 1;
	while(current_apart < n){
		current_floor++;
		current_apart = (current_floor-1)*x + 2;
	}
	cout << current_floor << '\n';
}

    return 0;
}


