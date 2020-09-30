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
            int n, k;
            cin >> n >> k;
            bool breaking_point = false;
            int spells = 0, Min = 1e5, index_min = -1;
            int arr[n];
            for(int i = 0;i < n; i++){
                cin >> arr[i]; 
                if(arr[i] < Min){
                    Min = arr[i];
                    index_min = i;
                }
                if(arr[i] > k)
                    breaking_point = true;
            }
            if(breaking_point)
                cout << 0 << '\n';
            else{

            for(int i = 0;i < n; i++){
                if(i == index_min)
                    continue;
                else{
                    int x = (k-arr[i])/Min;
                    arr[i] += x*Min;
                    spells += x;
                }
            }
            cout << spells << '\n';
    }

        }
return 0;
    }
	

