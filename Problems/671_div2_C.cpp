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
	int arr[n];
	int infected = 0, check = 0;
	for(int i = 0;i < n; i++){
		cin >> arr[i];
		if(arr[i] == x)
			infected++;
		check += arr[i] - x;
	}
	if(infected == n)
		cout << 0 << '\n';
	else if(infected > 0){
		cout << 1 << '\n';
	}
	else{
		if(!check)
			cout << 1 << '\n';
		else
			cout << 2 <<'\n';
	}

}

    return 0;
}


