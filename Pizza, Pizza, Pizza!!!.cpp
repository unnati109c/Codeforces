//  https://codeforces.com/contest/979/problem/A

#include <bits/stdc++.h> 
using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	
	long long int n;
	cin>>n;
	
	if(n==0)
	cout<<0<<endl;
	
	else if((n+1)%2==0)
	cout<<(n+1)/2<<endl;
	
	else
	cout<<n+1<<endl;

	return 0;
}
