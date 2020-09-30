  
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
 int a[n];
int ans = 0;
 for(int i = 0; i < n; i++){
 	cin >> a[i];

 }
 ans += a[0] == 1;
        for (int i = 1; i < n; ++i) {
            if (a[i] == 0) {
                continue;
            }
            int j = i;
            while (j < n && a[j] == 1) {
                ++j;
            }
            ans += (j - i) / 3;
            i = j - 1;
        }
        cout << ans << '\n';
 }
return 0;
}