  
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
    	int n, k;
        cin >> n >> k;
        int m = (k+n)/2;
        int diff = abs(m - abs(m - n));
        cout << abs(diff - k) << '\n';
        }
    	

    
    return 0;
}
