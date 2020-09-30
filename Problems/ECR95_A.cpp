  
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
 ll x, y, k;
 cin >> x >> y >> k;

 ll trades = k;
 long double num_sticks = y*k + k - 1;
 trades += ceil(num_sticks/(x-1));
 
cout << trades << '\n';
}
return 0;
}