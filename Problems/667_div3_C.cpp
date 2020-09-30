  
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
    	int n, x, y;
        cin >> n >> x >> y;
        int diff = y - x;
        for (int delta = 1; delta <= diff; ++delta) {
            if (diff % delta) continue;
            if (diff / delta + 1 > n) continue;
            int k = min((y - 1) / delta, n - 1);
            int a0 = y - k * delta;
            for (int i = 0; i < n; ++i) {
                cout << (a0 + i * delta) << ' ';
            }
            cout << endl;
            break;
        }
        
        }
    	

    
    return 0;
}
