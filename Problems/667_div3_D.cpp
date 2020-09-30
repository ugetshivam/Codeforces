  
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
int sum(long long n) {
    int res = 0;
    while (n > 0) {
        res += n % 10;
        n /= 10;
    }
    return res;
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
    	ll n, s;
        cin >> n >> s;
        ll num_digits = log10(n);
        
        ll value = 0;
        ll num = n;
        
        ll count = num_digits;
        while(true){

            if(num / pow(10,num_digits) > s){
            num = pow(10, num_digits + 1);
            num_digits++;
            count = num_digits;
            break;
        }
            ll temp = num/pow(10,count);
            ll temp2 = temp%10;
            value += temp2;
            if(value <= s){

                count--;
            }
            else if(value > s){

                value -= temp2;
                num = ((num/pow(10,count + 1)) + 1);
                num = num*pow(10, count+1);
                value++;
                    while(value > s){

                        if(num / pow(10,num_digits) > s){
                            num = pow(10, num_digits + 1);

                            num_digits++;
                            count = num_digits;
                            break;
                    }
                    ll k = (num/pow(10,  count + 1));
                    value -= k%10;
                    num = num / pow(10, count + 2) + 1;
                    value++;
                    num *= pow(10, count + 2);
                    count++;

                }
                    break;
            }
            if(value <= s && count < 0){
                break;
            }
        }
        cout << num - n  << '\n';
        
        }
    	

    
    return 0;
}
// int t;
//     cin >> t;
//     while (t--) {
//         long long n;
//         int s;
//         cin >> n >> s;
//         long long ans = 0;
//         if (sum(n) <= s) {
//             cout << 0 << endl;
//             continue;
//         }
//         long long pw = 1;
//         for (int i = 0; i < 18; ++i) {
//             int digit = (n / pw) % 10;
//             long long add = pw * ((10 - digit) % 10);
//             n += add;
//             ans += add;
//             if (sum(n) <= s) {
//                 break;
//             }
//             pw *= 10;
//         }
//         cout << ans << endl;
//     }
    
//     return 0;
// }