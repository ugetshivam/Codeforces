  
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
        int w[n];
        for(int i = 0;i < n; i++)
            cin >> w[i];
        int ans = 0;
        for(int i = 2; i < 101; i++){
            int count[101] = {0};
            int pairs = 0;
            for(int j : w){
                if(i > j && count[i-j] != 0){
                    count[i-j]--;
                    pairs++;
                }
                else
                    count[j]++;
            }
            ans = max(ans, pairs);
        }
        cout << ans << '\n';
        }
    	

    
    return 0;
}
