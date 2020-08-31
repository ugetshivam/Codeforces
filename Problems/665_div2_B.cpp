  
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
    	int x1, y1, z1;
        cin >> x1 >> y1 >> z1;
        int x2, y2, z2;
        cin >> x2 >> y2 >> z2;
        int sum = 0;

        if(z2 >= x1){
            z2 -= x1;
            x1 = 0;
        }
        else{
            x1 -= z2;
            z2 = 0;
        }
        if(z2 != 0){
            if(z2 >= z1){
                z2 -= z1;
                z1 = 0;
            }
            else{
                z1 -= z2;
                z2 = 0;
            }
        }
        if(z2 == 0)
            sum += min(z1, y2) * 2;
         else{
            y1 -= x2 + y2;
            sum += -2*(z2);
        }
        cout << sum << '\n';
        }
       
    	

    
    return 0;
}
