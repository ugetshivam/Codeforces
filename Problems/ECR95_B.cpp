  
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
 for(int i = 0; i < n ;i++){
 	cin >> arr[i]; 
 }
 vector<int> unlocked;
 vector<int> values_unlocked;
 bool ok = false;
 for(int i = 0; i < n ;i++){
 	int l;
 	cin >> l;
 	if(l == 0){
 		ok = true;
 		unlocked.push_back(i);
 		values_unlocked.push_back(arr[i]);
 	}
 }
 if(ok){
 sort(values_unlocked.begin(), values_unlocked.end(), greater<int>());
 for(int i = 0; i < values_unlocked.size(); i++){
 	arr[unlocked[i]] = values_unlocked[i];
 }
 
}
 for(int i = 0;i < n; i++){
 	cout << arr[i] << " ";
 }
 cout << '\n'; 
}
return 0;
}