  
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
	int n, k, l;
	cin >> n >> k >> l;
	int depth[n];
	int max = -1;
	for(int i = 0; i < n; i++){
		cin >> depth[i];
		if(depth[i] > max)
			max = depth[i];
	}
	if(max > l)
		cout << "No" << '\n';
	else if(max + k < l)
		cout << "Yes" << '\n';
	else{
		for(int i = 0; i < n; i++)
	}



}    

    return 0;

}