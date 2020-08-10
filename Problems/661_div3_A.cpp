  
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
    for(int i = 0; i < n; i++)
    	cin >> a[i];
    sort(a, a+n);
    bool ok = true;
    for(int j = 0; j < n-1; j++)
    {
    	if(abs(a[j] - a[j+1]) > 1){
    		ok = false;
    		break;
    	}
    }
    if(ok)
    	cout << "YES" << '\n';
    else
    	cout << "NO" << '\n';
}
return 0;
}