  
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
        string s(200, 'a');
        cout << s << '\n';
        for(int i = 0; i < n; i++){

            int x;
            cin >> x;
            s[x] = s[x] == 'a'?'b':'a';
            cout << s << '\n';
        }
    	

    }

    return 0;
}
