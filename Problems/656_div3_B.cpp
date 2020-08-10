  
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
int array[2*n];
for(int i = 0; i < 2*n; i++)
	cin >> array[i];
int previous = array[0];
int array_2[n], ind = 1;
array_2[0] = previous;
for(int i = 1; i < 2*n; i++){
	if(array[i] != previous)
	{	bool ok = true;
		for(int j = 0; j < ind; j++)
			if(array[i] == array_2[j]){
				ok = false;
				break;
			}
		if(ok){
			array_2[ind] = array[i];
			previous = array[i];
			ind++;
		}


	}
	if(ind == n)
		break;

}
for(int i = 0; i < n ; i++)
	cout << array_2[i] << " ";
cout << '\n'; 
}
    return 0;
}
