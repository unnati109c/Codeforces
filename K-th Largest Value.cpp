https://codeforces.com/contest/1491/problem/A

#include<bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define ll long long int

int main()
{
		ll n, q;
		cin>>n>>q;

		ll a[n], one=0;
		for(ll i=1;i<=n;i++)
		{
			cin>>a[i];
			one+=a[i];
			
		}
		
		ll l,r;
		while(q--)
		{
		       cin>>l>>r;
		       if(l==1)
		       {
		             one-=a[r];
		             a[r]^=1;
		             one+=a[r];
		       }
		       else
		       {
		              cout<<(one>=(r))<<endl;
		       }
		}


	
	return 0;
}
