  
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
    int arr[n];
    int neg_sum = 0, pos_sum = 0;
    for(int i = 0; i < n; i++){
        cin >> arr[i];
        if(arr[i] < 0)
            neg_sum += arr[i];
        else
            pos_sum+=arr[i];
    }
   
    else{

    }
}
return 0;
}