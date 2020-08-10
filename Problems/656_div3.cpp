  
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
	int x, y, z;
	cin >> x >> y >> z;
	bool ok = true;
	if(x!=y && x!=z && y!=z){
		ok = false;
		cout << "NO" << '\n';
	}
	else{
		if(x==y && z < x){
			ok = false;
			cout << "YES" << '\n' << x << ' ' <<  z << ' ' << z << '\n';
		}
		else if(x==z && y < z){
			ok = false;
			cout << "YES" << '\n' << x << ' ' <<  y << ' ' << y<< '\n';
		}
		else if(y==z && x < y){
			ok = false;
			cout << "YES" << '\n' << y << ' ' <<  x << ' ' << x << '\n';
		}
		else if(x==y && y==z)
		{
			ok = false;
			cout << "YES" << '\n' << x << ' ' <<  x << ' ' << x << '\n';
		}
if(ok)
	cout << "NO" << '\n';

	}
}
    return 0;
}

