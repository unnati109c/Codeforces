// https://codeforces.com/contest/1335/problem/C

#include<bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define ll long long int

int main()
{
	ll t;
	cin>>t;
	while(t--)
	{
		ll n;
		cin>>n;

		ll a[n];
		map<ll,ll>m;
		ll mx = -1;
		for(ll i=0;i<n;i++)
		{
			cin>>a[i];
			m[a[i]]++;
			mx = max(mx,m[a[i]]);
		}
		
		ll sz = m.size();
		
		if(mx==sz)
              cout<<mx-1<<endl;
              else
              cout<<min(mx,sz)<<endl;
		
		


	}
	return 0;
}
