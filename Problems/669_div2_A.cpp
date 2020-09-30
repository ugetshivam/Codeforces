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
	int n;
	cin >> n;
	int arr[n];
	int remains = 0;
	int cnt1 = 0, cnt0= 0;
for(int i = 0;i < n; i++){
	cin >> arr[i-1];
	if(arr[i-1] == 0)
		cnt0++;
	else
		cnt1++;
}
	int ans;
	if(cnt1 <= n/2){
		ans = cnt0;
		cout << ans << '\n';
		for(int i = 0; i < ans; i++)
			cout << 0 << " ";
	}
	else{
		if(cnt0 <= n/2)
		{
			ans = cnt1 - cnt1%2;
			cout << ans << '\n';
			for(int i = 0; i < ans; i++){
				cout << 1 << " ";
			}
		}
	}
cout << '\n';
}

    return 0;
}


