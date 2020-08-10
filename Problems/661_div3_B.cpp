  
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
    int b[n];
    for(int i = 0; i < n; i++)
        cin >> a[i];
    for(int j = 0; j < n; j++)
        cin >> b[j];
    ll min_a = 1e+10, min_b = 1e+10;
    for(int i = 0; i<n ;i++)
    {
        if(a[i] < min_a){
            min_a = a[i];
        }
        if(b[i] < min_b)
            min_b = b[i];

     }
     // Min = min(min_a, min_b);
     ll moves = 0;
     for(int i = 0 ; i < n; i++)
     {
        if(a[i] != min_a && b[i] != min_b){
            if(a[i] <= b[i]){
                if(b[i] - min_b > a[i] - min_a){
                moves += a[i] - min_a;
                moves += b[i] - min_b - (a[i] - min_a);
            }
                else
                {
                    moves += b[i] - min_b;
                    moves += a[i] - min_a - (b[i] - min_b);
                }
            }
            else{
                if(a[i] - min_a > b[i] - min_b){
                    moves += b[i] - min_b;
                    moves += a[i] - min_a - (b[i] - min_b);
                }
                else
                {
                    moves += a[i] - min_a;
                    moves += b[i] - (a[i] - min_a) - min_b;
                }
            }
        }
        else{
            moves += abs(a[i] - min_a);
            moves += abs(b[i] - min_b);
        }
        // moves += min(a[i], b[i]) - Min;
     }
     cout << moves << '\n';


}
return 0;
}