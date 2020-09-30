  
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
	int n;
	cin >> n;
	int arr[n];
	for(int i = 0; i < n; i++){
		cin >> arr[i];
	}
		bool ok = false;
	
	
	for(int i = 0; i < n-1; i++){
		if(arr[i] <= arr[i+1])
		{
			ok = true;
			break;
		}
	}
	if(ok)
		cout << "YES" << '\n';
	else
		cout << "NO" << '\n';
}
    return 0;
}

