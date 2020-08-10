  
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
vector <int> letters(26);
cin >> n >> m;
string s;
cin >> s;
vector <int> p(n);
for(int i = 0;i < m; i++){
	cin >> p[i];
}
int tries = 0, diff;
char comp = 'a';
for(int i = 0; i < s.length(); i++){
	diff = s[i] - comp;
	letters[diff]++;
	if(i == p[tries] - 1)
	{
		i = -1;
		tries++;
	}

}

for(int i = 0; i < 26; i++)
	cout << letters[i] << ' ';
cout << '\n';


 }

    return 0;

}