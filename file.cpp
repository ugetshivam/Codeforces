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
// int negatives(int cur, string s, int pos){

// }
int main(){
#ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("inputf.in", "r", stdin);
    // for writing output to output.txt
    freopen("outputf.in", "w", stdout);
#endif

int t;
cin >> t;
while(t--)
{
	string s;
	cin >> s;
	int res = 0;
	for(int init = 0; ; init++)
	{
		int cur = init;
		bool ok = true;
		for(int i = 0; i < s.length(); i++)
		{
			res++;
			if(s[i] == '+')
				cur++;
			else
				cur--;
			if(cur < 0)
			{
				ok = false;
				break;
			}
		}
		
	}
// 	int count_1= 0, count_2 = 0, cur = 0;
// 	bool cond = false;
// 	if(s[0] == '+'){
// 		count_1++;
// 	for(int i = 1; i < s.length() ; i++)
// 	{
// 		res++;
// 		if(s[i] == '+'){
// 			continue;
// 			count_1++;
// 		}
// 		else{
// 			count_1--;
// 		}
// 		if(count_1 < 0)
// 		{

// 		}

// 	}
// }



	cout << res << '\n';
}
return 0; 
}