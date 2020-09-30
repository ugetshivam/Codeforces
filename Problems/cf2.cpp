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
            ll n, T;
            cin >> n >> T;
            ll arr[n];
            for(int i = 0; i < n; i++){
                cin >> arr[i];
            }
            bool ok = false;
            if(T % 2 == 0){
            for(int i = 0; i < n; i++){
                if(arr[i] < T/2)
                    cout << 1 << " ";
                else if(arr[i] > T/2)
                    cout  << 0 << " ";
                else{
                    if(ok == false){
                        cout << 0 << " ";
                        ok = true;
                    }
                    else{
                        cout << 1 << " ";
                        ok = false;
                    }
                }
                }
            }
            else{
                for(int i = 0; i < n; i++){
                    if(arr[i] % 2 == 0)
                        cout << 1 << " ";
                    else
                        cout << 0 << " ";
                }
            }
            cout << '\n';
        }
return 0;
    }
	

