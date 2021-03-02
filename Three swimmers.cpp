//  https://codeforces.com/contest/1492/problem/A

#include <bits/stdc++.h>
#define int long long
using namespace std;
 
int32_t main(){
    int t; cin >> t;
    while(t--){
        int p,a,b,c; cin >> p >> a >> b >> c;
        if(p%a == 0 || p%b == 0 || p%c == 0) 
            cout << "0\n";
        else 
            cout << min(a-(p%a),min(b-p%b,c-p%c)) << "\n";
    }
    return 0;
}
