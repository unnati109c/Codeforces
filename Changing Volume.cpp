//  https://codeforces.com/contest/1255/problem/A

#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main() 
{
	ll t;
	cin>>t;
	
	while(t--)
	{
	       int a,b;
	       cin>>a>>b;
	       int ans=0;
	       if(a==b)
	       cout<<0<<endl;
	       else
	       {
	              int diff= abs(a-b);
	              
	              ans= (diff/5) + ((diff%5)/2) + ((diff%5)%2)  ;
	              
	              cout<<ans<<endl;
	       }
	}
	return 0;
}
