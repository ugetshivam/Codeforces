  
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
int gcd(int i, int j){
    if(i == 0){
        return j;
    }
    return gcd(j%i ,i);
}
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
    	int len;
        cin >> len;
        int arr[len], copy[len];
        for(int i = 0;i < len; i++){
            cin >> arr[i];
            copy[i] = arr[i];
        }
        bool ok = true;
        sort(arr, arr+len);
        int MIN_Element = arr[0];
        for(int i = 0; i < len; i++){
            if(copy[i] == arr[i])
                continue;
            else{
                if(copy[i] % MIN_Element != 0){
                    ok = false;
                    break;
                }
                // else{
                //     if(gcd(min(arr[i], copy[i]), max(arr[i], copy[i])) != MIN_Element){
                //         ok = false;
                //         break;
                //     }

                }
            
        }
        if(ok)
            cout << "YES" << '\n';
        else
            cout << "NO" << '\n';
        }
            
       
    	

    
    return 0;
}
