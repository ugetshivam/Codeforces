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
    	string number;
    	cin >> number;
    	bool breach = false, raze = false;
    	if(n%2==0){
    		for(int i = 1; i < n; i += 2){
    			if(int(number[i]) % 2 == 0){
    				breach = true;
    				break;
    			}
    		}
    		if(breach)
    			cout << 2 << '\n';
    		else
    			cout << 1 << '\n';
    	}
    	else{
    		for(int i = 0; i < n; i += 2){
    			if(int(number[i]) % 2 != 0){
    				raze = true;
    				break;
    			}
    		}
    		if(raze)
    			cout << 1 << '\n';
    		else
    			cout << 2 << '\n';
    	}

    }
	return 0;
}
