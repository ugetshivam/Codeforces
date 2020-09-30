  
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
        ll moves = 0;
    	ll a, b;
        cin >> a >> b;
        if(a > b){
            moves += (a-b)/10;
            if((a-b)% 10 != 0)
                moves++;   
        }
        else if(b > a){
             moves += (b-a)/10;
            if((b-a)% 10 != 0)
                moves++; 
        }
        cout << moves << '\n';
        }
        
    	

    
    return 0;
}
