  
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
int n, m;
cin >> n >> m;
int a[n];
vector <int> p(n);
for(int i = 0;i < n; i++)
	cin >> a[i];
for(int i = 0; i < m; i++)
	{   int k;

	cin >> k;
	p[k-1] = 1;
}
bool ok = false, ok_2 = false;
while(true){
	ok = false;
for(int i = 0; i < n-1; i++){
	if(a[i] > a[i+1])
	{
		if(p[i]){

		int temp = a[i];
		a[i] = a[i+1];
		a[i+1] = temp;
		ok = true;
		}
		else{
			ok = false;
			cout << "NO" << '\n';
			ok_2 = true;
			break;
		}
	}
}
if(!ok){
		break;
	}	
}
if(!ok_2){
	for(int i = 0; i< n-1; i++)
	{
		if(a[i] <= a[i+1])
			ok_2 = true;
		else{
			ok_2 = false;
			break;
		}
	}
	if(ok_2)
		cout << "YES" << '\n';
	else
		cout << "NO" << '\n';
}


 }

    return 0;

}