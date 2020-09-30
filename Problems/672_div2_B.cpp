  
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
	int n, q;
	cin >> n >> q;
	int arr[n];
	for(int i = 0; i < n; i++)
		cin >> arr[i];
	int max_sum = 0, in_index = 0, end_index = 0, alter_sum = 0;
	for(int i = 0; i < n ;i+=2){
		if(arr[i] - arr[i-1] > alter_sum){
			alter_sum = 0;
			max_sum = 0;
		}
		alter_sum += arr[i] - arr[i+1];
		if(alter_sum > max_sum){
			max_sum = alter_sum;
			index = i+1;
		}
	}
}
    return 0;
}

