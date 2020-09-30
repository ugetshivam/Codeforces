  
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
#ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("inputf.in", "r", stdin);
    // for writing output to output.txt
    freopen("outputf.in", "w", stdout);
#endif
int n, k;
cin >> n >> k;
string t;
cin >> t;
int len = 1;
for(int i = 1; i < t.length(); i++){
	bool ok = false;
	if(t.substr(0,len) == t.substr(i,len)){
		ok = true;
		for(int j = i+len; j < t.length()/len - 2; j++){
			if(t.substr(0, len) != t.substr(j,len)){
				ok = false;
			}

		}
	}
	if(ok)
		break;
	len++;
}
while(k--){
for(int i = 0; i < len; i++){
	cout << t[i];
}
}
for(int i = len; i < t.length(); i++){
	cout << t[i];
}
return 0;
}