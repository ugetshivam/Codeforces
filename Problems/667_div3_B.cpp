  
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
    	ll a, b, x, y, n;
        cin >> a >> b >> x >> y >> n;
        
        ll diff_1 = a-x;
        ll diff_2 = b - y;
        ll k = n, p = a, m = b;
        if(diff_1 <= k){
            p -= diff_1;
            k -= diff_1;
        }
        else{
            p -= k;
            k -= k;
        }
        if(k != 0){
        if(diff_2 <= k){
            m -= diff_2;
            k -= diff_2;
        }
        else{
            m -= k;
            k -= k;
        }
    }
    if(diff_2 <= n){
            b -= diff_2;
            n -= diff_2;
        }
        else{
            b -= n;
            n -= n;
        }
        if(n != 0){
        if(diff_1 <= n){
            a -= diff_1;
            n -= diff_1;
        }
        else{
            a -= n;
            n -= n;
        }
    }

       cout << min(a*b, p*m) << '\n';
    }

    	

    
    return 0;
}
