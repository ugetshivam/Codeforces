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
	ll arr[n];
	for(int i = 0; i < n; i++){
		cin >> arr[i];
	}
	ll cur_sum = 0, sec_cur_sum = 0, last_neg = 0;
	int inserted = 0;
	for(int i = 0; i < n; i++){
		if(arr[i] < 0){
			if(sec_cur_sum + arr[i] == 0){
				inserted++;
				sec_cur_sum = 0;
			}
			else{
			for(int  j = i - 1; j >= 0; j--){
				cur_sum += arr[j];
				if(cur_sum + arr[i] == 0){
					inserted++;
					cur_sum = 0;
					last_neg = arr[i];
					sec_cur_sum = 0;
					break;
				}
				if(-1*(cur_sum) < arr[i]){
					last_neg = arr[i];
					cur_sum = 0;
					sec_cur_sum = 0;
					break;
				}

			}
		}
		}
		sec_cur_sum += arr[i];
		if(sec_cur_sum == 0){
			inserted++;
		}
	}
	cout << inserted <<'\n';
}
    return 0;
}


