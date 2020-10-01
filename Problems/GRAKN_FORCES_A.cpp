#include <bits/stdc++.h> 
using namespace std;
typedef long long ll;
#define pb push_back
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
	int a[n], b[n], c[n];
	vector<int> v;
	for(int i = 0; i < n; i++)
		cin >> a[i];
	for(int i = 0; i < n; i++)
		cin >> b[i];
	for(int i = 0; i < n; i++)
		cin >> c[i];
	v.pb(a[0]);
	for(int i = 1; i < n; i++){
		
		
		if(a[i] == v[i-1]){
			if(i == n-1 && b[i] == v[0])
				v.pb(c[i]);
			else
				v.pb(b[i]);
		}
		else{
			if(a[i] != v[0])
				v.pb(a[i]);
			else if(b[i] != v[0] && b[i] != v[i-1])
				v.pb(b[i]);
			else
				v.pb(c[i]);
		}
	}
	for(int i = 0; i < n ;i++){
		cout << v[i] << " ";
	}
	cout << '\n';
	}
	return 0;
}


