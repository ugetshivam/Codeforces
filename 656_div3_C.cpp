  
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
	int array[n];
	bool ok = true;
	for(int i = 0; i < n; i++)
		cin >> array[i];
	int ind = 0;
	if(array[n-1] > array[n-2]){
	for(int i = n-2; i >= 1; i--){
		if(array[i] < array[i-1])
		{
			ind = i;
			break;
		}
	}
}
	else{
		
		for(int i = n-2; i >= 1; i--){
			if(array[i] > array[i-1] && ok)
			{
				ok = false;
			}
			if(!ok)
				if(array[i] < array[i-1]){
					ind = i;
					break;
				}
			}
	}
	cout << ind << '\n';
}
    return 0;
}
