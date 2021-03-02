//  https://codeforces.com/contest/1398/problem/B

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
		string s;
		cin>>s;
		ll n = s.length();
		ll consecutive_one=0;
		ll count_one[1000];
		ll x=0;
		for(ll i=0;i<n;i++)
		{
			if(s[i]=='1')
			{
			       if(s[i+1]=='1')
			       {
			              consecutive_one++;
			       }
			       else
			       {
			              consecutive_one++;
			              count_one[x]=consecutive_one;
			              consecutive_one=0;
			              x++;
			       }
			}
		}
		sort(count_one, count_one+x);
		ll sum=0;
		for(ll i=x-1;i>=0;i-=2)
		{
		       sum+=count_one[i];
		}
		cout<<sum<<endl;


	}
	return 0;
}
