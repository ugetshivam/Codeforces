#include <bits/stdc++.h> 
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
	
	int n,m;
	cin >> n >> m;
	bool ok = true;
	bool  same_two = false;
	int bl, br, tl, tr;
	for(int i = 0; i < 2*n; i++){
		if(ok == true){
		
		cin >> tl >> tr;
		ok = false;
	}
		else{
			ok = true;
			cin >> bl >> br;
			
			if(tr == bl){
				same_two = true;
			}
		}
}
if(m % 2 != 0)
{
	cout << "NO" << '\n';
	continue;
}
if(same_two)
	cout << "YES" << '\n';
else
	cout << "NO" << '\n';
}
    return 0;
}


