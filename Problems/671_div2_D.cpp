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
  
    	int n;
        cin >> n;
        int arr[n];
        int p;
        cin >> p;
        arr[0] = p;
        int m = 1;
        int temp = 0;

        for(int  i = 1; i < n; i++){
            int k;
            cin >> k;
            if(m == 1){
            if(k > arr[i-1]){
                temp = arr[i-1];
                arr[i-1] = k;
                arr[i] = temp;
            }
            else
                arr[i] = k;
            m++;
        }
        else if(m == 2){
            if(k < arr[i-1]){
                temp = arr[i-1];
                arr[i-1] = k;
                arr[i] = temp;
            }
            else
                arr[i] = k;
            m = 1;
        }

        }
        int ans = 0;
        if(n < 3)
            ans = 0;
       else if(n%2 != 0){
        for(int i = 1; i < n-1; i+=2){
            ans++;
        }
    }
    else
        for(int i = 1; i < n-2; i+=2){
            ans++;
        }
        cout << ans << '\n';
        for(int i = 0; i < n; i++){
            cout << arr[i] << " ";
        }
        cout << '\n';
return 0;
    }
	

