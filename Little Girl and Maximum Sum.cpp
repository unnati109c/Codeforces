//  https://codeforces.com/contest/276/problem/C

#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
	ll n, q;
	cin>>n>>q;

	vector<ll>v(n);
	for(ll i=0;i<n;i++)
	{
		cin>>v[i];
	}
	sort(v.begin(), v.end());
	vector<ll>freq(n,0);

	while(q--)
	{
		ll l, r;
		cin>>l>>r;
		freq[l-1]+=1;   // i assumed 0 based indexing, thats why!! 
		if(r+1-1<n) 
			freq[r+1-1]+=-1;
	}
	for(ll i=1;i<n;i++)
	{
		freq[i]= freq[i-1]+freq[i];
	}


	sort(freq.begin(), freq.end());
	
	ll ans =0;
	for(ll i=0;i<n;i++)
	{
		ans+=v[i]*freq[i];
	}
	cout<<ans<<endl;
	return 0;

}
